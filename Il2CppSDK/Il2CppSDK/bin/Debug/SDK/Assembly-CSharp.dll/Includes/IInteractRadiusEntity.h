#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IInteractRadiusEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IInteractRadiusEntity"));
	}


	template <typename R = InteractRadiusComponent*> R get_interactRadius() {
		return ((R (*)(IInteractRadiusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasInteractRadius() {
		return ((R (*)(IInteractRadiusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddInteractRadius(float newMinValue, float newValue, float newHighLight, float newOffsetX, float newOffsetY, float newLogicOffsetX, float newLogicOffsetY) {
		return ((R (*)(IInteractRadiusEntity*, float, float, float, float, float, float, float))(Il2CppBase() + 0x0))(this, newMinValue, newValue, newHighLight, newOffsetX, newOffsetY, newLogicOffsetX, newLogicOffsetY);
	}
	template <typename R = void> R ReplaceInteractRadius(float newMinValue, float newValue, float newHighLight, float newOffsetX, float newOffsetY, float newLogicOffsetX, float newLogicOffsetY) {
		return ((R (*)(IInteractRadiusEntity*, float, float, float, float, float, float, float))(Il2CppBase() + 0x0))(this, newMinValue, newValue, newHighLight, newOffsetX, newOffsetY, newLogicOffsetX, newLogicOffsetY);
	}
	template <typename R = void> R RemoveInteractRadius() {
		return ((R (*)(IInteractRadiusEntity*))(Il2CppBase() + 0x0))(this);
	}

};

