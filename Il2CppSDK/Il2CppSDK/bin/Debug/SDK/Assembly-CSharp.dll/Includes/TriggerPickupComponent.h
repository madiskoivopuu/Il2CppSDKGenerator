#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerPickupComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerPickupComponent"));
	}

	template <typename T = bool> T& AutoFarm() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(TriggerPickupComponent*, Il2CppObject*))(Il2CppBase() + 0x15258F8))(this, target);
	}

};

