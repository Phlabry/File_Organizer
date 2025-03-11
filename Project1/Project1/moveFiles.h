#pragma once
#ifndef MOVEFILES
#define MOVEFILES
#include "sortFiles.h"
#include <filesystem>
#include "movingModes.h"
using namespace std;
namespace fs = std::filesystem;

void moveFiles(const fs::path& source, const fs::path& destination, movingModes mode);

#endif
