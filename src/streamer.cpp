// streamer.cpp — part of rob-run-map-view.

#include "robrunmapview/streamer.h"

#include <cstdio>

namespace robrunmapview {

Streamer::Streamer(const std::string& config_path)
    : config_path_(config_path) {}

void Streamer::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Streamer::run() {
    if (verbose_) std::fprintf(stderr, "[rob-run-map-view] streamer: run\n");
    // core logic lives here
    return true;
}

}  // namespace robrunmapview
