from setuptools import setup, find_packages

setup(
    name="hitnet-stereo-depth",
    version="0.1.0",
    packages=find_packages(),
    install_requires=[
        "opencv-python",
        "imread-from-url",
        "onnx",
        "onnxruntime",
        "numpy>=1.21.6,<1.28.0"
    ],
    python_requires=">=3.8",
)