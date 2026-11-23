// overlay.cpp — part of rob-run-map-view.

#include "robrunmapview/overlay.h"

#include <cstdio>

namespace robrunmapview {

Overlay::Overlay(const std::string& config_path)
    : config_path_(config_path) {}

void Overlay::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Overlay::run() {
    if (verbose_) std::fprintf(stderr, "[rob-run-map-view] overlay: run\n");
    // core logic lives here
    return true;
}

}  // namespace robrunmapview
