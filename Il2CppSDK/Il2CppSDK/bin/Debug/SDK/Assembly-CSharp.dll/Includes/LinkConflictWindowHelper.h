#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LinkConflictWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LinkConflictWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowLinkConflict(uintptr_t manager, int64_t conflictedPlayerId) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x142D6E8))(0, manager, conflictedPlayerId);
	}

};

}
