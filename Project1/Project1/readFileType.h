#pragma once
#ifndef READFILETYPE
#define READFILETYPE
#include <filesystem>
#include <string>
#include <iostream>
#include <unordered_map>
using namespace std;

string getFolderForType(const string& fileExtension);
#endif