#!/bin/bash
CLEAR="clear"
$CLEAR
RUN="make"
$RUN
if [ "$1" = 1 ]; then
RUN="./tsh"
$RUN
fi
