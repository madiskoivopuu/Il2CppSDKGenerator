#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass380
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass38_0"));
	}

	template <typename R = RaidWindow*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = PvPEntity*> R& pvp() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = int64_t> R& now() {
		return *(R*)((uintptr_t)this + 0x10);
	}


};

