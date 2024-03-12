#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LeaveLocationWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LeaveLocationWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowLeaveLocation(uintptr_t manager, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x142B14C))(0, manager, targetId);
	}

};

}
