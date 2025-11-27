#include "core/cli.hpp"
#include "render/render2Dart.hpp"

Cli::Cli() {
    std::cout<< "Cli initialized.";
}

Cli::~Cli() {
}

void Cli::parseCommands(int argc, char* argv[]) {
    // Command parsing logic goes here
    Render2Dart renderer;
}