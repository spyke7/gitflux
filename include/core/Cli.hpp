#pragma once

#include <iostream>

class Cli {
public:
    Cli();
    ~Cli();

    void parseCommands(int argc, char* argv[]);
};