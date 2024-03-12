#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InputEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InputEntity"));
	}

	template <typename T = uintptr_t> static T& attackButtonComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& bannerButtonComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& buttonDownComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& buttonHoldComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& buttonPulseComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& buttonUpComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& crouchButtonComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& fishingButtonComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& fishnetButtonComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& horizontalAxisComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& horizontalSkillShotComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& hoverMouseComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& interactButtonComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& leftMouseComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& mountButtonComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& mountSkill1ButtonComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& mountSkill2ButtonComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& mountSkill3ButtonComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& pocket1ButtonComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& pocket2ButtonComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& pocket3ButtonComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& rightMouseComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& skill1ButtonComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& skill2ButtonComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& useButtonComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& verticalAxisComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& verticalSkillShotComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}

	template <typename T = bool> T get_isAttackButton() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x145FCC0))(this);
	}
	template <typename T = void> T set_isAttackButton(bool value) {
		return ((T (*)(InputEntity*, bool))(Il2CppBase() + 0x145FCCC))(this, value);
	}
	template <typename T = bool> T get_isBannerButton() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x145FDE8))(this);
	}
	template <typename T = void> T set_isBannerButton(bool value) {
		return ((T (*)(InputEntity*, bool))(Il2CppBase() + 0x145FDF4))(this, value);
	}
	template <typename T = bool> T get_isButtonDown() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x145FF0C))(this);
	}
	template <typename T = void> T set_isButtonDown(bool value) {
		return ((T (*)(InputEntity*, bool))(Il2CppBase() + 0x145FF18))(this, value);
	}
	template <typename T = bool> T get_isButtonHold() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x1460030))(this);
	}
	template <typename T = void> T set_isButtonHold(bool value) {
		return ((T (*)(InputEntity*, bool))(Il2CppBase() + 0x146003C))(this, value);
	}
	template <typename T = bool> T get_isButtonPulse() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x1460154))(this);
	}
	template <typename T = void> T set_isButtonPulse(bool value) {
		return ((T (*)(InputEntity*, bool))(Il2CppBase() + 0x1460160))(this, value);
	}
	template <typename T = bool> T get_isButtonUp() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x1460278))(this);
	}
	template <typename T = void> T set_isButtonUp(bool value) {
		return ((T (*)(InputEntity*, bool))(Il2CppBase() + 0x1460284))(this, value);
	}
	template <typename T = bool> T get_isCrouchButton() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x146039C))(this);
	}
	template <typename T = void> T set_isCrouchButton(bool value) {
		return ((T (*)(InputEntity*, bool))(Il2CppBase() + 0x14603A8))(this, value);
	}
	template <typename T = uintptr_t> T get_drag() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x14604C0))(this);
	}
	template <typename T = bool> T get_hasDrag() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x1460548))(this);
	}
	template <typename T = void> T AddDrag(Il2CppVector2 newPosition) {
		return ((T (*)(InputEntity*, Il2CppVector2))(Il2CppBase() + 0x1460554))(this, newPosition);
	}
	template <typename T = void> T ReplaceDrag(Il2CppVector2 newPosition) {
		return ((T (*)(InputEntity*, Il2CppVector2))(Il2CppBase() + 0x146065C))(this, newPosition);
	}
	template <typename T = void> T RemoveDrag() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x1460764))(this);
	}
	template <typename T = uintptr_t> T get_duration() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x1460770))(this);
	}
	template <typename T = bool> T get_hasDuration() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x14607F8))(this);
	}
	template <typename T = void> T AddDuration(float newValue) {
		return ((T (*)(InputEntity*, float))(Il2CppBase() + 0x1460804))(this, newValue);
	}
	template <typename T = void> T ReplaceDuration(float newValue) {
		return ((T (*)(InputEntity*, float))(Il2CppBase() + 0x1460908))(this, newValue);
	}
	template <typename T = void> T RemoveDuration() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x1460A0C))(this);
	}
	template <typename T = bool> T get_isFishingButton() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x1460A18))(this);
	}
	template <typename T = void> T set_isFishingButton(bool value) {
		return ((T (*)(InputEntity*, bool))(Il2CppBase() + 0x1460A24))(this, value);
	}
	template <typename T = bool> T get_isFishnetButton() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x1460B3C))(this);
	}
	template <typename T = void> T set_isFishnetButton(bool value) {
		return ((T (*)(InputEntity*, bool))(Il2CppBase() + 0x1460B48))(this, value);
	}
	template <typename T = uintptr_t> T get_floatValue() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x1460C60))(this);
	}
	template <typename T = bool> T get_hasFloatValue() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x1460CE8))(this);
	}
	template <typename T = void> T AddFloatValue(float newValue) {
		return ((T (*)(InputEntity*, float))(Il2CppBase() + 0x1460CF4))(this, newValue);
	}
	template <typename T = void> T ReplaceFloatValue(float newValue) {
		return ((T (*)(InputEntity*, float))(Il2CppBase() + 0x1460DF8))(this, newValue);
	}
	template <typename T = void> T RemoveFloatValue() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x1460EFC))(this);
	}
	template <typename T = bool> T get_isHorizontalAxis() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x1460F08))(this);
	}
	template <typename T = void> T set_isHorizontalAxis(bool value) {
		return ((T (*)(InputEntity*, bool))(Il2CppBase() + 0x1460F14))(this, value);
	}
	template <typename T = bool> T get_isHorizontalSkillShot() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x146102C))(this);
	}
	template <typename T = void> T set_isHorizontalSkillShot(bool value) {
		return ((T (*)(InputEntity*, bool))(Il2CppBase() + 0x1461038))(this, value);
	}
	template <typename T = bool> T get_isHoverMouse() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x1461150))(this);
	}
	template <typename T = void> T set_isHoverMouse(bool value) {
		return ((T (*)(InputEntity*, bool))(Il2CppBase() + 0x146115C))(this, value);
	}
	template <typename T = bool> T get_isInteractButton() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x1461274))(this);
	}
	template <typename T = void> T set_isInteractButton(bool value) {
		return ((T (*)(InputEntity*, bool))(Il2CppBase() + 0x1461280))(this, value);
	}
	template <typename T = uintptr_t> T get_inventoryItem() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x1461398))(this);
	}
	template <typename T = bool> T get_hasInventoryItem() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x1461420))(this);
	}
	template <typename T = void> T AddInventoryItem(int32_t newId) {
		return ((T (*)(InputEntity*, int32_t))(Il2CppBase() + 0x146142C))(this, newId);
	}
	template <typename T = void> T ReplaceInventoryItem(int32_t newId) {
		return ((T (*)(InputEntity*, int32_t))(Il2CppBase() + 0x1461530))(this, newId);
	}
	template <typename T = void> T RemoveInventoryItem() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x1461634))(this);
	}
	template <typename T = bool> T get_isLeftMouse() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x1461640))(this);
	}
	template <typename T = void> T set_isLeftMouse(bool value) {
		return ((T (*)(InputEntity*, bool))(Il2CppBase() + 0x146164C))(this, value);
	}
	template <typename T = bool> T get_isMountButton() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x1461764))(this);
	}
	template <typename T = void> T set_isMountButton(bool value) {
		return ((T (*)(InputEntity*, bool))(Il2CppBase() + 0x1461770))(this, value);
	}
	template <typename T = bool> T get_isMountSkill1Button() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x1461888))(this);
	}
	template <typename T = void> T set_isMountSkill1Button(bool value) {
		return ((T (*)(InputEntity*, bool))(Il2CppBase() + 0x1461894))(this, value);
	}
	template <typename T = bool> T get_isMountSkill2Button() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x14619AC))(this);
	}
	template <typename T = void> T set_isMountSkill2Button(bool value) {
		return ((T (*)(InputEntity*, bool))(Il2CppBase() + 0x14619B8))(this, value);
	}
	template <typename T = bool> T get_isMountSkill3Button() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x1461AD0))(this);
	}
	template <typename T = void> T set_isMountSkill3Button(bool value) {
		return ((T (*)(InputEntity*, bool))(Il2CppBase() + 0x1461ADC))(this, value);
	}
	template <typename T = uintptr_t> T get_mouseDown() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x1461BF4))(this);
	}
	template <typename T = bool> T get_hasMouseDown() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x1461C7C))(this);
	}
	template <typename T = void> T AddMouseDown(Il2CppVector2 newPosition) {
		return ((T (*)(InputEntity*, Il2CppVector2))(Il2CppBase() + 0x1461C88))(this, newPosition);
	}
	template <typename T = void> T ReplaceMouseDown(Il2CppVector2 newPosition) {
		return ((T (*)(InputEntity*, Il2CppVector2))(Il2CppBase() + 0x1461D90))(this, newPosition);
	}
	template <typename T = void> T RemoveMouseDown() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x1461E98))(this);
	}
	template <typename T = uintptr_t> T get_mousePosition() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x1461EA4))(this);
	}
	template <typename T = bool> T get_hasMousePosition() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x1461F2C))(this);
	}
	template <typename T = void> T AddMousePosition(Il2CppVector2 newPosition) {
		return ((T (*)(InputEntity*, Il2CppVector2))(Il2CppBase() + 0x1461F38))(this, newPosition);
	}
	template <typename T = void> T ReplaceMousePosition(Il2CppVector2 newPosition) {
		return ((T (*)(InputEntity*, Il2CppVector2))(Il2CppBase() + 0x1462040))(this, newPosition);
	}
	template <typename T = void> T RemoveMousePosition() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x1462148))(this);
	}
	template <typename T = uintptr_t> T get_mouseUp() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x1462154))(this);
	}
	template <typename T = bool> T get_hasMouseUp() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x14621DC))(this);
	}
	template <typename T = void> T AddMouseUp(Il2CppVector2 newPosition) {
		return ((T (*)(InputEntity*, Il2CppVector2))(Il2CppBase() + 0x14621E8))(this, newPosition);
	}
	template <typename T = void> T ReplaceMouseUp(Il2CppVector2 newPosition) {
		return ((T (*)(InputEntity*, Il2CppVector2))(Il2CppBase() + 0x14622F0))(this, newPosition);
	}
	template <typename T = void> T RemoveMouseUp() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x14623F8))(this);
	}
	template <typename T = uintptr_t> T get_moveToTarget() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x1462404))(this);
	}
	template <typename T = bool> T get_hasMoveToTarget() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x146248C))(this);
	}
	template <typename T = void> T AddMoveToTarget(int32_t newId, float newMinDistance) {
		return ((T (*)(InputEntity*, int32_t, float))(Il2CppBase() + 0x1462498))(this, newId, newMinDistance);
	}
	template <typename T = void> T ReplaceMoveToTarget(int32_t newId, float newMinDistance) {
		return ((T (*)(InputEntity*, int32_t, float))(Il2CppBase() + 0x14625AC))(this, newId, newMinDistance);
	}
	template <typename T = void> T RemoveMoveToTarget() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x14626C0))(this);
	}
	template <typename T = uintptr_t> T get_parent() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x14626CC))(this);
	}
	template <typename T = bool> T get_hasParent() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x1462754))(this);
	}
	template <typename T = void> T AddParent(int32_t newId) {
		return ((T (*)(InputEntity*, int32_t))(Il2CppBase() + 0x1462760))(this, newId);
	}
	template <typename T = void> T ReplaceParent(int32_t newId) {
		return ((T (*)(InputEntity*, int32_t))(Il2CppBase() + 0x1462864))(this, newId);
	}
	template <typename T = void> T RemoveParent() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x1462968))(this);
	}
	template <typename T = bool> T get_isPocket1Button() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x1462974))(this);
	}
	template <typename T = void> T set_isPocket1Button(bool value) {
		return ((T (*)(InputEntity*, bool))(Il2CppBase() + 0x1462980))(this, value);
	}
	template <typename T = bool> T get_isPocket2Button() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x1462A98))(this);
	}
	template <typename T = void> T set_isPocket2Button(bool value) {
		return ((T (*)(InputEntity*, bool))(Il2CppBase() + 0x1462AA4))(this, value);
	}
	template <typename T = bool> T get_isPocket3Button() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x1462BBC))(this);
	}
	template <typename T = void> T set_isPocket3Button(bool value) {
		return ((T (*)(InputEntity*, bool))(Il2CppBase() + 0x1462BC8))(this, value);
	}
	template <typename T = uintptr_t> T get_position() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x1462CE0))(this);
	}
	template <typename T = bool> T get_hasPosition() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x1462D68))(this);
	}
	template <typename T = void> T AddPosition(float newX, float newY) {
		return ((T (*)(InputEntity*, float, float))(Il2CppBase() + 0x1462D74))(this, newX, newY);
	}
	template <typename T = void> T ReplacePosition(float newX, float newY) {
		return ((T (*)(InputEntity*, float, float))(Il2CppBase() + 0x1462E7C))(this, newX, newY);
	}
	template <typename T = void> T RemovePosition() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x1462F84))(this);
	}
	template <typename T = bool> T get_isRightMouse() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x1462F90))(this);
	}
	template <typename T = void> T set_isRightMouse(bool value) {
		return ((T (*)(InputEntity*, bool))(Il2CppBase() + 0x1462F9C))(this, value);
	}
	template <typename T = bool> T get_isSkill1Button() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x14630B4))(this);
	}
	template <typename T = void> T set_isSkill1Button(bool value) {
		return ((T (*)(InputEntity*, bool))(Il2CppBase() + 0x14630C0))(this, value);
	}
	template <typename T = bool> T get_isSkill2Button() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x14631D8))(this);
	}
	template <typename T = void> T set_isSkill2Button(bool value) {
		return ((T (*)(InputEntity*, bool))(Il2CppBase() + 0x14631E4))(this, value);
	}
	template <typename T = uintptr_t> T get_tick() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x14632FC))(this);
	}
	template <typename T = bool> T get_hasTick() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x1463384))(this);
	}
	template <typename T = void> T AddTick(int64_t newValue) {
		return ((T (*)(InputEntity*, int64_t))(Il2CppBase() + 0x1463390))(this, newValue);
	}
	template <typename T = void> T ReplaceTick(int64_t newValue) {
		return ((T (*)(InputEntity*, int64_t))(Il2CppBase() + 0x1463494))(this, newValue);
	}
	template <typename T = void> T RemoveTick() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x1463598))(this);
	}
	template <typename T = bool> T get_isUseButton() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x14635A4))(this);
	}
	template <typename T = void> T set_isUseButton(bool value) {
		return ((T (*)(InputEntity*, bool))(Il2CppBase() + 0x14635B0))(this, value);
	}
	template <typename T = uintptr_t> T get_velocity() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x14636C8))(this);
	}
	template <typename T = bool> T get_hasVelocity() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x1463750))(this);
	}
	template <typename T = void> T AddVelocity(float newX, float newY) {
		return ((T (*)(InputEntity*, float, float))(Il2CppBase() + 0x146375C))(this, newX, newY);
	}
	template <typename T = void> T ReplaceVelocity(float newX, float newY) {
		return ((T (*)(InputEntity*, float, float))(Il2CppBase() + 0x1463864))(this, newX, newY);
	}
	template <typename T = void> T RemoveVelocity() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x146396C))(this);
	}
	template <typename T = bool> T get_isVerticalAxis() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x1463978))(this);
	}
	template <typename T = void> T set_isVerticalAxis(bool value) {
		return ((T (*)(InputEntity*, bool))(Il2CppBase() + 0x1463984))(this, value);
	}
	template <typename T = bool> T get_isVerticalSkillShot() {
		return ((T (*)(InputEntity*))(Il2CppBase() + 0x1463A9C))(this);
	}
	template <typename T = void> T set_isVerticalSkillShot(bool value) {
		return ((T (*)(InputEntity*, bool))(Il2CppBase() + 0x1463AA8))(this, value);
	}

};

}
