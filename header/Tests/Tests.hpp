#pragma once
#include <gtest/gtest.h>

#define InitTest InitTest

namespace Tests {

    class Manager {
    public:
        Manager() = delete;
        Manager(int argc, char **argv);

        int runAll();
    };
}