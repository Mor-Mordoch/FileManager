#include "PrintDirectoryContent.h"

void PrintDirectoryContent::Execute()
{
	std::cout << m_srcPath << std::endl;
	for (const auto& file : fs::directory_iterator(m_srcPath))
	{
		std::cout << '\t' << file << std::endl;
	}
	
	// if destination path is not empty
	if (m_dstPath != fs::path())
	{
		std::cout << m_dstPath << std::endl;
		for (const auto& file : fs::directory_iterator(m_dstPath))
		{
			std::cout << '\t' << file << std::endl;
		}
	}
}