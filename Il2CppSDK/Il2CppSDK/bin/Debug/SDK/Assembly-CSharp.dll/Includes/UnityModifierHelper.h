#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UnityModifierHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnityModifierHelper"));
	}


	template <typename T = void> static T SetVisibility(GameEntity* entity, bool isInvisible, bool isFriend) {
		return ((T (*)(void *, GameEntity*, bool, bool))(Il2CppBase() + 0x1539744))(0, entity, isInvisible, isFriend);
	}
	template <typename T = void> static T SetMinimapHide(GameEntity* entity, bool isMinimapHide) {
		return ((T (*)(void *, GameEntity*, bool))(Il2CppBase() + 0x15398AC))(0, entity, isMinimapHide);
	}

};

