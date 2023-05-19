#pragma once
#include <iostream>
#include <filesystem>
namespace fs = std::filesystem;

class FileManager
{
public:
	FileManager(fs::path path);
	FileManager(fs::path srcPath, fs::path dstPath);
};

