#!/bin/bash

(
    top -l 10 -s 5
) &

./factorial
