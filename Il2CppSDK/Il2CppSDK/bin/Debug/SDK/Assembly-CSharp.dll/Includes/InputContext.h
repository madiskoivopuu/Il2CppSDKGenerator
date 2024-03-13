#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseContext1.h" 

class InputContext : public BaseContext1<InputEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InputContext"));
	}

	template <typename T = PrimaryEntityIndex2InputEntity*, int64_t>*> T& _tickIndex() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = IGroup1InputEntity*>*> T& _velocityEntities() {
		return *(T*)((uintptr_t)this + 0x100);
	}

	template <typename T = IGroup1InputEntity*>*> T GetVelocityEntities() {
		return ((T (*)(InputContext*))(Il2CppBase() + 0x1E45668))(this);
	}
	template <typename T = InputEntity*> T GetEntityWithTick(int64_t value) {
		return ((T (*)(InputContext*, int64_t))(Il2CppBase() + 0x1E40FA8))(this, value);
	}
	template <typename T = InputEntity*> T CreateMoveEntity(int64_t now, int32_t parentId, float x, float y, int32_t moveToTargetId) {
		return ((T (*)(InputContext*, int64_t, int32_t, float, float, int32_t))(Il2CppBase() + 0x1E456E0))(this, now, parentId, x, y, moveToTargetId);
	}
	template <typename T = void> T ClearInputs() {
		return ((T (*)(InputContext*))(Il2CppBase() + 0x1E457C8))(this);
	}
	template <typename T = InputEntity*> T get_attackButtonEntity() {
		return ((T (*)(InputContext*))(Il2CppBase() + 0x1E45820))(this);
	}
	template <typename T = bool> T get_isAttackButton() {
		return ((T (*)(InputContext*))(Il2CppBase() + 0x1E458FC))(this);
	}
	template <typename T = void> T set_isAttackButton(bool value) {
		return ((T (*)(InputContext*, bool))(Il2CppBase() + 0x1E45918))(this, value);
	}
	template <typename T = InputEntity*> T get_bannerButtonEntity() {
		return ((T (*)(InputContext*))(Il2CppBase() + 0x1E459C8))(this);
	}
	template <typename T = bool> T get_isBannerButton() {
		return ((T (*)(InputContext*))(Il2CppBase() + 0x1E45AA4))(this);
	}
	template <typename T = void> T set_isBannerButton(bool value) {
		return ((T (*)(InputContext*, bool))(Il2CppBase() + 0x1E45AC0))(this, value);
	}
	template <typename T = InputEntity*> T get_crouchButtonEntity() {
		return ((T (*)(InputContext*))(Il2CppBase() + 0x1E45B70))(this);
	}
	template <typename T = bool> T get_isCrouchButton() {
		return ((T (*)(InputContext*))(Il2CppBase() + 0x1E45C4C))(this);
	}
	template <typename T = void> T set_isCrouchButton(bool value) {
		return ((T (*)(InputContext*, bool))(Il2CppBase() + 0x1E45C68))(this, value);
	}
	template <typename T = InputEntity*> T get_fishingButtonEntity() {
		return ((T (*)(InputContext*))(Il2CppBase() + 0x1E45D18))(this);
	}
	template <typename T = bool> T get_isFishingButton() {
		return ((T (*)(InputContext*))(Il2CppBase() + 0x1E45DF4))(this);
	}
	template <typename T = void> T set_isFishingButton(bool value) {
		return ((T (*)(InputContext*, bool))(Il2CppBase() + 0x1E45E10))(this, value);
	}
	template <typename T = InputEntity*> T get_fishnetButtonEntity() {
		return ((T (*)(InputContext*))(Il2CppBase() + 0x1E45EC0))(this);
	}
	template <typename T = bool> T get_isFishnetButton() {
		return ((T (*)(InputContext*))(Il2CppBase() + 0x1E45F9C))(this);
	}
	template <typename T = void> T set_isFishnetButton(bool value) {
		return ((T (*)(InputContext*, bool))(Il2CppBase() + 0x1E45FB8))(this, value);
	}
	template <typename T = InputEntity*> T get_horizontalAxisEntity() {
		return ((T (*)(InputContext*))(Il2CppBase() + 0x1E40ECC))(this);
	}
	template <typename T = bool> T get_isHorizontalAxis() {
		return ((T (*)(InputContext*))(Il2CppBase() + 0x1E46068))(this);
	}
	template <typename T = void> T set_isHorizontalAxis(bool value) {
		return ((T (*)(InputContext*, bool))(Il2CppBase() + 0x1E46084))(this, value);
	}
	template <typename T = InputEntity*> T get_horizontalSkillShotEntity() {
		return ((T (*)(InputContext*))(Il2CppBase() + 0x1E410E8))(this);
	}
	template <typename T = bool> T get_isHorizontalSkillShot() {
		return ((T (*)(InputContext*))(Il2CppBase() + 0x1E46134))(this);
	}
	template <typename T = void> T set_isHorizontalSkillShot(bool value) {
		return ((T (*)(InputContext*, bool))(Il2CppBase() + 0x1E46150))(this, value);
	}
	template <typename T = InputEntity*> T get_hoverMouseEntity() {
		return ((T (*)(InputContext*))(Il2CppBase() + 0x1E46200))(this);
	}
	template <typename T = bool> T get_isHoverMouse() {
		return ((T (*)(InputContext*))(Il2CppBase() + 0x1E462DC))(this);
	}
	template <typename T = void> T set_isHoverMouse(bool value) {
		return ((T (*)(InputContext*, bool))(Il2CppBase() + 0x1E462F8))(this, value);
	}
	template <typename T = InputEntity*> T get_interactButtonEntity() {
		return ((T (*)(InputContext*))(Il2CppBase() + 0x1E463A8))(this);
	}
	template <typename T = bool> T get_isInteractButton() {
		return ((T (*)(InputContext*))(Il2CppBase() + 0x1E46484))(this);
	}
	template <typename T = void> T set_isInteractButton(bool value) {
		return ((T (*)(InputContext*, bool))(Il2CppBase() + 0x1E464A0))(this, value);
	}
	template <typename T = InputEntity*> T get_leftMouseEntity() {
		return ((T (*)(InputContext*))(Il2CppBase() + 0x1E46550))(this);
	}
	template <typename T = bool> T get_isLeftMouse() {
		return ((T (*)(InputContext*))(Il2CppBase() + 0x1E4662C))(this);
	}
	template <typename T = void> T set_isLeftMouse(bool value) {
		return ((T (*)(InputContext*, bool))(Il2CppBase() + 0x1E46648))(this, value);
	}
	template <typename T = InputEntity*> T get_mountButtonEntity() {
		return ((T (*)(InputContext*))(Il2CppBase() + 0x1E466F8))(this);
	}
	template <typename T = bool> T get_isMountButton() {
		return ((T (*)(InputContext*))(Il2CppBase() + 0x1E467D4))(this);
	}
	template <typename T = void> T set_isMountButton(bool value) {
		return ((T (*)(InputContext*, bool))(Il2CppBase() + 0x1E467F0))(this, value);
	}
	template <typename T = InputEntity*> T get_mountSkill1ButtonEntity() {
		return ((T (*)(InputContext*))(Il2CppBase() + 0x1E468A0))(this);
	}
	template <typename T = bool> T get_isMountSkill1Button() {
		return ((T (*)(InputContext*))(Il2CppBase() + 0x1E4697C))(this);
	}
	template <typename T = void> T set_isMountSkill1Button(bool value) {
		return ((T (*)(InputContext*, bool))(Il2CppBase() + 0x1E46998))(this, value);
	}
	template <typename T = InputEntity*> T get_mountSkill2ButtonEntity() {
		return ((T (*)(InputContext*))(Il2CppBase() + 0x1E46A48))(this);
	}
	template <typename T = bool> T get_isMountSkill2Button() {
		return ((T (*)(InputContext*))(Il2CppBase() + 0x1E46B24))(this);
	}
	template <typename T = void> T set_isMountSkill2Button(bool value) {
		return ((T (*)(InputContext*, bool))(Il2CppBase() + 0x1E46B40))(this, value);
	}
	template <typename T = InputEntity*> T get_mountSkill3ButtonEntity() {
		return ((T (*)(InputContext*))(Il2CppBase() + 0x1E46BF0))(this);
	}
	template <typename T = bool> T get_isMountSkill3Button() {
		return ((T (*)(InputContext*))(Il2CppBase() + 0x1E46CCC))(this);
	}
	template <typename T = void> T set_isMountSkill3Button(bool value) {
		return ((T (*)(InputContext*, bool))(Il2CppBase() + 0x1E46CE8))(this, value);
	}
	template <typename T = InputEntity*> T get_pocket1ButtonEntity() {
		return ((T (*)(InputContext*))(Il2CppBase() + 0x1E46D98))(this);
	}
	template <typename T = bool> T get_isPocket1Button() {
		return ((T (*)(InputContext*))(Il2CppBase() + 0x1E46E74))(this);
	}
	template <typename T = void> T set_isPocket1Button(bool value) {
		return ((T (*)(InputContext*, bool))(Il2CppBase() + 0x1E46E90))(this, value);
	}
	template <typename T = InputEntity*> T get_pocket2ButtonEntity() {
		return ((T (*)(InputContext*))(Il2CppBase() + 0x1E46F40))(this);
	}
	template <typename T = bool> T get_isPocket2Button() {
		return ((T (*)(InputContext*))(Il2CppBase() + 0x1E4701C))(this);
	}
	template <typename T = void> T set_isPocket2Button(bool value) {
		return ((T (*)(InputContext*, bool))(Il2CppBase() + 0x1E47038))(this, value);
	}
	template <typename T = InputEntity*> T get_pocket3ButtonEntity() {
		return ((T (*)(InputContext*))(Il2CppBase() + 0x1E470E8))(this);
	}
	template <typename T = bool> T get_isPocket3Button() {
		return ((T (*)(InputContext*))(Il2CppBase() + 0x1E471C4))(this);
	}
	template <typename T = void> T set_isPocket3Button(bool value) {
		return ((T (*)(InputContext*, bool))(Il2CppBase() + 0x1E471E0))(this, value);
	}
	template <typename T = InputEntity*> T get_rightMouseEntity() {
		return ((T (*)(InputContext*))(Il2CppBase() + 0x1E47290))(this);
	}
	template <typename T = bool> T get_isRightMouse() {
		return ((T (*)(InputContext*))(Il2CppBase() + 0x1E4736C))(this);
	}
	template <typename T = void> T set_isRightMouse(bool value) {
		return ((T (*)(InputContext*, bool))(Il2CppBase() + 0x1E47388))(this, value);
	}
	template <typename T = InputEntity*> T get_skill1ButtonEntity() {
		return ((T (*)(InputContext*))(Il2CppBase() + 0x1E47438))(this);
	}
	template <typename T = bool> T get_isSkill1Button() {
		return ((T (*)(InputContext*))(Il2CppBase() + 0x1E47514))(this);
	}
	template <typename T = void> T set_isSkill1Button(bool value) {
		return ((T (*)(InputContext*, bool))(Il2CppBase() + 0x1E47530))(this, value);
	}
	template <typename T = InputEntity*> T get_skill2ButtonEntity() {
		return ((T (*)(InputContext*))(Il2CppBase() + 0x1E475E0))(this);
	}
	template <typename T = bool> T get_isSkill2Button() {
		return ((T (*)(InputContext*))(Il2CppBase() + 0x1E476BC))(this);
	}
	template <typename T = void> T set_isSkill2Button(bool value) {
		return ((T (*)(InputContext*, bool))(Il2CppBase() + 0x1E476D8))(this, value);
	}
	template <typename T = InputEntity*> T get_useButtonEntity() {
		return ((T (*)(InputContext*))(Il2CppBase() + 0x1E47788))(this);
	}
	template <typename T = bool> T get_isUseButton() {
		return ((T (*)(InputContext*))(Il2CppBase() + 0x1E47864))(this);
	}
	template <typename T = void> T set_isUseButton(bool value) {
		return ((T (*)(InputContext*, bool))(Il2CppBase() + 0x1E47880))(this, value);
	}
	template <typename T = InputEntity*> T get_verticalAxisEntity() {
		return ((T (*)(InputContext*))(Il2CppBase() + 0x1E40DF0))(this);
	}
	template <typename T = bool> T get_isVerticalAxis() {
		return ((T (*)(InputContext*))(Il2CppBase() + 0x1E47930))(this);
	}
	template <typename T = void> T set_isVerticalAxis(bool value) {
		return ((T (*)(InputContext*, bool))(Il2CppBase() + 0x1E4794C))(this, value);
	}
	template <typename T = InputEntity*> T get_verticalSkillShotEntity() {
		return ((T (*)(InputContext*))(Il2CppBase() + 0x1E4100C))(this);
	}
	template <typename T = bool> T get_isVerticalSkillShot() {
		return ((T (*)(InputContext*))(Il2CppBase() + 0x1E479FC))(this);
	}
	template <typename T = void> T set_isVerticalSkillShot(bool value) {
		return ((T (*)(InputContext*, bool))(Il2CppBase() + 0x1E47A18))(this, value);
	}

};

