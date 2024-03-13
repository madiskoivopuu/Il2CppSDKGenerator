#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EnergyRefillWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnergyRefillWindowHelper"));
	}


	template <typename T = EnergyRefillWindow*> static T ShowEnergyRefillPopup(UIWindowsManager* manager, uintptr_t refillCallback) {
		return ((T (*)(void *, UIWindowsManager*, uintptr_t))(Il2CppBase() + 0x1371F2C))(0, manager, refillCallback);
	}

};

