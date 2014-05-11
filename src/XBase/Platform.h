
#ifndef __Platform_H__
#define __Platform_H__


namespace XW
{
	typedef unsigned char uchar;
	typedef unsigned short ushort;
	typedef unsigned int uint;
	typedef unsigned long ulong;

	typedef unsigned char uint8;
	typedef unsigned short uint16;
	typedef unsigned int uint32;
	typedef unsigned __int64 uint64;

	typedef char int8;
	typedef short int16;
	typedef int int32;
	typedef __int64 int64;
}

// STL containers
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>

namespace XW
{
	typedef std::string String;

	template <typename T>
	struct vector { typedef typename std::vector<T> type; };

	template <typename T>
	struct list { typedef typename std::list<T> type; };

	template <typename T, typename P = std::less<T>>
	struct set { typedef typename std::set<T, P> type; };

	template <typename K, typename V, typename P = std::less<K>>
	struct map { typedef typename std::map<K, V, P> type; };

	template <typename K, typename V, typename P = std::less<K>>
	struct multimap { typedef typename std::multimap<K, V, P> type; };
}

#endif // __Platform_H__