#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DamageShieldComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DamageShieldComponent"));
	}

	template <typename R = DamageShieldDepends> R& Depends() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& Value() {
		return *(R*)((uintptr_t)this + 0x14);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(DamageShieldComponent*, Il2CppObject*))(Il2CppBase() + 0x164B7D8))(this, target);
	}

};

