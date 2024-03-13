#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LeaveLocationWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LeaveLocationWindowHelper"));
	}


	template <typename T = LeaveLocationWindow*> static T ShowLeaveLocation(UIWindowsManager* manager, int32_t targetId) {
		return ((T (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x142B14C))(0, manager, targetId);
	}

};

