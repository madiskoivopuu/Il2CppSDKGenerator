#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DamageConfigComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DamageConfigComponent"));
	}

	template <typename T = ConfigEntity*> T& Value() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& MaxTargetHealthCoef() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Clear() {
		return ((T (*)(DamageConfigComponent*))(Il2CppBase() + 0x164B2F4))(this);
	}

};

