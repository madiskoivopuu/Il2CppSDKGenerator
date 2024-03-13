#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHotEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHotEntity"));
	}


	template <typename T = HotComponent*> T get_hot() {
		return ((T (*)(IHotEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasHot() {
		return ((T (*)(IHotEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddHot(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IHotEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceHot(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IHotEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveHot() {
		return ((T (*)(IHotEntity*))(Il2CppBase() + 0x0))(this);
	}

};

