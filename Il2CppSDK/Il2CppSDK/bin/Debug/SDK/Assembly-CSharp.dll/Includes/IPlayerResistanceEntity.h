#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPlayerResistanceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPlayerResistanceEntity"));
	}


	template <typename T = PlayerResistanceComponent*> T get_playerResistance() {
		return ((T (*)(IPlayerResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasPlayerResistance() {
		return ((T (*)(IPlayerResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddPlayerResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IPlayerResistanceEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplacePlayerResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IPlayerResistanceEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemovePlayerResistance() {
		return ((T (*)(IPlayerResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

