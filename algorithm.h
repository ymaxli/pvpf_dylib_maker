#ifndef DYLIBTEST_LIBRARY_H
#define DYLIBTEST_LIBRARY_H

#include "pvpf/utils/data_bucket.hpp"

// Interface exported for PVP framework
extern "C" void test1(pvpf::data_bucket &data, pvpf::data_bucket const &params);
extern "C" void test2(pvpf::data_bucket &data, pvpf::data_bucket const &params);

#endif