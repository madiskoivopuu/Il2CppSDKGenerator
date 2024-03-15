#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IStatusResistanceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IStatusResistanceEntity"));
	}


	template <typename R = StatusResistanceComponent*> R get_statusResistance() {
		return ((R (*)(IStatusResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasStatusResistance() {
		return ((R (*)(IStatusResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddStatusResistance(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IStatusResistanceEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceStatusResistance(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IStatusResistanceEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveStatusResistance() {
		return ((R (*)(IStatusResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

