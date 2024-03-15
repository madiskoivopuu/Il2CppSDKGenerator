#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LinkConflictWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LinkConflictWindowHelper"));
	}


	template <typename R = LinkConflictWindow*> static R ShowLinkConflict(UIWindowsManager* manager, int64_t conflictedPlayerId) {
		return ((R (*)(void *, UIWindowsManager*, int64_t))(Il2CppBase() + 0x142D6E8))(0, manager, conflictedPlayerId);
	}

};

