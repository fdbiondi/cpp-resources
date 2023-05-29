FROM ubuntu:22.04

ARG DEBIAN_FRONTEND=noninteractive

# Install base packages
RUN set -ex && \
	apt-get update && \
	apt-get install -y lsb-release wget software-properties-common

# Install clang toolchain version 14
RUN wget https://apt.llvm.org/llvm.sh &&\
	chmod +x llvm.sh && \
	./llvm.sh 14

# Install git, cmake, gdb
RUN set -ex && \
	apt-get update && \
	apt-get install -y build-essential git cmake g++ gdb clang net-tools

## c++ source libraries
## https://boostorg.jfrog.io/artifactory/main/release/1.82.0/source/boost_1_82_0.tar.gz
#
# RUN cd ${HOME} && \
#     wget --no-check-certificate --quiet \
#     https://boostorg.jfrog.io/artifactory/main/release/1.82.0/source/boost_1_82_0.tar.gz && \
#     tar xzf ./boost_1_82_0.tar.gz && \
#     cd ./boost_1_82_0 && \
#     ./b2 install && \
#     cd .. && \
#     rm -rf ./boost_1_82_0

