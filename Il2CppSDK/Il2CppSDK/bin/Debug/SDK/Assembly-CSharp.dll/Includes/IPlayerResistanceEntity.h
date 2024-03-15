#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPlayerResistanceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPlayerResistanceEntity"));
	}


	template <typename R = PlayerResistanceComponent*> R get_playerResistance() {
		return ((R (*)(IPlayerResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasPlayerResistance() {
		return ((R (*)(IPlayerResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddPlayerResistance(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IPlayerResistanceEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplacePlayerResistance(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IPlayerResistanceEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemovePlayerResistance() {
		return ((R (*)(IPlayerResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

