#include <iostream>
#include <memory>
#include <filesystem>
#include "FileManager.h"

int main(int argc, char* argv[])
{
	//std::cout << "Input from CMD: " << argv[1] << std::endl;
	std::filesystem::path path = "C:\\Dev\\FileManager\\Tests\\Src";
	std::filesystem::path path2 = "C:\\Dev\\FileManager\\Tests\\Dst";
	FileManager* fm = new FileManager(path, path2);
	fm->Execute();
	return 0; 
}