#!/bin/bash
# DepthGpu.sh
docker run -it \
    --runtime=nvidia \
    --gpus all \
    --cap-add=SYS_ADMIN \
    --network host \
    -v ~/CaveBot-ros:/CaveBot-ros:Z \
    cavebot-ros-gpu /bin/bash
