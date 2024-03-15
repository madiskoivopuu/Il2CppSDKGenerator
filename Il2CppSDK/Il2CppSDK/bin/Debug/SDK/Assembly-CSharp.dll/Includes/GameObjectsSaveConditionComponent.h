#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameObjectsSaveConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameObjectsSaveConditionComponent"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& Has() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(GameObjectsSaveConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x176D104))(this, target);
	}

};

