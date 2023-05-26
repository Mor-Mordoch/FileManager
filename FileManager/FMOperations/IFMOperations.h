#pragma once
#include <iostream>
#include <filesystem>
namespace fs = std::filesystem;

class IFMOperations
{
public:
	IFMOperations(fs::path srcPath, fs::path dstPath = fs::path()) : m_srcPath(srcPath), m_dstPath(dstPath) {}
	virtual void Execute() = 0;
protected:
	fs::path m_srcPath;
	fs::path m_dstPath;
};

