#pragma once
#include <iostream>
#include <filesystem>
#include "FMOperations/IFMOperations.h"
#include "FMOperations/PrintDirectoryContent.h"
namespace fs = std::filesystem;

class FileManager
{
public:
	FileManager(fs::path path);
	FileManager(fs::path srcPath, fs::path dstPath);
	void Execute();
private:
	IFMOperations* m_FMOperation;
	fs::path m_srcPath;
};

