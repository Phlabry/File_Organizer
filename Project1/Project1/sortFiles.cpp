#include "sortFiles.h"

void sortFiles(const fs::path& file, const fs::path& destination, movingModes mode) {

    cout << "_______________________" << endl;
    cout << endl;
    string extension = file.extension().string();
    cout << "Extracted extension: '" << extension << "'" << endl;
    string folder = getFolderForType(extension);
    cout << "Folder determined: " << folder << endl;
    cout << "_______________________" << endl;

    cout << endl;
    cout << "Checking file: " << file << " with extension: " << extension << endl;

    fs::path targetFolder = destination / folder;

    fs::path target = targetFolder / file.filename();

    switch (mode) {
    case COPY:
        fs::copy(file, target, fs::copy_options::overwrite_existing);
        std::cout << "Copied: " << file << " to " << target << std::endl;
        break;
    case MOVE:
        fs::rename(file, target);
        std::cout << "Moved: " << file << " to " << target << std::endl;
        break;
    default:
        std::cout << "Unknown mode." << std::endl;
        break;
    }

    return;
}