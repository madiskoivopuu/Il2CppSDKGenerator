#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActionTypeExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActionTypeExtensions"));
	}


	template <typename T = bool> static T IsSkillShot(uintptr_t actionType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x18ACD24))(0, actionType);
	}
	template <typename T = bool> static T NeedInteractTarget(uintptr_t actionType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x18A9D1C))(0, actionType);
	}
	template <typename T = bool> static T CanUseFromInventory(uintptr_t actionType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x18ACD40))(0, actionType);
	}
	template <typename T = bool> static T NeedAttackTarget(uintptr_t actionType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x18AA264))(0, actionType);
	}
	template <typename T = bool> static T NeedTime(uintptr_t actionType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x18ACD70))(0, actionType);
	}
	template <typename T = bool> static T NeedAddApplyPortal(uintptr_t actionType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x18ACD80))(0, actionType);
	}
	template <typename T = bool> static T NeedCheckItemCondition(uintptr_t actionType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x18ACD90))(0, actionType);
	}
	template <typename T = bool> static T NeedAddApplyPickup(uintptr_t actionType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x18ACDBC))(0, actionType);
	}
	template <typename T = bool> static T NeedAddApplySendInventory(uintptr_t actionType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x18ACDDC))(0, actionType);
	}
	template <typename T = void*> static T NeedAddApplyLockUnlock(uintptr_t actionType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x18ACE2C))(0, actionType);
	}
	template <typename T = bool> static T NeedInventory(uintptr_t actionType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x18ACEC8))(0, actionType);
	}
	template <typename T = bool> static T NeedCooldown(uintptr_t actionType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x18ACEF0))(0, actionType);
	}
	template <typename T = bool> static T NeedConsume(uintptr_t actionType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x18ACF18))(0, actionType);
	}

};

}
