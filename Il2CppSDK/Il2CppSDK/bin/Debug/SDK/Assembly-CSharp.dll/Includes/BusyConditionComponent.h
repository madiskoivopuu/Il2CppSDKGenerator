#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BusyConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BusyConditionComponent"));
	}

	template <typename T = bool> T& Value() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(BusyConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x15B0FC8))(this, target);
	}

};

