#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameObjectHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameObjectHelper"));
	}


	template <typename R = void> static R ChangeLayer(uintptr_t target, int32_t newLayer) {
		return ((R (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x176CDA8))(0, target, newLayer);
	}

};
