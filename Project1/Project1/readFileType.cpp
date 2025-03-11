#include "readFileType.h"

std::unordered_map<string,string> fileCategories = {
    // Images
    {".jpg", "Images"},
    {".jpeg", "Images"},
    {".png", "Images"},
    {".gif", "Images"},
    {".bmp", "Images"},
    {".tiff", "Images"},
    {".svg", "Images"},

    // Videos
    {".mp4", "Videos"},
    {".mkv", "Videos"},
    {".flv", "Videos"},
    {".avi", "Videos"},
    {".mov", "Videos"},
    {".wmv", "Videos"},

    // Audio
    {".mp3", "Audio"},
    {".wav", "Audio"},
    {".flac", "Audio"},
    {".aac", "Audio"},
    {".ogg", "Audio"},

    // Documents
    {".pdf", "Documents"},
    {".doc", "Documents"},
    {".docx", "Documents"},
    {".txt", "Documents"},
    {".odt", "Documents"},
    {".rtf", "Documents"},
    {".xls", "Documents"},
    {".xlsx", "Documents"},
    {".ppt", "Documents"},
    {".pptx", "Documents"},

    // Archives
    {".zip", "Archives"},
    {".rar", "Archives"},
    {".7z", "Archives"},
    {".tar", "Archives"},
    {".gz", "Archives"},

    // Executables
    {".exe", "Executables"},
    {".msi", "Executables"},
    {".sh", "Executables"},
    {".bat", "Executables"},

    // Source Code / Scripts
    {".cpp", "SourceCode"},
    {".c", "SourceCode"},
    {".h", "SourceCode"},
    {".hpp", "SourceCode"},
    {".py", "SourceCode"},
    {".java", "SourceCode"},
    {".js", "SourceCode"},
    {".html", "SourceCode"},
    {".css", "SourceCode"},
    {".ahk", "SourceCode"},

    // Disk Images
    {".iso", "DiskImages"},
    {".dmg", "DiskImages"}
};


string getFolderForType(const string& fileExtension) {
    if (fileCategories.find(fileExtension) != fileCategories.end()) {
        return fileCategories[fileExtension];
    }
    else {
        std::cout << "Extension not found, defaulting to 'Other'." << std::endl;
    }
    
    return "Other";
}

