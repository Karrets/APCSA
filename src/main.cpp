#include <iostream>

#include "commander.hpp"

int main() {
    std::cout << int(commander::parse("attank"));

    return 0;
}