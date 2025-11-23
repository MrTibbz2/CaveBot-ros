FROM osrf/ros:jazzy-desktop
RUN apt update && apt install -y python3-pip && \
    pip3 install --break-system-packages "numpy>=1.21.6,<2.0" onnxruntime opencv-python onnx imread-from-url
