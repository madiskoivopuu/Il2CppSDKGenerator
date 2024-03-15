#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DamageInterruptedComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DamageInterruptedComponent"));
	}

	template <typename R = bool> R& Allways() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& Threshold() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = Il2CppString*> R& Magic() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(DamageInterruptedComponent*, Il2CppObject*))(Il2CppBase() + 0x164B444))(this, target);
	}

};

