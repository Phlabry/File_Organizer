#include "readDirectory.h"

void makeDefaultDirectories(const string& path) {
	vector<string> dirs = { "Photos", "Videos", "Audio", "Documents", "Archives",
							   "Executables", "SourceCode", "DiskImages", "Other" };

	cout << endl;
	cout << "_____________________________________________________________________" << endl;
	cout << endl;
	for (const auto& dir : dirs) {
		string fullPath = path + "/" + dir;
		if (!fs::exists(fullPath)) {
			fs::create_directory(fullPath);
			cout << "Created: " << fullPath << endl;
		}
		else {
			cout << "Already Exists: " << fullPath << endl;
		}
	}

	cout << "_____________________________________________________________________" << endl;
	cout << endl;
	
	return;
}

bool checkDirectory(const string& path) {

	if (!fs::exists(path)) {
		std::cout << "Path does not exist. Creating directories..." << std::endl;

		// Create the directory and any necessary parent directories
		if (fs::create_directories(path)) {
			std::cout << "Created: " << path << std::endl;
		}
		else {
			std::cout << "Failed to create: " << path << std::endl;
			return false; // Return false if directory creation failed
		}
	}

	makeDefaultDirectories(path);

	return true;
}
