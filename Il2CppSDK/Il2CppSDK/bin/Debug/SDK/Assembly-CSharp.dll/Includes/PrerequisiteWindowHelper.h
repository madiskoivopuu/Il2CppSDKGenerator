#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PrerequisiteWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PrerequisiteWindowHelper"));
	}


	template <typename R = PrerequisiteWindow*> static R ShowPrerequisite(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x16E356C))(0, manager, targetId);
	}
	template <typename R = void> static R ClosePrerequisite(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x16E3614))(0, manager, targetId);
	}

};

