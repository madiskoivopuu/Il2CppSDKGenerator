#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CraftCooldownComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CraftCooldownComponent"));
	}

	template <typename T = float> T& Value() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(CraftCooldownComponent*, Il2CppObject*))(Il2CppBase() + 0x13431E8))(this, targetObject);
	}

};

