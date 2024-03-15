#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InputEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InputEntity"));
	}

	template <typename R = AttackButtonComponent*> static R& attackButtonComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = BannerButtonComponent*> static R& bannerButtonComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = ButtonDownComponent*> static R& buttonDownComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename R = ButtonHoldComponent*> static R& buttonHoldComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename R = ButtonPulseComponent*> static R& buttonPulseComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename R = ButtonUpComponent*> static R& buttonUpComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename R = CrouchButtonComponent*> static R& crouchButtonComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename R = FishingButtonComponent*> static R& fishingButtonComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename R = FishnetButtonComponent*> static R& fishnetButtonComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename R = HorizontalAxisComponent*> static R& horizontalAxisComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename R = HorizontalSkillShotComponent*> static R& horizontalSkillShotComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename R = HoverMouseComponent*> static R& hoverMouseComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename R = InteractButtonComponent*> static R& interactButtonComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename R = LeftMouseComponent*> static R& leftMouseComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename R = MountButtonComponent*> static R& mountButtonComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename R = MountSkill1ButtonComponent*> static R& mountSkill1ButtonComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename R = MountSkill2ButtonComponent*> static R& mountSkill2ButtonComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename R = MountSkill3ButtonComponent*> static R& mountSkill3ButtonComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename R = Pocket1ButtonComponent*> static R& pocket1ButtonComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename R = Pocket2ButtonComponent*> static R& pocket2ButtonComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename R = Pocket3ButtonComponent*> static R& pocket3ButtonComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename R = RightMouseComponent*> static R& rightMouseComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename R = Skill1ButtonComponent*> static R& skill1ButtonComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename R = Skill2ButtonComponent*> static R& skill2ButtonComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename R = UseButtonComponent*> static R& useButtonComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename R = VerticalAxisComponent*> static R& verticalAxisComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename R = VerticalSkillShotComponent*> static R& verticalSkillShotComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}

	template <typename R = bool> R get_isAttackButton() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x145FCC0))(this);
	}
	template <typename R = void> R set_isAttackButton(bool value) {
		return ((R (*)(InputEntity*, bool))(Il2CppBase() + 0x145FCCC))(this, value);
	}
	template <typename R = bool> R get_isBannerButton() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x145FDE8))(this);
	}
	template <typename R = void> R set_isBannerButton(bool value) {
		return ((R (*)(InputEntity*, bool))(Il2CppBase() + 0x145FDF4))(this, value);
	}
	template <typename R = bool> R get_isButtonDown() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x145FF0C))(this);
	}
	template <typename R = void> R set_isButtonDown(bool value) {
		return ((R (*)(InputEntity*, bool))(Il2CppBase() + 0x145FF18))(this, value);
	}
	template <typename R = bool> R get_isButtonHold() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x1460030))(this);
	}
	template <typename R = void> R set_isButtonHold(bool value) {
		return ((R (*)(InputEntity*, bool))(Il2CppBase() + 0x146003C))(this, value);
	}
	template <typename R = bool> R get_isButtonPulse() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x1460154))(this);
	}
	template <typename R = void> R set_isButtonPulse(bool value) {
		return ((R (*)(InputEntity*, bool))(Il2CppBase() + 0x1460160))(this, value);
	}
	template <typename R = bool> R get_isButtonUp() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x1460278))(this);
	}
	template <typename R = void> R set_isButtonUp(bool value) {
		return ((R (*)(InputEntity*, bool))(Il2CppBase() + 0x1460284))(this, value);
	}
	template <typename R = bool> R get_isCrouchButton() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x146039C))(this);
	}
	template <typename R = void> R set_isCrouchButton(bool value) {
		return ((R (*)(InputEntity*, bool))(Il2CppBase() + 0x14603A8))(this, value);
	}
	template <typename R = DragComponent*> R get_drag() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x14604C0))(this);
	}
	template <typename R = bool> R get_hasDrag() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x1460548))(this);
	}
	template <typename R = void> R AddDrag(uintptr_t newPosition) {
		return ((R (*)(InputEntity*, uintptr_t))(Il2CppBase() + 0x1460554))(this, newPosition);
	}
	template <typename R = void> R ReplaceDrag(uintptr_t newPosition) {
		return ((R (*)(InputEntity*, uintptr_t))(Il2CppBase() + 0x146065C))(this, newPosition);
	}
	template <typename R = void> R RemoveDrag() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x1460764))(this);
	}
	template <typename R = DurationComponent*> R get_duration() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x1460770))(this);
	}
	template <typename R = bool> R get_hasDuration() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x14607F8))(this);
	}
	template <typename R = void> R AddDuration(float newValue) {
		return ((R (*)(InputEntity*, float))(Il2CppBase() + 0x1460804))(this, newValue);
	}
	template <typename R = void> R ReplaceDuration(float newValue) {
		return ((R (*)(InputEntity*, float))(Il2CppBase() + 0x1460908))(this, newValue);
	}
	template <typename R = void> R RemoveDuration() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x1460A0C))(this);
	}
	template <typename R = bool> R get_isFishingButton() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x1460A18))(this);
	}
	template <typename R = void> R set_isFishingButton(bool value) {
		return ((R (*)(InputEntity*, bool))(Il2CppBase() + 0x1460A24))(this, value);
	}
	template <typename R = bool> R get_isFishnetButton() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x1460B3C))(this);
	}
	template <typename R = void> R set_isFishnetButton(bool value) {
		return ((R (*)(InputEntity*, bool))(Il2CppBase() + 0x1460B48))(this, value);
	}
	template <typename R = FloatValueComponent*> R get_floatValue() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x1460C60))(this);
	}
	template <typename R = bool> R get_hasFloatValue() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x1460CE8))(this);
	}
	template <typename R = void> R AddFloatValue(float newValue) {
		return ((R (*)(InputEntity*, float))(Il2CppBase() + 0x1460CF4))(this, newValue);
	}
	template <typename R = void> R ReplaceFloatValue(float newValue) {
		return ((R (*)(InputEntity*, float))(Il2CppBase() + 0x1460DF8))(this, newValue);
	}
	template <typename R = void> R RemoveFloatValue() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x1460EFC))(this);
	}
	template <typename R = bool> R get_isHorizontalAxis() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x1460F08))(this);
	}
	template <typename R = void> R set_isHorizontalAxis(bool value) {
		return ((R (*)(InputEntity*, bool))(Il2CppBase() + 0x1460F14))(this, value);
	}
	template <typename R = bool> R get_isHorizontalSkillShot() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x146102C))(this);
	}
	template <typename R = void> R set_isHorizontalSkillShot(bool value) {
		return ((R (*)(InputEntity*, bool))(Il2CppBase() + 0x1461038))(this, value);
	}
	template <typename R = bool> R get_isHoverMouse() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x1461150))(this);
	}
	template <typename R = void> R set_isHoverMouse(bool value) {
		return ((R (*)(InputEntity*, bool))(Il2CppBase() + 0x146115C))(this, value);
	}
	template <typename R = bool> R get_isInteractButton() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x1461274))(this);
	}
	template <typename R = void> R set_isInteractButton(bool value) {
		return ((R (*)(InputEntity*, bool))(Il2CppBase() + 0x1461280))(this, value);
	}
	template <typename R = InventoryItemComponent*> R get_inventoryItem() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x1461398))(this);
	}
	template <typename R = bool> R get_hasInventoryItem() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x1461420))(this);
	}
	template <typename R = void> R AddInventoryItem(int32_t newId) {
		return ((R (*)(InputEntity*, int32_t))(Il2CppBase() + 0x146142C))(this, newId);
	}
	template <typename R = void> R ReplaceInventoryItem(int32_t newId) {
		return ((R (*)(InputEntity*, int32_t))(Il2CppBase() + 0x1461530))(this, newId);
	}
	template <typename R = void> R RemoveInventoryItem() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x1461634))(this);
	}
	template <typename R = bool> R get_isLeftMouse() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x1461640))(this);
	}
	template <typename R = void> R set_isLeftMouse(bool value) {
		return ((R (*)(InputEntity*, bool))(Il2CppBase() + 0x146164C))(this, value);
	}
	template <typename R = bool> R get_isMountButton() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x1461764))(this);
	}
	template <typename R = void> R set_isMountButton(bool value) {
		return ((R (*)(InputEntity*, bool))(Il2CppBase() + 0x1461770))(this, value);
	}
	template <typename R = bool> R get_isMountSkill1Button() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x1461888))(this);
	}
	template <typename R = void> R set_isMountSkill1Button(bool value) {
		return ((R (*)(InputEntity*, bool))(Il2CppBase() + 0x1461894))(this, value);
	}
	template <typename R = bool> R get_isMountSkill2Button() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x14619AC))(this);
	}
	template <typename R = void> R set_isMountSkill2Button(bool value) {
		return ((R (*)(InputEntity*, bool))(Il2CppBase() + 0x14619B8))(this, value);
	}
	template <typename R = bool> R get_isMountSkill3Button() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x1461AD0))(this);
	}
	template <typename R = void> R set_isMountSkill3Button(bool value) {
		return ((R (*)(InputEntity*, bool))(Il2CppBase() + 0x1461ADC))(this, value);
	}
	template <typename R = MouseDownComponent*> R get_mouseDown() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x1461BF4))(this);
	}
	template <typename R = bool> R get_hasMouseDown() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x1461C7C))(this);
	}
	template <typename R = void> R AddMouseDown(uintptr_t newPosition) {
		return ((R (*)(InputEntity*, uintptr_t))(Il2CppBase() + 0x1461C88))(this, newPosition);
	}
	template <typename R = void> R ReplaceMouseDown(uintptr_t newPosition) {
		return ((R (*)(InputEntity*, uintptr_t))(Il2CppBase() + 0x1461D90))(this, newPosition);
	}
	template <typename R = void> R RemoveMouseDown() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x1461E98))(this);
	}
	template <typename R = MousePositionComponent*> R get_mousePosition() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x1461EA4))(this);
	}
	template <typename R = bool> R get_hasMousePosition() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x1461F2C))(this);
	}
	template <typename R = void> R AddMousePosition(uintptr_t newPosition) {
		return ((R (*)(InputEntity*, uintptr_t))(Il2CppBase() + 0x1461F38))(this, newPosition);
	}
	template <typename R = void> R ReplaceMousePosition(uintptr_t newPosition) {
		return ((R (*)(InputEntity*, uintptr_t))(Il2CppBase() + 0x1462040))(this, newPosition);
	}
	template <typename R = void> R RemoveMousePosition() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x1462148))(this);
	}
	template <typename R = MouseUpComponent*> R get_mouseUp() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x1462154))(this);
	}
	template <typename R = bool> R get_hasMouseUp() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x14621DC))(this);
	}
	template <typename R = void> R AddMouseUp(uintptr_t newPosition) {
		return ((R (*)(InputEntity*, uintptr_t))(Il2CppBase() + 0x14621E8))(this, newPosition);
	}
	template <typename R = void> R ReplaceMouseUp(uintptr_t newPosition) {
		return ((R (*)(InputEntity*, uintptr_t))(Il2CppBase() + 0x14622F0))(this, newPosition);
	}
	template <typename R = void> R RemoveMouseUp() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x14623F8))(this);
	}
	template <typename R = MoveToTargetComponent*> R get_moveToTarget() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x1462404))(this);
	}
	template <typename R = bool> R get_hasMoveToTarget() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x146248C))(this);
	}
	template <typename R = void> R AddMoveToTarget(int32_t newId, float newMinDistance) {
		return ((R (*)(InputEntity*, int32_t, float))(Il2CppBase() + 0x1462498))(this, newId, newMinDistance);
	}
	template <typename R = void> R ReplaceMoveToTarget(int32_t newId, float newMinDistance) {
		return ((R (*)(InputEntity*, int32_t, float))(Il2CppBase() + 0x14625AC))(this, newId, newMinDistance);
	}
	template <typename R = void> R RemoveMoveToTarget() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x14626C0))(this);
	}
	template <typename R = ParentComponent*> R get_parent() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x14626CC))(this);
	}
	template <typename R = bool> R get_hasParent() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x1462754))(this);
	}
	template <typename R = void> R AddParent(int32_t newId) {
		return ((R (*)(InputEntity*, int32_t))(Il2CppBase() + 0x1462760))(this, newId);
	}
	template <typename R = void> R ReplaceParent(int32_t newId) {
		return ((R (*)(InputEntity*, int32_t))(Il2CppBase() + 0x1462864))(this, newId);
	}
	template <typename R = void> R RemoveParent() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x1462968))(this);
	}
	template <typename R = bool> R get_isPocket1Button() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x1462974))(this);
	}
	template <typename R = void> R set_isPocket1Button(bool value) {
		return ((R (*)(InputEntity*, bool))(Il2CppBase() + 0x1462980))(this, value);
	}
	template <typename R = bool> R get_isPocket2Button() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x1462A98))(this);
	}
	template <typename R = void> R set_isPocket2Button(bool value) {
		return ((R (*)(InputEntity*, bool))(Il2CppBase() + 0x1462AA4))(this, value);
	}
	template <typename R = bool> R get_isPocket3Button() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x1462BBC))(this);
	}
	template <typename R = void> R set_isPocket3Button(bool value) {
		return ((R (*)(InputEntity*, bool))(Il2CppBase() + 0x1462BC8))(this, value);
	}
	template <typename R = PositionComponent*> R get_position() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x1462CE0))(this);
	}
	template <typename R = bool> R get_hasPosition() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x1462D68))(this);
	}
	template <typename R = void> R AddPosition(float newX, float newY) {
		return ((R (*)(InputEntity*, float, float))(Il2CppBase() + 0x1462D74))(this, newX, newY);
	}
	template <typename R = void> R ReplacePosition(float newX, float newY) {
		return ((R (*)(InputEntity*, float, float))(Il2CppBase() + 0x1462E7C))(this, newX, newY);
	}
	template <typename R = void> R RemovePosition() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x1462F84))(this);
	}
	template <typename R = bool> R get_isRightMouse() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x1462F90))(this);
	}
	template <typename R = void> R set_isRightMouse(bool value) {
		return ((R (*)(InputEntity*, bool))(Il2CppBase() + 0x1462F9C))(this, value);
	}
	template <typename R = bool> R get_isSkill1Button() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x14630B4))(this);
	}
	template <typename R = void> R set_isSkill1Button(bool value) {
		return ((R (*)(InputEntity*, bool))(Il2CppBase() + 0x14630C0))(this, value);
	}
	template <typename R = bool> R get_isSkill2Button() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x14631D8))(this);
	}
	template <typename R = void> R set_isSkill2Button(bool value) {
		return ((R (*)(InputEntity*, bool))(Il2CppBase() + 0x14631E4))(this, value);
	}
	template <typename R = TickComponent*> R get_tick() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x14632FC))(this);
	}
	template <typename R = bool> R get_hasTick() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x1463384))(this);
	}
	template <typename R = void> R AddTick(int64_t newValue) {
		return ((R (*)(InputEntity*, int64_t))(Il2CppBase() + 0x1463390))(this, newValue);
	}
	template <typename R = void> R ReplaceTick(int64_t newValue) {
		return ((R (*)(InputEntity*, int64_t))(Il2CppBase() + 0x1463494))(this, newValue);
	}
	template <typename R = void> R RemoveTick() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x1463598))(this);
	}
	template <typename R = bool> R get_isUseButton() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x14635A4))(this);
	}
	template <typename R = void> R set_isUseButton(bool value) {
		return ((R (*)(InputEntity*, bool))(Il2CppBase() + 0x14635B0))(this, value);
	}
	template <typename R = VelocityComponent*> R get_velocity() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x14636C8))(this);
	}
	template <typename R = bool> R get_hasVelocity() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x1463750))(this);
	}
	template <typename R = void> R AddVelocity(float newX, float newY) {
		return ((R (*)(InputEntity*, float, float))(Il2CppBase() + 0x146375C))(this, newX, newY);
	}
	template <typename R = void> R ReplaceVelocity(float newX, float newY) {
		return ((R (*)(InputEntity*, float, float))(Il2CppBase() + 0x1463864))(this, newX, newY);
	}
	template <typename R = void> R RemoveVelocity() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x146396C))(this);
	}
	template <typename R = bool> R get_isVerticalAxis() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x1463978))(this);
	}
	template <typename R = void> R set_isVerticalAxis(bool value) {
		return ((R (*)(InputEntity*, bool))(Il2CppBase() + 0x1463984))(this, value);
	}
	template <typename R = bool> R get_isVerticalSkillShot() {
		return ((R (*)(InputEntity*))(Il2CppBase() + 0x1463A9C))(this);
	}
	template <typename R = void> R set_isVerticalSkillShot(bool value) {
		return ((R (*)(InputEntity*, bool))(Il2CppBase() + 0x1463AA8))(this, value);
	}

};

