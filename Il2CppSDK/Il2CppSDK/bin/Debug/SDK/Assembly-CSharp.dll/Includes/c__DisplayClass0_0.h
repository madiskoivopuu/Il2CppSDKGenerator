#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass00
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass0_0"));
	}

	template <typename T = Il2CppString*> T& templateExcludePattern() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& infoExcludePattern() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = bool> T GetAllMountsb__0(uintptr_t x) {
		return ((T (*)(cDisplayClass00*, uintptr_t))(Il2CppBase() + 0x111CF78))(this, x);
	}

};

}
