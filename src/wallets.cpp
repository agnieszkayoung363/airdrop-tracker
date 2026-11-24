// wallets.cpp — part of airdrop-tracker.

#include "airdroptracker/wallets.h"

#include <cstdio>

namespace airdroptracker {

Wallets::Wallets(const std::string& config_path)
    : config_path_(config_path) {}

void Wallets::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Wallets::run() {
    if (verbose_) std::fprintf(stderr, "[airdrop-tracker] wallets: run\n");
    // core logic lives here
    return true;
}

}  // namespace airdroptracker
