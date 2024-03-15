#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISplashResistanceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISplashResistanceEntity"));
	}


	template <typename R = SplashResistanceComponent*> R get_splashResistance() {
		return ((R (*)(ISplashResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasSplashResistance() {
		return ((R (*)(ISplashResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddSplashResistance(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(ISplashResistanceEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceSplashResistance(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(ISplashResistanceEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveSplashResistance() {
		return ((R (*)(ISplashResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

