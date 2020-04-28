FROM ubuntu:18.04

RUN apt-get update && DEBIAN_FRONTEND=noninteractive apt-get install -y \
git \
gnuplot \
graphviz \
python3 \
python3-pip \
sudo \
texlive-font-utils \
texlive-latex-base \
texlive-latex-extra \
;


ARG UID=1000
ARG GID=1000
RUN groupadd -g $GID -o developer
RUN useradd -m -u $UID -g $GID -s /bin/bash developer
RUN echo "developer ALL=(ALL) NOPASSWD:ALL" >> /etc/sudoers

WORKDIR /home/developer
USER developer
ENV LC_ALL=C.UTF-8 LANG=C.UTF-8

RUN pip3 install --user --no-cache-dir git+https://github.com/florath/rmtoo

