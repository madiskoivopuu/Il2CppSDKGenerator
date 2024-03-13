#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITargetEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITargetEntity"));
	}


	template <typename T = TargetComponent*> T get_target() {
		return ((T (*)(ITargetEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasTarget() {
		return ((T (*)(ITargetEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddTarget(int32_t newId) {
		return ((T (*)(ITargetEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T ReplaceTarget(int32_t newId) {
		return ((T (*)(ITargetEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T RemoveTarget() {
		return ((T (*)(ITargetEntity*))(Il2CppBase() + 0x0))(this);
	}

};

