#include <iostream>
#include <memory>
#include <filesystem>
#include "FileManager.h"

int main()
{
	std::filesystem::path path = "C:\\Dev\\FileManager\\Tests\\Src";
	FileManager* fm = new FileManager(path);
	fm->Execute();
	return 0; 
}