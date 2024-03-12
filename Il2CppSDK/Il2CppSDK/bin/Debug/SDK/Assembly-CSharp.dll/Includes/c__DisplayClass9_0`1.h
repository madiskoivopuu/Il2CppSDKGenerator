#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass901
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass9_0`1"));
	}

	template <typename T = uintptr_t> T& locker() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& blueprints() {
		return *(T*)((uintptr_t)this + 0x0);
	}


};

}
