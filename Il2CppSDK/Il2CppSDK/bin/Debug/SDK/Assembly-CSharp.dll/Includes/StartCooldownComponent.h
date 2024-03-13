#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StartCooldownComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StartCooldownComponent"));
	}

	template <typename T = Il2CppString*> T& Group() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Value() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(StartCooldownComponent*, Il2CppObject*))(Il2CppBase() + 0x148CB5C))(this, target);
	}

};

