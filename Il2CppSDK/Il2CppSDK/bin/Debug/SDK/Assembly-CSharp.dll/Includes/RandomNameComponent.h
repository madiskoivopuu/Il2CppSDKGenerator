#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RandomNameComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RandomNameComponent"));
	}

	template <typename T = RandomNameRules*> T& Rule() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Names() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(RandomNameComponent*, Il2CppObject*))(Il2CppBase() + 0x1718B38))(this, target);
	}

};

