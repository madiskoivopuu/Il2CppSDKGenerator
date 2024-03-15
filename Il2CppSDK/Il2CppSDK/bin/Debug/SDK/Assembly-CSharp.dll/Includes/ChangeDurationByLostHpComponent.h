#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChangeDurationByLostHpComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChangeDurationByLostHpComponent"));
	}

	template <typename R = DamageCondition*> R& DamageCondition() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& SecondsByPercent() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ChangeDurationByLostHpComponent*, Il2CppObject*))(Il2CppBase() + 0x13EA28C))(this, target);
	}

};

