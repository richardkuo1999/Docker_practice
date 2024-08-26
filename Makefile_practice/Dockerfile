FROM ubuntu:20.04

# ADD jdk-22_linux-x64_bin.tar.gz / 

RUN apt-get update && \
	apt-get install -y wget && \
	cd / && \
	wget https://download.oracle.com/java/22/latest/jdk-22_linux-x64_bin.tar.gz && \
	tar zxvf jdk-22_linux-x64_bin.tar.gz && \
	wget http://dlcdn.apache.org/tomcat/tomcat-10/v10.1.28/bin/apache-tomcat-10.1.28.tar.gz && \
	tar zxvf apache-tomcat-10.1.28.tar.gz

ENV JAVA_HOME=/jdk-22.0.2
ENV PATH=$PATH:/jdk-22.0.2/bin
CMD ["/apache-tomcat-10.1.28/bin/catalina.sh", "run"]

