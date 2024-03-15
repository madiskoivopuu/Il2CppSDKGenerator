#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DamageConfigComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DamageConfigComponent"));
	}

	template <typename R = ConfigEntity*> R& Value() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& MaxTargetHealthCoef() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Clear() {
		return ((R (*)(DamageConfigComponent*))(Il2CppBase() + 0x164B2F4))(this);
	}

};

