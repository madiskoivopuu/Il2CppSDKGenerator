#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SkillSelectWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkillSelectWindowHelper"));
	}


	template <typename T = SkillSelectWindow*> static T ShowSkillSelect(UIWindowsManager* manager, int32_t inventoryIndex) {
		return ((T (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x1482900))(0, manager, inventoryIndex);
	}
	template <typename T = void> static T CloseSkillSelect(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x14829CC))(0, manager);
	}

};

