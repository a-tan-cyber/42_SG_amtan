#!/bin/bash
ifconfig -a | awk '/ether|HWaddr/ { print $2 }'
