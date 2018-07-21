#ifndef IO_LIBRARY_H
#define IO_LIBRARY_H

#include "pvpf/data_io/io_pipe.hpp"

// Interface exported for PVP framework
extern "C" void input(pvpf::data_io::source_io_pipe & pipe);
extern "C" void output(pvpf::data_io::sink_io_pipe & pipe);

#endif