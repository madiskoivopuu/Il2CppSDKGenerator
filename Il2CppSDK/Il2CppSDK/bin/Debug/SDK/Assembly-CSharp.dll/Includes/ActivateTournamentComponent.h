#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActivateTournamentComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActivateTournamentComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(ActivateTournamentComponent*, uintptr_t))(Il2CppBase() + 0x18AD18C))(this, target);
	}

};

}
