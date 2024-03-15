#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActionTypeExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActionTypeExtensions"));
	}


	template <typename R = bool> static R IsSkillShot(ActionType actionType) {
		return ((R (*)(void *, ActionType))(Il2CppBase() + 0x18ACD24))(0, actionType);
	}
	template <typename R = bool> static R NeedInteractTarget(ActionType actionType) {
		return ((R (*)(void *, ActionType))(Il2CppBase() + 0x18A9D1C))(0, actionType);
	}
	template <typename R = bool> static R CanUseFromInventory(ActionType actionType) {
		return ((R (*)(void *, ActionType))(Il2CppBase() + 0x18ACD40))(0, actionType);
	}
	template <typename R = bool> static R NeedAttackTarget(ActionType actionType) {
		return ((R (*)(void *, ActionType))(Il2CppBase() + 0x18AA264))(0, actionType);
	}
	template <typename R = bool> static R NeedTime(ActionType actionType) {
		return ((R (*)(void *, ActionType))(Il2CppBase() + 0x18ACD70))(0, actionType);
	}
	template <typename R = bool> static R NeedAddApplyPortal(ActionType actionType) {
		return ((R (*)(void *, ActionType))(Il2CppBase() + 0x18ACD80))(0, actionType);
	}
	template <typename R = bool> static R NeedCheckItemCondition(ActionType actionType) {
		return ((R (*)(void *, ActionType))(Il2CppBase() + 0x18ACD90))(0, actionType);
	}
	template <typename R = bool> static R NeedAddApplyPickup(ActionType actionType) {
		return ((R (*)(void *, ActionType))(Il2CppBase() + 0x18ACDBC))(0, actionType);
	}
	template <typename R = bool> static R NeedAddApplySendInventory(ActionType actionType) {
		return ((R (*)(void *, ActionType))(Il2CppBase() + 0x18ACDDC))(0, actionType);
	}
	 static Nullable1<bool>* NeedAddApplyLockUnlock(ActionType actionType) {
		return ((Nullable1<bool>* (*)(void *, ActionType))(Il2CppBase() + 0x18ACE2C))(0, actionType);
	}
	template <typename R = bool> static R NeedInventory(ActionType actionType) {
		return ((R (*)(void *, ActionType))(Il2CppBase() + 0x18ACEC8))(0, actionType);
	}
	template <typename R = bool> static R NeedCooldown(ActionType actionType) {
		return ((R (*)(void *, ActionType))(Il2CppBase() + 0x18ACEF0))(0, actionType);
	}
	template <typename R = bool> static R NeedConsume(ActionType actionType) {
		return ((R (*)(void *, ActionType))(Il2CppBase() + 0x18ACF18))(0, actionType);
	}

};

