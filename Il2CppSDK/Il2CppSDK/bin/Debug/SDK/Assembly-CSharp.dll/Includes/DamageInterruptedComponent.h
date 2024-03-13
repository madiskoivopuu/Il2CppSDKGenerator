#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DamageInterruptedComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DamageInterruptedComponent"));
	}

	template <typename T = bool> T& Allways() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Threshold() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& Magic() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(DamageInterruptedComponent*, Il2CppObject*))(Il2CppBase() + 0x164B444))(this, target);
	}

};

