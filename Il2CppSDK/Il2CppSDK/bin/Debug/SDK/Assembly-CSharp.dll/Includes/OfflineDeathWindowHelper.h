#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OfflineDeathWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OfflineDeathWindowHelper"));
	}


	template <typename T = OfflineDeathWindow*> static T ShowOfflineDeath(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x11DA3B0))(0, manager);
	}

};

