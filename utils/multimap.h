#include <iostream>
#include <map>
#include <random>
#include <chrono>

using namespace std;

template <typename T, typename V>
void print_multimap(const std::multimap<T, V> &mulmap) {
    
    std::cout << "{" << std::endl;

    for (auto it = mulmap.begin(); it != mulmap.end(); it++) {
        if (it == mulmap.begin()) {
            std::cout << "\t" << it->first << ": " << it->second;
            continue;
        }
        std::cout << ",\n\t" << it->first << ": " << it->second;
    }

    std::cout << std::endl << "}" << std::endl;
}

uint64_t insert_test_multimap(multimap<uint64_t, uint64_t> &mulmap, uint64_t n_nodes, bool print = false);