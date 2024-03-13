#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FollowCameraComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FollowCameraComponent"));
	}


	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(FollowCameraComponent*, Il2CppObject*))(Il2CppBase() + 0x15F9C9C))(this, targetObject);
	}

};

