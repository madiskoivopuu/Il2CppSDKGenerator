#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PolymorphHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PolymorphHelper"));
	}


	template <typename R = uintptr_t> static R AddPolymorphView(GameEntity* entity, uintptr_t go) {
		return ((R (*)(void *, GameEntity*, uintptr_t))(Il2CppBase() + 0x1576228))(0, entity, go);
	}
	template <typename R = void> static R RemovePolymorphView(GameEntity* entity, uintptr_t go) {
		return ((R (*)(void *, GameEntity*, uintptr_t))(Il2CppBase() + 0x15763E4))(0, entity, go);
	}

};

