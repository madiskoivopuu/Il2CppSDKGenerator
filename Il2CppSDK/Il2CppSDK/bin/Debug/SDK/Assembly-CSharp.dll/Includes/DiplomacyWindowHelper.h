#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DiplomacyWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DiplomacyWindowHelper"));
	}


	template <typename T = void> static T ShowDiplomacy(UIWindowsManager* manager, int32_t targetId) {
		return ((T (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x1300964))(0, manager, targetId);
	}
	template <typename T = void> static T CloseDiplomacy(UIWindowsManager* manager, int32_t targetId) {
		return ((T (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x1300EC0))(0, manager, targetId);
	}

};

