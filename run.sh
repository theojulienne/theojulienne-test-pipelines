#!/bin/bash

(
    for i in $(seq 10); do
        top -l 1
        sleep 10
    done
) &

./factorial
