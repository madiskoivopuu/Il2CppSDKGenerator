#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActionTypeExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActionTypeExtensions"));
	}


	template <typename T = bool> static T IsSkillShot(ActionType* actionType) {
		return ((T (*)(void *, ActionType*))(Il2CppBase() + 0x18ACD24))(0, actionType);
	}
	template <typename T = bool> static T NeedInteractTarget(ActionType* actionType) {
		return ((T (*)(void *, ActionType*))(Il2CppBase() + 0x18A9D1C))(0, actionType);
	}
	template <typename T = bool> static T CanUseFromInventory(ActionType* actionType) {
		return ((T (*)(void *, ActionType*))(Il2CppBase() + 0x18ACD40))(0, actionType);
	}
	template <typename T = bool> static T NeedAttackTarget(ActionType* actionType) {
		return ((T (*)(void *, ActionType*))(Il2CppBase() + 0x18AA264))(0, actionType);
	}
	template <typename T = bool> static T NeedTime(ActionType* actionType) {
		return ((T (*)(void *, ActionType*))(Il2CppBase() + 0x18ACD70))(0, actionType);
	}
	template <typename T = bool> static T NeedAddApplyPortal(ActionType* actionType) {
		return ((T (*)(void *, ActionType*))(Il2CppBase() + 0x18ACD80))(0, actionType);
	}
	template <typename T = bool> static T NeedCheckItemCondition(ActionType* actionType) {
		return ((T (*)(void *, ActionType*))(Il2CppBase() + 0x18ACD90))(0, actionType);
	}
	template <typename T = bool> static T NeedAddApplyPickup(ActionType* actionType) {
		return ((T (*)(void *, ActionType*))(Il2CppBase() + 0x18ACDBC))(0, actionType);
	}
	template <typename T = bool> static T NeedAddApplySendInventory(ActionType* actionType) {
		return ((T (*)(void *, ActionType*))(Il2CppBase() + 0x18ACDDC))(0, actionType);
	}
	template <typename T = Nullable1bool>*> static T NeedAddApplyLockUnlock(ActionType* actionType) {
		return ((T (*)(void *, ActionType*))(Il2CppBase() + 0x18ACE2C))(0, actionType);
	}
	template <typename T = bool> static T NeedInventory(ActionType* actionType) {
		return ((T (*)(void *, ActionType*))(Il2CppBase() + 0x18ACEC8))(0, actionType);
	}
	template <typename T = bool> static T NeedCooldown(ActionType* actionType) {
		return ((T (*)(void *, ActionType*))(Il2CppBase() + 0x18ACEF0))(0, actionType);
	}
	template <typename T = bool> static T NeedConsume(ActionType* actionType) {
		return ((T (*)(void *, ActionType*))(Il2CppBase() + 0x18ACF18))(0, actionType);
	}

};

