#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHotEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHotEntity"));
	}


	template <typename R = HotComponent*> R get_hot() {
		return ((R (*)(IHotEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasHot() {
		return ((R (*)(IHotEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddHot(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IHotEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceHot(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IHotEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveHot() {
		return ((R (*)(IHotEntity*))(Il2CppBase() + 0x0))(this);
	}

};

