#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Setting
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Setting"));
	}

	template <typename R = Condition*> R& Condition() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = ViewRect*> R& Rect() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = bool> R CheckCondition(SystemType system, float acpect) {
		return ((R (*)(Setting*, SystemType, float))(Il2CppBase() + 0x22A5D14))(this, system, acpect);
	}

};

