#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass00
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass0_0"));
	}

	template <typename R = Il2CppString*> R& templateExcludePattern() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& infoExcludePattern() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = bool> R GetAllMountsb__0(ItemEntity* x) {
		return ((R (*)(cDisplayClass00*, ItemEntity*))(Il2CppBase() + 0x111CF78))(this, x);
	}

};

