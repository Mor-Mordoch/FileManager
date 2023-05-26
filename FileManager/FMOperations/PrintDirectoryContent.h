#pragma once
#include "IFMOperations.h"

class PrintDirectoryContent : public IFMOperations
{
public:
	PrintDirectoryContent(fs::path srcPath, fs::path dstPath = fs::path()) : IFMOperations(srcPath, dstPath) {}
	void Execute() override;
};

