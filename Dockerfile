FROM debian:buster

WORKDIR /perf

RUN apt-get update && \
    apt-get install -y build-essential

COPY ./factorial.c .

RUN make factorial

CMD '/perf/factorial'
