#! /bin/bash
# Copyright (C) 2021 Xilinx, Inc
# SPDX-License-Identifier: BSD-3-Clause

set -x
set -e

. /etc/environment
export HOME=/root
export BOARD=${PYNQ_BOARD}

cd /root/rfsystem_build
pip3 install .

cd /root
rm -rf rfsystem_build
