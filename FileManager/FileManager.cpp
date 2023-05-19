#include "FileManager.h"

FileManager::FileManager(fs::path path) : m_srcPath(path)
{
	m_FMOperation = new PrintDirectoryContent(path);
}

FileManager::FileManager(fs::path srcPath, fs::path dstPath)
{

}

void FileManager::Execute()
{
	m_FMOperation->Execute(m_srcPath);
}