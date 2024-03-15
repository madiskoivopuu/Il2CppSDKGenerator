#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IFollowEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IFollowEntity"));
	}


	template <typename R = FollowComponent*> R get_follow() {
		return ((R (*)(IFollowEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasFollow() {
		return ((R (*)(IFollowEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddFollow(float newSpeed) {
		return ((R (*)(IFollowEntity*, float))(Il2CppBase() + 0x0))(this, newSpeed);
	}
	template <typename R = void> R ReplaceFollow(float newSpeed) {
		return ((R (*)(IFollowEntity*, float))(Il2CppBase() + 0x0))(this, newSpeed);
	}
	template <typename R = void> R RemoveFollow() {
		return ((R (*)(IFollowEntity*))(Il2CppBase() + 0x0))(this);
	}

};

