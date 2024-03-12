#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Setting
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Setting"));
	}

	template <typename T = uintptr_t> T& Condition() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Rect() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = bool> T CheckCondition(uintptr_t system, float acpect) {
		return ((T (*)(Setting*, uintptr_t, float))(Il2CppBase() + 0x22A5D14))(this, system, acpect);
	}

};

}
