#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LeaveLocationWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LeaveLocationWindowHelper"));
	}


	template <typename R = LeaveLocationWindow*> static R ShowLeaveLocation(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x142B14C))(0, manager, targetId);
	}

};

