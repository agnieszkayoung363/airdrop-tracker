// tasks.cpp — part of airdrop-tracker.

#include "airdroptracker/tasks.h"

#include <cstdio>

namespace airdroptracker {

Tasks::Tasks(const std::string& config_path)
    : config_path_(config_path) {}

void Tasks::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Tasks::run() {
    if (verbose_) std::fprintf(stderr, "[airdrop-tracker] tasks: run\n");
    // core logic lives here
    return true;
}

}  // namespace airdroptracker
