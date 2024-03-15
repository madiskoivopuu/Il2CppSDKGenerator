#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBackstabResistanceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBackstabResistanceEntity"));
	}


	template <typename R = BackstabResistanceComponent*> R get_backstabResistance() {
		return ((R (*)(IBackstabResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasBackstabResistance() {
		return ((R (*)(IBackstabResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddBackstabResistance(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IBackstabResistanceEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceBackstabResistance(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IBackstabResistanceEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveBackstabResistance() {
		return ((R (*)(IBackstabResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

