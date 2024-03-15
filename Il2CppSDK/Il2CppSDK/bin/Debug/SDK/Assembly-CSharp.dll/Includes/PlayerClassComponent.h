#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerClassComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerClassComponent"));
	}

	template <typename R = PlayerClassType*> R& Type() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(PlayerClassComponent*, Il2CppObject*))(Il2CppBase() + 0x1704740))(this, target);
	}

};

