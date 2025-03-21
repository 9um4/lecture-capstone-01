#include <iostream>
#include <map>
#include "../utils/multimap.h"
#include "../utils/file.h"
#include <limits>

#define MAX 10

using namespace std;

int main() {
    multimap<uint64_t, uint64_t> mulmap;

    uint64_t times[MAX];
    for (int i = 0; i < MAX; i++) {
        times[i] = insert_test_multimap(mulmap, i);
    }

    save_array(times, MAX, "./logs");
}

