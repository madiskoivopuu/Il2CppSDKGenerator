#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChangeDurationByLostHpComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChangeDurationByLostHpComponent"));
	}

	template <typename T = DamageCondition*> T& DamageCondition() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& SecondsByPercent() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(ChangeDurationByLostHpComponent*, Il2CppObject*))(Il2CppBase() + 0x13EA28C))(this, target);
	}

};

