#pragma once
#include <iostream>
#include <filesystem>
namespace fs = std::filesystem;

class IFMOperations
{
public:
	IFMOperations(fs::path path) { m_srcPath = path; }
	virtual void Execute(fs::path path) = 0;
	virtual void Execute(fs::path srcPath, fs::path dstPath) = 0;
protected:
	fs::path m_srcPath;
	fs::path m_dstPath;
};

