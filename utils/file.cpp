#include "file.h"

using namespace std;

int save_array(uint64_t *array, size_t size, const string &dir) {
    string filepath = dir + "/" + get_current_time_as_string();
    ofstream file;
    file.open(filepath, ios::out);
    if (!file.is_open()) {
        cerr << "Error: Could not open the file for writing." << endl;
        return 1; // 파일 열기 실패
    }

    file << "Max Nodes Count : " << size << endl << endl;

    // 배열 데이터를 index\tvalue\n 형식으로 파일에 저장
    for (size_t i = 0; i < size; i++) {
        file << i << "\t" << array[i] << "\n";
    }

    file.close();
    return 0; // 성공
}