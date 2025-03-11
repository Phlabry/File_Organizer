#include "moveFiles.h"

void moveFiles(const fs::path& source, const fs::path& destination, movingModes mode) {
    checkDirectory(destination.string());
    for (const auto& entry : fs::directory_iterator(source)) {
        if (fs::is_regular_file(entry)) {
            sortFiles(entry, destination, mode);  // Pass the file path
		    cout << "Moved: " << source << " to " << destination << endl;
        }
        else if (fs::is_directory(entry)) {
            // Optionally, you can handle directories differently if needed
            cout << "Skipping directory: " << entry.path() << endl;
        }
    }

	return;
}
