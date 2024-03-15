#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TabInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TabInfo"));
	}

	template <typename R = bool> R& IsCustom() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 Il2CppList<CheatInfo*>*& Cheats() {
		return *(Il2CppList<CheatInfo*>**)((uintptr_t)this + 0x18);
	}
	 HashSet1Il2CppString*>*& CheatsCache() {
		return *(HashSet1Il2CppString*>**)((uintptr_t)this + 0x20);
	}


};

