#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UnityModifierHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnityModifierHelper"));
	}


	template <typename R = void> static R SetVisibility(GameEntity* entity, bool isInvisible, bool isFriend) {
		return ((R (*)(void *, GameEntity*, bool, bool))(Il2CppBase() + 0x1539744))(0, entity, isInvisible, isFriend);
	}
	template <typename R = void> static R SetMinimapHide(GameEntity* entity, bool isMinimapHide) {
		return ((R (*)(void *, GameEntity*, bool))(Il2CppBase() + 0x15398AC))(0, entity, isMinimapHide);
	}

};

