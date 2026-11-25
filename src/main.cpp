// main.cpp — entry point. Wires config and subsystems together.

#include "rrboosttool/settings.h"
#include "rrboosttool/tuner.h"
#include "rrboosttool/network.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    rrboosttool::Settings settings = rrboosttool::Settings::load_default();
    rrboosttool::Tuner tuner(settings.store_path);
    rrboosttool::Network network(settings.store_path);
    std::fprintf(stderr, "[rr-boost-tool] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
