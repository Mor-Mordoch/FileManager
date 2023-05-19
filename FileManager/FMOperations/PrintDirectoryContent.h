#pragma once
#include "IFMOperations.h"

class PrintDirectoryContent : public IFMOperations
{
public:
	PrintDirectoryContent(fs::path path) : IFMOperations(path) {}
	void Execute(fs::path path) override;
	void Execute(fs::path srcPath, fs::path dstPath) override;
};

