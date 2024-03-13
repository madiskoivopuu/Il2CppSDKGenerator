#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISplashResistanceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISplashResistanceEntity"));
	}


	template <typename T = SplashResistanceComponent*> T get_splashResistance() {
		return ((T (*)(ISplashResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasSplashResistance() {
		return ((T (*)(ISplashResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddSplashResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ISplashResistanceEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceSplashResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ISplashResistanceEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveSplashResistance() {
		return ((T (*)(ISplashResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

