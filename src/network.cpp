// network.cpp — part of rr-boost-tool.

#include "rrboosttool/network.h"

#include <cstdio>

namespace rrboosttool {

Network::Network(const std::string& config_path)
    : config_path_(config_path) {}

void Network::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Network::run() {
    if (verbose_) std::fprintf(stderr, "[rr-boost-tool] network: run\n");
    // core logic lives here
    return true;
}

}  // namespace rrboosttool
