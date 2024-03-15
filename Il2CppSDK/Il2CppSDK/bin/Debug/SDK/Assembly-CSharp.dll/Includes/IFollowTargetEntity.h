#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IFollowTargetEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IFollowTargetEntity"));
	}


	template <typename R = bool> R get_isFollowTarget() {
		return ((R (*)(IFollowTargetEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isFollowTarget(bool value) {
		return ((R (*)(IFollowTargetEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

