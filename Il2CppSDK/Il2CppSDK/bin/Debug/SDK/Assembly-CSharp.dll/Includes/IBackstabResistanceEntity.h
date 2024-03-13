#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBackstabResistanceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBackstabResistanceEntity"));
	}


	template <typename T = BackstabResistanceComponent*> T get_backstabResistance() {
		return ((T (*)(IBackstabResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasBackstabResistance() {
		return ((T (*)(IBackstabResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddBackstabResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IBackstabResistanceEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceBackstabResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IBackstabResistanceEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveBackstabResistance() {
		return ((T (*)(IBackstabResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

