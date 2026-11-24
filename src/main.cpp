// main.cpp — entry point. Wires config and subsystems together.

#include "airdroptracker/settings.h"
#include "airdroptracker/wallets.h"
#include "airdroptracker/tasks.h"
#include "airdroptracker/alerts.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    airdroptracker::Settings settings = airdroptracker::Settings::load_default();
    airdroptracker::Wallets wallets(settings.store_path);
    airdroptracker::Tasks tasks(settings.store_path);
    airdroptracker::Alerts alerts(settings.store_path);
    std::fprintf(stderr, "[airdrop-tracker] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
