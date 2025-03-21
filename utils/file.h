#include <fstream>
#include <iostream>
#include <cstdint>
#include <string>
#include <chrono>
#include <ctime>
#include "time.h"

using namespace std;

int save_array(uint64_t* array, size_t size, const string& filename);