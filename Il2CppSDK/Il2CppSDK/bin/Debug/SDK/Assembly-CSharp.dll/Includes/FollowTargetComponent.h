#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FollowTargetComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FollowTargetComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(FollowTargetComponent*, Il2CppObject*))(Il2CppBase() + 0x15FA4C8))(this, targetObject);
	}

};

