#!/bin/bash -e

export PULPRT_TARGET=kairos
export PULPRUN_TARGET=kairos

if [  -n "${ZSH_VERSION:-}" ]; then
        DIR="$(readlink -f -- "${(%):-%x}")"
        scriptDir="$(dirname $DIR)"
else

    scriptDir="$(dirname "$(readlink -f "${BASH_SOURCE[0]}")")"

fi

source $scriptDir/common.sh

export PULPRT_CONFIG_CFLAGS='-DARCHI_ASIC_PER_FREQUENCY=100000000 \
       -DARCHI_ASIC_FC_FREQUENCY=100000000 \
       -DARCHI_ASIC_CL_FREQUENCY=100000000'
