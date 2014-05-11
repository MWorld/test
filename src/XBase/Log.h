//

#ifndef __Log_H__
#define __Log_H__

#include "Platform.h"

namespace XW
{
	class Log
	{
	public:
		Log();
		~Log();

		static void Info(const String& log);
		static void Warning(const String& log);
		static void Error(const String& log);
		static void Debug(const String& log);
	};
}

#endif // __Log_H__
