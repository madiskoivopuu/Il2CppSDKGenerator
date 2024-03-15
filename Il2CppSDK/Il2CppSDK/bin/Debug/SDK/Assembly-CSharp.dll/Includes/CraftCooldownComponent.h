#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CraftCooldownComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CraftCooldownComponent"));
	}

	template <typename R = float> R& Value() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(CraftCooldownComponent*, Il2CppObject*))(Il2CppBase() + 0x13431E8))(this, targetObject);
	}

};

