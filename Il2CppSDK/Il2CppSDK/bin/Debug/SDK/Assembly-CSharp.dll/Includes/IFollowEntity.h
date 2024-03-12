#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IFollowEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IFollowEntity"));
	}


	template <typename T = uintptr_t> T get_follow() {
		return ((T (*)(IFollowEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasFollow() {
		return ((T (*)(IFollowEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddFollow(float newSpeed) {
		return ((T (*)(IFollowEntity*, float))(Il2CppBase() + 0x0))(this, newSpeed);
	}
	template <typename T = void> T ReplaceFollow(float newSpeed) {
		return ((T (*)(IFollowEntity*, float))(Il2CppBase() + 0x0))(this, newSpeed);
	}
	template <typename T = void> T RemoveFollow() {
		return ((T (*)(IFollowEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
