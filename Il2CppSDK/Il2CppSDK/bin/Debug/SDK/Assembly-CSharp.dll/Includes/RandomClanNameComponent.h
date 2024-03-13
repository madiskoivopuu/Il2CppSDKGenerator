#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RandomClanNameComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RandomClanNameComponent"));
	}

	template <typename T = RandomNameRules*> T& Rule() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Names() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(RandomClanNameComponent*, Il2CppObject*))(Il2CppBase() + 0x1711080))(this, target);
	}

};

