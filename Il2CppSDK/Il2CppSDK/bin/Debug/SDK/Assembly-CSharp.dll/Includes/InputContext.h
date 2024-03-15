#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseContext1.h" 

class InputContext : public BaseContext1<InputEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InputContext"));
	}

	 PrimaryEntityIndex2InputEntity*, int64_t>*& _tickIndex() {
		return *(PrimaryEntityIndex2InputEntity*, int64_t>**)((uintptr_t)this + 0xF8);
	}
	 IGroup1InputEntity*>*& _velocityEntities() {
		return *(IGroup1InputEntity*>**)((uintptr_t)this + 0x100);
	}

	 IGroup1InputEntity*>* GetVelocityEntities() {
		return ((IGroup1InputEntity*>* (*)(InputContext*))(Il2CppBase() + 0x1E45668))(this);
	}
	template <typename R = InputEntity*> R GetEntityWithTick(int64_t value) {
		return ((R (*)(InputContext*, int64_t))(Il2CppBase() + 0x1E40FA8))(this, value);
	}
	template <typename R = InputEntity*> R CreateMoveEntity(int64_t now, int32_t parentId, float x, float y, int32_t moveToTargetId) {
		return ((R (*)(InputContext*, int64_t, int32_t, float, float, int32_t))(Il2CppBase() + 0x1E456E0))(this, now, parentId, x, y, moveToTargetId);
	}
	template <typename R = void> R ClearInputs() {
		return ((R (*)(InputContext*))(Il2CppBase() + 0x1E457C8))(this);
	}
	template <typename R = InputEntity*> R get_attackButtonEntity() {
		return ((R (*)(InputContext*))(Il2CppBase() + 0x1E45820))(this);
	}
	template <typename R = bool> R get_isAttackButton() {
		return ((R (*)(InputContext*))(Il2CppBase() + 0x1E458FC))(this);
	}
	template <typename R = void> R set_isAttackButton(bool value) {
		return ((R (*)(InputContext*, bool))(Il2CppBase() + 0x1E45918))(this, value);
	}
	template <typename R = InputEntity*> R get_bannerButtonEntity() {
		return ((R (*)(InputContext*))(Il2CppBase() + 0x1E459C8))(this);
	}
	template <typename R = bool> R get_isBannerButton() {
		return ((R (*)(InputContext*))(Il2CppBase() + 0x1E45AA4))(this);
	}
	template <typename R = void> R set_isBannerButton(bool value) {
		return ((R (*)(InputContext*, bool))(Il2CppBase() + 0x1E45AC0))(this, value);
	}
	template <typename R = InputEntity*> R get_crouchButtonEntity() {
		return ((R (*)(InputContext*))(Il2CppBase() + 0x1E45B70))(this);
	}
	template <typename R = bool> R get_isCrouchButton() {
		return ((R (*)(InputContext*))(Il2CppBase() + 0x1E45C4C))(this);
	}
	template <typename R = void> R set_isCrouchButton(bool value) {
		return ((R (*)(InputContext*, bool))(Il2CppBase() + 0x1E45C68))(this, value);
	}
	template <typename R = InputEntity*> R get_fishingButtonEntity() {
		return ((R (*)(InputContext*))(Il2CppBase() + 0x1E45D18))(this);
	}
	template <typename R = bool> R get_isFishingButton() {
		return ((R (*)(InputContext*))(Il2CppBase() + 0x1E45DF4))(this);
	}
	template <typename R = void> R set_isFishingButton(bool value) {
		return ((R (*)(InputContext*, bool))(Il2CppBase() + 0x1E45E10))(this, value);
	}
	template <typename R = InputEntity*> R get_fishnetButtonEntity() {
		return ((R (*)(InputContext*))(Il2CppBase() + 0x1E45EC0))(this);
	}
	template <typename R = bool> R get_isFishnetButton() {
		return ((R (*)(InputContext*))(Il2CppBase() + 0x1E45F9C))(this);
	}
	template <typename R = void> R set_isFishnetButton(bool value) {
		return ((R (*)(InputContext*, bool))(Il2CppBase() + 0x1E45FB8))(this, value);
	}
	template <typename R = InputEntity*> R get_horizontalAxisEntity() {
		return ((R (*)(InputContext*))(Il2CppBase() + 0x1E40ECC))(this);
	}
	template <typename R = bool> R get_isHorizontalAxis() {
		return ((R (*)(InputContext*))(Il2CppBase() + 0x1E46068))(this);
	}
	template <typename R = void> R set_isHorizontalAxis(bool value) {
		return ((R (*)(InputContext*, bool))(Il2CppBase() + 0x1E46084))(this, value);
	}
	template <typename R = InputEntity*> R get_horizontalSkillShotEntity() {
		return ((R (*)(InputContext*))(Il2CppBase() + 0x1E410E8))(this);
	}
	template <typename R = bool> R get_isHorizontalSkillShot() {
		return ((R (*)(InputContext*))(Il2CppBase() + 0x1E46134))(this);
	}
	template <typename R = void> R set_isHorizontalSkillShot(bool value) {
		return ((R (*)(InputContext*, bool))(Il2CppBase() + 0x1E46150))(this, value);
	}
	template <typename R = InputEntity*> R get_hoverMouseEntity() {
		return ((R (*)(InputContext*))(Il2CppBase() + 0x1E46200))(this);
	}
	template <typename R = bool> R get_isHoverMouse() {
		return ((R (*)(InputContext*))(Il2CppBase() + 0x1E462DC))(this);
	}
	template <typename R = void> R set_isHoverMouse(bool value) {
		return ((R (*)(InputContext*, bool))(Il2CppBase() + 0x1E462F8))(this, value);
	}
	template <typename R = InputEntity*> R get_interactButtonEntity() {
		return ((R (*)(InputContext*))(Il2CppBase() + 0x1E463A8))(this);
	}
	template <typename R = bool> R get_isInteractButton() {
		return ((R (*)(InputContext*))(Il2CppBase() + 0x1E46484))(this);
	}
	template <typename R = void> R set_isInteractButton(bool value) {
		return ((R (*)(InputContext*, bool))(Il2CppBase() + 0x1E464A0))(this, value);
	}
	template <typename R = InputEntity*> R get_leftMouseEntity() {
		return ((R (*)(InputContext*))(Il2CppBase() + 0x1E46550))(this);
	}
	template <typename R = bool> R get_isLeftMouse() {
		return ((R (*)(InputContext*))(Il2CppBase() + 0x1E4662C))(this);
	}
	template <typename R = void> R set_isLeftMouse(bool value) {
		return ((R (*)(InputContext*, bool))(Il2CppBase() + 0x1E46648))(this, value);
	}
	template <typename R = InputEntity*> R get_mountButtonEntity() {
		return ((R (*)(InputContext*))(Il2CppBase() + 0x1E466F8))(this);
	}
	template <typename R = bool> R get_isMountButton() {
		return ((R (*)(InputContext*))(Il2CppBase() + 0x1E467D4))(this);
	}
	template <typename R = void> R set_isMountButton(bool value) {
		return ((R (*)(InputContext*, bool))(Il2CppBase() + 0x1E467F0))(this, value);
	}
	template <typename R = InputEntity*> R get_mountSkill1ButtonEntity() {
		return ((R (*)(InputContext*))(Il2CppBase() + 0x1E468A0))(this);
	}
	template <typename R = bool> R get_isMountSkill1Button() {
		return ((R (*)(InputContext*))(Il2CppBase() + 0x1E4697C))(this);
	}
	template <typename R = void> R set_isMountSkill1Button(bool value) {
		return ((R (*)(InputContext*, bool))(Il2CppBase() + 0x1E46998))(this, value);
	}
	template <typename R = InputEntity*> R get_mountSkill2ButtonEntity() {
		return ((R (*)(InputContext*))(Il2CppBase() + 0x1E46A48))(this);
	}
	template <typename R = bool> R get_isMountSkill2Button() {
		return ((R (*)(InputContext*))(Il2CppBase() + 0x1E46B24))(this);
	}
	template <typename R = void> R set_isMountSkill2Button(bool value) {
		return ((R (*)(InputContext*, bool))(Il2CppBase() + 0x1E46B40))(this, value);
	}
	template <typename R = InputEntity*> R get_mountSkill3ButtonEntity() {
		return ((R (*)(InputContext*))(Il2CppBase() + 0x1E46BF0))(this);
	}
	template <typename R = bool> R get_isMountSkill3Button() {
		return ((R (*)(InputContext*))(Il2CppBase() + 0x1E46CCC))(this);
	}
	template <typename R = void> R set_isMountSkill3Button(bool value) {
		return ((R (*)(InputContext*, bool))(Il2CppBase() + 0x1E46CE8))(this, value);
	}
	template <typename R = InputEntity*> R get_pocket1ButtonEntity() {
		return ((R (*)(InputContext*))(Il2CppBase() + 0x1E46D98))(this);
	}
	template <typename R = bool> R get_isPocket1Button() {
		return ((R (*)(InputContext*))(Il2CppBase() + 0x1E46E74))(this);
	}
	template <typename R = void> R set_isPocket1Button(bool value) {
		return ((R (*)(InputContext*, bool))(Il2CppBase() + 0x1E46E90))(this, value);
	}
	template <typename R = InputEntity*> R get_pocket2ButtonEntity() {
		return ((R (*)(InputContext*))(Il2CppBase() + 0x1E46F40))(this);
	}
	template <typename R = bool> R get_isPocket2Button() {
		return ((R (*)(InputContext*))(Il2CppBase() + 0x1E4701C))(this);
	}
	template <typename R = void> R set_isPocket2Button(bool value) {
		return ((R (*)(InputContext*, bool))(Il2CppBase() + 0x1E47038))(this, value);
	}
	template <typename R = InputEntity*> R get_pocket3ButtonEntity() {
		return ((R (*)(InputContext*))(Il2CppBase() + 0x1E470E8))(this);
	}
	template <typename R = bool> R get_isPocket3Button() {
		return ((R (*)(InputContext*))(Il2CppBase() + 0x1E471C4))(this);
	}
	template <typename R = void> R set_isPocket3Button(bool value) {
		return ((R (*)(InputContext*, bool))(Il2CppBase() + 0x1E471E0))(this, value);
	}
	template <typename R = InputEntity*> R get_rightMouseEntity() {
		return ((R (*)(InputContext*))(Il2CppBase() + 0x1E47290))(this);
	}
	template <typename R = bool> R get_isRightMouse() {
		return ((R (*)(InputContext*))(Il2CppBase() + 0x1E4736C))(this);
	}
	template <typename R = void> R set_isRightMouse(bool value) {
		return ((R (*)(InputContext*, bool))(Il2CppBase() + 0x1E47388))(this, value);
	}
	template <typename R = InputEntity*> R get_skill1ButtonEntity() {
		return ((R (*)(InputContext*))(Il2CppBase() + 0x1E47438))(this);
	}
	template <typename R = bool> R get_isSkill1Button() {
		return ((R (*)(InputContext*))(Il2CppBase() + 0x1E47514))(this);
	}
	template <typename R = void> R set_isSkill1Button(bool value) {
		return ((R (*)(InputContext*, bool))(Il2CppBase() + 0x1E47530))(this, value);
	}
	template <typename R = InputEntity*> R get_skill2ButtonEntity() {
		return ((R (*)(InputContext*))(Il2CppBase() + 0x1E475E0))(this);
	}
	template <typename R = bool> R get_isSkill2Button() {
		return ((R (*)(InputContext*))(Il2CppBase() + 0x1E476BC))(this);
	}
	template <typename R = void> R set_isSkill2Button(bool value) {
		return ((R (*)(InputContext*, bool))(Il2CppBase() + 0x1E476D8))(this, value);
	}
	template <typename R = InputEntity*> R get_useButtonEntity() {
		return ((R (*)(InputContext*))(Il2CppBase() + 0x1E47788))(this);
	}
	template <typename R = bool> R get_isUseButton() {
		return ((R (*)(InputContext*))(Il2CppBase() + 0x1E47864))(this);
	}
	template <typename R = void> R set_isUseButton(bool value) {
		return ((R (*)(InputContext*, bool))(Il2CppBase() + 0x1E47880))(this, value);
	}
	template <typename R = InputEntity*> R get_verticalAxisEntity() {
		return ((R (*)(InputContext*))(Il2CppBase() + 0x1E40DF0))(this);
	}
	template <typename R = bool> R get_isVerticalAxis() {
		return ((R (*)(InputContext*))(Il2CppBase() + 0x1E47930))(this);
	}
	template <typename R = void> R set_isVerticalAxis(bool value) {
		return ((R (*)(InputContext*, bool))(Il2CppBase() + 0x1E4794C))(this, value);
	}
	template <typename R = InputEntity*> R get_verticalSkillShotEntity() {
		return ((R (*)(InputContext*))(Il2CppBase() + 0x1E4100C))(this);
	}
	template <typename R = bool> R get_isVerticalSkillShot() {
		return ((R (*)(InputContext*))(Il2CppBase() + 0x1E479FC))(this);
	}
	template <typename R = void> R set_isVerticalSkillShot(bool value) {
		return ((R (*)(InputContext*, bool))(Il2CppBase() + 0x1E47A18))(this, value);
	}

};

