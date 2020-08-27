FROM takeharuk/bgc:v1.1

RUN apt update && apt install default-jdk -y

RUN apt install -y lcov