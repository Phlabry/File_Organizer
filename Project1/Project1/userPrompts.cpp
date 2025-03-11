#include "userPrompts.h"

void userPrompts() {
	string sourceStr;
	string destinationStr;
	cout << "Enter the path to the source directory: " ;
	cin >> sourceStr;
	cout << "\nEnter the path to the target directory: ";
	cin >> destinationStr;

	fs::path sourcePath(sourceStr);
	fs::path destinationPath(destinationStr);

	cout << endl;

	int mode;
	cout << "Enter mode (0 for copy, 1 for move): ";
	cin >> mode;

	moveFiles(sourcePath, destinationPath, static_cast<movingModes>(mode));

	cout << "Moving Finished" << endl;

	return;
}