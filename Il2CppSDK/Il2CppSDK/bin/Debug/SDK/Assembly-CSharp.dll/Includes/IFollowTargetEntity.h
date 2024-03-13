#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IFollowTargetEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IFollowTargetEntity"));
	}


	template <typename T = bool> T get_isFollowTarget() {
		return ((T (*)(IFollowTargetEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isFollowTarget(bool value) {
		return ((T (*)(IFollowTargetEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

