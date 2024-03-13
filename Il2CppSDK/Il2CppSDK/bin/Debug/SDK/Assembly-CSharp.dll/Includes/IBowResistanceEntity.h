#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBowResistanceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBowResistanceEntity"));
	}


	template <typename T = BowResistanceComponent*> T get_bowResistance() {
		return ((T (*)(IBowResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasBowResistance() {
		return ((T (*)(IBowResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddBowResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IBowResistanceEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceBowResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IBowResistanceEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveBowResistance() {
		return ((T (*)(IBowResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

