#include "multimap.h"

uint64_t insert_test_multimap(multimap<uint64_t, uint64_t> &mulmap, uint64_t n_nodes, bool print) {
    // 랜덤 엔진 및 분포 설정
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<uint64_t> dis(0, n_nodes - 1);

    vector<pair<uint64_t, uint64_t>> nodes(n_nodes);
    for (uint64_t i = 0; i < n_nodes; i++) {
        nodes[i] = pair<uint64_t, uint64_t>(dis(gen), dis(gen));
    }

    auto start = chrono::high_resolution_clock::now();

    for (uint64_t i = 0; i < n_nodes; i++) {
        mulmap.insert(nodes[i]);
    }

    if (print) print_multimap(mulmap);

    auto end = chrono::high_resolution_clock::now();

    auto duration = chrono::duration_cast<chrono::microseconds>(end - start);
    cout << n_nodes << " Insertion completed in " << duration.count() << " microseconds." << endl;
    return duration.count();
}