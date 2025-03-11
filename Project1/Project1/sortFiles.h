#pragma once
#ifndef SORTFILES
#define SORTFILES
#include <filesystem>
#include <string>
#include <iostream>
#include "readFileType.h"
#include "readDirectory.h"
#include "movingModes.h"
using namespace std;
namespace fs = std::filesystem;

void sortFiles(const fs::path& file, const fs::path& destination, movingModes mode);
#endif
