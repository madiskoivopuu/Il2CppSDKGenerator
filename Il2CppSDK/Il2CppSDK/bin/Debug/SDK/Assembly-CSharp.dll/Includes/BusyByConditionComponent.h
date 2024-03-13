#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BusyByConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BusyByConditionComponent"));
	}

	template <typename T = bool> T& ByOther() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& Value() {
		return *(T*)((uintptr_t)this + 0x11);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(BusyByConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x15B0F24))(this, target);
	}

};

