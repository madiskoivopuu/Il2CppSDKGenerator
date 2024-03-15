#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITargetEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITargetEntity"));
	}


	template <typename R = TargetComponent*> R get_target() {
		return ((R (*)(ITargetEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasTarget() {
		return ((R (*)(ITargetEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddTarget(int32_t newId) {
		return ((R (*)(ITargetEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R ReplaceTarget(int32_t newId) {
		return ((R (*)(ITargetEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R RemoveTarget() {
		return ((R (*)(ITargetEntity*))(Il2CppBase() + 0x0))(this);
	}

};

