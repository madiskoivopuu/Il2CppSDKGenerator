#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RavenNestWindowWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RavenNestWindowWindowHelper"));
	}


	template <typename R = RavenNestWindow*> static R ShowRavenNest(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x13944E4))(0, manager, targetId);
	}
	template <typename R = void> static R CloseRavenNest(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x13945B0))(0, manager, targetId);
	}

};

