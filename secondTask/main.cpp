#include <iostream>
#include <list>
#include <set>
#include <vector>

/**
 * Weird construction for correct output separator.
 * @tparam T generic type
 * @param container container object to print out
 * @param separator separator value between values
 */
template<typename T>
void print_container(const T &container, const std::string &separator = " ") {
    const size_t container_size = container.size();
    int i = 0;
    for (const auto &elem: container) {
        if (i < container_size - 1) {
            std::cout << elem << separator;
        } else {
            std::cout << elem;
        }
        ++i;
    }
    std::cout << std::endl;
}

int main() {
    const std::set<std::string> test_set = {"one", "two", "three", "four"};
    print_container(test_set); // four one three two

    const std::list<std::string> test_list = {"one", "two", "three", "four"};
    print_container(test_list, ", "); // one, two, three, four

    const std::vector<std::string> test_vector = {"one", "two", "three", "four"};
    print_container(test_vector, ", "); // one, two, three, four
}
