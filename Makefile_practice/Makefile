.PhONY: all runDocker buildDockerimages

all: runDocker

runDocker:buildDockerimages
	docker run -p 8080:8080 makefile_practice 

buildDockerimages:Dockerfile
	docker build -t makefile_practice . --no-cache; \
