#pragma once

// This file will be included in "fastfetch.h", do NOT put unnecessary things here

#include "common/option.h"

typedef struct FFNetIOOptions
{
    FFModuleBaseInfo moduleInfo;
    FFModuleArgs moduleArgs;

    FFstrbuf namePrefix;
    uint32_t waitTime;
    bool defaultRouteOnly;
    bool detectTotal;
} FFNetIOOptions;
