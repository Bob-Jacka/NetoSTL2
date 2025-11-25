#include <algorithm>
#include <iostream>
#include <vector>

import Libio;

int main() {
    std::vector numbers = {1, 1, 2, 5, 6, 1, 2, 4};
    libio::output::print(std::string("[IN]: "));
    libio::output::lineArrayOutput(numbers);

    std::ranges::sort(numbers);

    const auto it = std::ranges::unique(numbers).begin();
    numbers.erase(it, numbers.end());

    libio::output::print(std::string("\n[OUT]: "));
    libio::output::lineArrayOutput(numbers);
}
