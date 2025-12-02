# Dockerfile
FROM osrf/ros:jazzy-desktop

ARG USE_GPU=false
ENV USE_GPU=${USE_GPU}

# Install base and python
RUN apt-get update && apt-get install -y --no-install-recommends \
        python3-pip \
        wget \
        curl \
        gnupg2 \
        ca-certificates \
    && rm -rf /var/lib/apt/lists/*

# GPU libraries install
RUN if [ "$USE_GPU" = "true" ]; then \
        apt-get update && apt-get install -y --no-install-recommends \
            nvidia-utils-535 \
            wget \
            gnupg2 \
        && wget https://developer.download.nvidia.com/compute/cuda/repos/ubuntu2204/x86_64/cuda-keyring_1.1-1_all.deb \
        && dpkg -i cuda-keyring_1.1-1_all.deb \
        && rm cuda-keyring_1.1-1_all.deb \
        && apt-get update && apt-get install -y --no-install-recommends \
            cuda-runtime-12-1 \
            libcudnn9-cuda-12=9.0.0.312-1 \
            libcublas-12-1 \
            libnccl2 \
        && rm -rf /var/lib/apt/lists/* ; \
    fi

# Set library path
ENV LD_LIBRARY_PATH=/usr/local/cuda/lib64:$LD_LIBRARY_PATH

# Python deps
RUN pip3 install --break-system-packages "numpy>=1.21.6,<2.0"

# ONNX Runtime install
RUN if [ "$USE_GPU" = "true" ]; then \
        pip3 install --break-system-packages onnxruntime-gpu==1.23.2 ; \
    else \
        pip3 install --break-system-packages onnxruntime==1.23.2 ; \
    fi

RUN pip3 install --break-system-packages --no-deps \
        opencv-python \
        onnx \
        imread-from-url

WORKDIR /CaveBot-ros

CMD ["/bin/bash"]
