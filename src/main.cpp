#include "include/constants.h"
#include <iostream>
#include <string_view>
#include <thread>
#include <chrono>

int main() {
    using namespace std::chrono_literals;
    for (std::string_view sw : constants::logo_007) {
        std::cout << sw << '\n';
        std::this_thread::sleep_for(250ms);
    }

    return 0;
}