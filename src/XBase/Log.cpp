//

#include "Log.h"
#include <iostream>

namespace XW
{
	Log::Log()
	{
	}


	Log::~Log()
	{
	}

	void Log::Info(const String& log)
	{
		std::cout << log << std::endl;
	}
}
