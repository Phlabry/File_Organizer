#pragma once
#ifndef READDIRECTORIES
#define READDIRECTORIES
#include <filesystem>
#include <string>
#include <iostream>
using namespace std;
namespace fs = std::filesystem;

void makeDefaultDirectories(const string& path);
bool checkDirectory(const string& path);
#endif
