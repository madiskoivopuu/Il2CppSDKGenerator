#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGames {

class PluginVersion
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames", "PluginVersion"));
	}

	template <typename R = int32_t> static R& VersionInt() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& VersionString() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& VersionKey() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
