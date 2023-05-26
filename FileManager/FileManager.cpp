#include "FileManager.h"

FileManager::FileManager(fs::path srcPath, fs::path dstPath)
{
	m_FMOperation = new PrintDirectoryContent(srcPath, dstPath);
	if (dstPath != fs::path())
	{
		std::cout << "Two paths";
		m_dstPath = dstPath;
	}
	else {
		std::cout << "one path";
	}
}

void FileManager::Execute()
{
	m_FMOperation->Execute();
}