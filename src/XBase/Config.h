//

#ifndef __Config_H__
#define __Config_H__

#include "Platform.h"

namespace XW
{
	class Config
	{
	public:
		Config();
		~Config();

		static String GetString(const String& name);
		static int32 GetInt(const String& name);
	};
}

#endif // __Config_H__
