#!/bin/bash

(
    top -l 10 -i 10
) &

./factorial
