#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IStatusResistanceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IStatusResistanceEntity"));
	}


	template <typename T = StatusResistanceComponent*> T get_statusResistance() {
		return ((T (*)(IStatusResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasStatusResistance() {
		return ((T (*)(IStatusResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddStatusResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IStatusResistanceEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceStatusResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IStatusResistanceEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveStatusResistance() {
		return ((T (*)(IStatusResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

