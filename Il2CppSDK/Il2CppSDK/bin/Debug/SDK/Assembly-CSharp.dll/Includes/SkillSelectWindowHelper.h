#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SkillSelectWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkillSelectWindowHelper"));
	}


	template <typename R = SkillSelectWindow*> static R ShowSkillSelect(UIWindowsManager* manager, int32_t inventoryIndex) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x1482900))(0, manager, inventoryIndex);
	}
	template <typename R = void> static R CloseSkillSelect(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x14829CC))(0, manager);
	}

};

