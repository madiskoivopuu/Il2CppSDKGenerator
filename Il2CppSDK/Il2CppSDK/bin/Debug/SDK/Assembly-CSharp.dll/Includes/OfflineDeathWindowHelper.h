#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OfflineDeathWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OfflineDeathWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowOfflineDeath(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x11DA3B0))(0, manager);
	}

};

}
