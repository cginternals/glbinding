FROM ubuntu:22.04

ENV DEBIAN_FRONTEND=noninteractive

RUN apt update
RUN apt install -y software-properties-common
RUN add-apt-repository -y ppa:cginternals/ppa

RUN apt install -y libglbinding
RUN apt install -y libglbinding-dev
RUN apt install -y libglbinding-all
