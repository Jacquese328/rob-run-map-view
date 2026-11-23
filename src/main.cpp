// main.cpp — entry point. Wires config and subsystems together.

#include "robrunmapview/settings.h"
#include "robrunmapview/mapper.h"
#include "robrunmapview/streamer.h"
#include "robrunmapview/overlay.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    robrunmapview::Settings settings = robrunmapview::Settings::load_default();
    robrunmapview::Mapper mapper(settings.store_path);
    robrunmapview::Streamer streamer(settings.store_path);
    robrunmapview::Overlay overlay(settings.store_path);
    std::fprintf(stderr, "[rob-run-map-view] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
