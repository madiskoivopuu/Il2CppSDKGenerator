#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TabInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TabInfo"));
	}

	template <typename T = bool> T& IsCustom() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<CheatInfo*>*> T& Cheats() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = HashSet1Il2CppString*>*> T& CheatsCache() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

