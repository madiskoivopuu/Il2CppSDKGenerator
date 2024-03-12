#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FollowTargetComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FollowTargetComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(FollowTargetComponent*, uintptr_t))(Il2CppBase() + 0x15FA4C8))(this, targetObject);
	}

};

}
