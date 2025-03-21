#include "time.h"

string get_current_time_as_string() {
    auto now = chrono::system_clock::now();
    time_t current_time = chrono::system_clock::to_time_t(now);

    // time_t를 문자열로 변환
    tm *local_time = localtime(&current_time);

    // 문자열 스트림을 사용하여 포맷팅
    stringstream ss;
    ss << (1900 + local_time->tm_year) << "-"
       << (1 + local_time->tm_mon) << "-"
       << local_time->tm_mday << "_"
       << local_time->tm_hour << "-"
       << local_time->tm_min << "-"
       << local_time->tm_sec;

    return ss.str();
}