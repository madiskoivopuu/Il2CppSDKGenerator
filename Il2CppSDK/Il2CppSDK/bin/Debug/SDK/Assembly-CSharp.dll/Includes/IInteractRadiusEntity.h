#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IInteractRadiusEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IInteractRadiusEntity"));
	}


	template <typename T = InteractRadiusComponent*> T get_interactRadius() {
		return ((T (*)(IInteractRadiusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasInteractRadius() {
		return ((T (*)(IInteractRadiusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddInteractRadius(float newMinValue, float newValue, float newHighLight, float newOffsetX, float newOffsetY, float newLogicOffsetX, float newLogicOffsetY) {
		return ((T (*)(IInteractRadiusEntity*, float, float, float, float, float, float, float))(Il2CppBase() + 0x0))(this, newMinValue, newValue, newHighLight, newOffsetX, newOffsetY, newLogicOffsetX, newLogicOffsetY);
	}
	template <typename T = void> T ReplaceInteractRadius(float newMinValue, float newValue, float newHighLight, float newOffsetX, float newOffsetY, float newLogicOffsetX, float newLogicOffsetY) {
		return ((T (*)(IInteractRadiusEntity*, float, float, float, float, float, float, float))(Il2CppBase() + 0x0))(this, newMinValue, newValue, newHighLight, newOffsetX, newOffsetY, newLogicOffsetX, newLogicOffsetY);
	}
	template <typename T = void> T RemoveInteractRadius() {
		return ((T (*)(IInteractRadiusEntity*))(Il2CppBase() + 0x0))(this);
	}

};

