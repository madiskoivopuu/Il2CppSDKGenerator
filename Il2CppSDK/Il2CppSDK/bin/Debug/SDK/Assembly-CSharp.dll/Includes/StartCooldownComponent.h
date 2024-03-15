#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StartCooldownComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StartCooldownComponent"));
	}

	template <typename R = Il2CppString*> R& Group() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& Value() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(StartCooldownComponent*, Il2CppObject*))(Il2CppBase() + 0x148CB5C))(this, target);
	}

};

