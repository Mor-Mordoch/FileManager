#include "PrintDirectoryContent.h"

void PrintDirectoryContent::Execute(fs::path path)
{
	std::cout << m_srcPath << std::endl;
	for (const auto& file : fs::directory_iterator(m_srcPath))
	{
		std::cout << '\t' << file << std::endl;
	}
}

void PrintDirectoryContent::Execute(fs::path srcPath, fs::path dstPath)
{
	return;
}