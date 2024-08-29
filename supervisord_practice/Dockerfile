FROM ubuntu:20.04

COPY main.c .


RUN apt-get update \
	&& apt-get install -y build-essential \
	&& apt-get install -y supervisor \
	&& g++ -o main main.c

COPY main.conf /etc/supervisor/conf.d

CMD ["bin/bash"]

