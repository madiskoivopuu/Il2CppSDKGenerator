#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InputMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InputMatcher"));
	}

	template <typename T = IMatcher1InputEntity*>*> static T& _matcherAttackButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = IMatcher1InputEntity*>*> static T& _matcherBannerButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = IMatcher1InputEntity*>*> static T& _matcherButtonDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = IMatcher1InputEntity*>*> static T& _matcherButtonHold() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = IMatcher1InputEntity*>*> static T& _matcherButtonPulse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = IMatcher1InputEntity*>*> static T& _matcherButtonUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = IMatcher1InputEntity*>*> static T& _matcherCrouchButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = IMatcher1InputEntity*>*> static T& _matcherDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = IMatcher1InputEntity*>*> static T& _matcherDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = IMatcher1InputEntity*>*> static T& _matcherFishingButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = IMatcher1InputEntity*>*> static T& _matcherFishnetButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = IMatcher1InputEntity*>*> static T& _matcherFloatValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = IMatcher1InputEntity*>*> static T& _matcherHorizontalAxis() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = IMatcher1InputEntity*>*> static T& _matcherHorizontalSkillShot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = IMatcher1InputEntity*>*> static T& _matcherHoverMouse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = IMatcher1InputEntity*>*> static T& _matcherInteractButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = IMatcher1InputEntity*>*> static T& _matcherInventoryItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = IMatcher1InputEntity*>*> static T& _matcherLeftMouse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = IMatcher1InputEntity*>*> static T& _matcherMountButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = IMatcher1InputEntity*>*> static T& _matcherMountSkill1Button() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = IMatcher1InputEntity*>*> static T& _matcherMountSkill2Button() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = IMatcher1InputEntity*>*> static T& _matcherMountSkill3Button() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = IMatcher1InputEntity*>*> static T& _matcherMouseDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = IMatcher1InputEntity*>*> static T& _matcherMousePosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = IMatcher1InputEntity*>*> static T& _matcherMouseUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = IMatcher1InputEntity*>*> static T& _matcherMoveToTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = IMatcher1InputEntity*>*> static T& _matcherParent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = IMatcher1InputEntity*>*> static T& _matcherPocket1Button() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = IMatcher1InputEntity*>*> static T& _matcherPocket2Button() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = IMatcher1InputEntity*>*> static T& _matcherPocket3Button() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = IMatcher1InputEntity*>*> static T& _matcherPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = IMatcher1InputEntity*>*> static T& _matcherRightMouse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = IMatcher1InputEntity*>*> static T& _matcherSkill1Button() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = IMatcher1InputEntity*>*> static T& _matcherSkill2Button() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = IMatcher1InputEntity*>*> static T& _matcherTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = IMatcher1InputEntity*>*> static T& _matcherUseButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = IMatcher1InputEntity*>*> static T& _matcherVelocity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = IMatcher1InputEntity*>*> static T& _matcherVerticalAxis() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = IMatcher1InputEntity*>*> static T& _matcherVerticalSkillShot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}

	template <typename T = IMatcher1InputEntity*>*> static T get_AttackButton() {
		return ((T (*)(void *))(Il2CppBase() + 0x14644A8))(0);
	}
	template <typename T = IMatcher1InputEntity*>*> static T get_BannerButton() {
		return ((T (*)(void *))(Il2CppBase() + 0x1464628))(0);
	}
	template <typename T = IMatcher1InputEntity*>*> static T get_ButtonDown() {
		return ((T (*)(void *))(Il2CppBase() + 0x14647C4))(0);
	}
	template <typename T = IMatcher1InputEntity*>*> static T get_ButtonHold() {
		return ((T (*)(void *))(Il2CppBase() + 0x1464960))(0);
	}
	template <typename T = IMatcher1InputEntity*>*> static T get_ButtonPulse() {
		return ((T (*)(void *))(Il2CppBase() + 0x1464AFC))(0);
	}
	template <typename T = IMatcher1InputEntity*>*> static T get_ButtonUp() {
		return ((T (*)(void *))(Il2CppBase() + 0x1464C98))(0);
	}
	template <typename T = IMatcher1InputEntity*>*> static T get_CrouchButton() {
		return ((T (*)(void *))(Il2CppBase() + 0x1464E34))(0);
	}
	template <typename T = IMatcher1InputEntity*>*> static T get_Drag() {
		return ((T (*)(void *))(Il2CppBase() + 0x1464FD0))(0);
	}
	template <typename T = IMatcher1InputEntity*>*> static T get_Duration() {
		return ((T (*)(void *))(Il2CppBase() + 0x146516C))(0);
	}
	template <typename T = IMatcher1InputEntity*>*> static T get_FishingButton() {
		return ((T (*)(void *))(Il2CppBase() + 0x1465308))(0);
	}
	template <typename T = IMatcher1InputEntity*>*> static T get_FishnetButton() {
		return ((T (*)(void *))(Il2CppBase() + 0x14654A4))(0);
	}
	template <typename T = IMatcher1InputEntity*>*> static T get_FloatValue() {
		return ((T (*)(void *))(Il2CppBase() + 0x1465640))(0);
	}
	template <typename T = IMatcher1InputEntity*>*> static T get_HorizontalAxis() {
		return ((T (*)(void *))(Il2CppBase() + 0x14657DC))(0);
	}
	template <typename T = IMatcher1InputEntity*>*> static T get_HorizontalSkillShot() {
		return ((T (*)(void *))(Il2CppBase() + 0x1465978))(0);
	}
	template <typename T = IMatcher1InputEntity*>*> static T get_HoverMouse() {
		return ((T (*)(void *))(Il2CppBase() + 0x1465B14))(0);
	}
	template <typename T = IMatcher1InputEntity*>*> static T get_InteractButton() {
		return ((T (*)(void *))(Il2CppBase() + 0x1465CB0))(0);
	}
	template <typename T = IMatcher1InputEntity*>*> static T get_InventoryItem() {
		return ((T (*)(void *))(Il2CppBase() + 0x1465E4C))(0);
	}
	template <typename T = IMatcher1InputEntity*>*> static T get_LeftMouse() {
		return ((T (*)(void *))(Il2CppBase() + 0x1465FE8))(0);
	}
	template <typename T = IMatcher1InputEntity*>*> static T get_MountButton() {
		return ((T (*)(void *))(Il2CppBase() + 0x1466184))(0);
	}
	template <typename T = IMatcher1InputEntity*>*> static T get_MountSkill1Button() {
		return ((T (*)(void *))(Il2CppBase() + 0x1466320))(0);
	}
	template <typename T = IMatcher1InputEntity*>*> static T get_MountSkill2Button() {
		return ((T (*)(void *))(Il2CppBase() + 0x14664BC))(0);
	}
	template <typename T = IMatcher1InputEntity*>*> static T get_MountSkill3Button() {
		return ((T (*)(void *))(Il2CppBase() + 0x1466658))(0);
	}
	template <typename T = IMatcher1InputEntity*>*> static T get_MouseDown() {
		return ((T (*)(void *))(Il2CppBase() + 0x14667F4))(0);
	}
	template <typename T = IMatcher1InputEntity*>*> static T get_MousePosition() {
		return ((T (*)(void *))(Il2CppBase() + 0x1466990))(0);
	}
	template <typename T = IMatcher1InputEntity*>*> static T get_MouseUp() {
		return ((T (*)(void *))(Il2CppBase() + 0x1466B2C))(0);
	}
	template <typename T = IMatcher1InputEntity*>*> static T get_MoveToTarget() {
		return ((T (*)(void *))(Il2CppBase() + 0x1466CC8))(0);
	}
	template <typename T = IMatcher1InputEntity*>*> static T get_Parent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1466E64))(0);
	}
	template <typename T = IMatcher1InputEntity*>*> static T get_Pocket1Button() {
		return ((T (*)(void *))(Il2CppBase() + 0x1467000))(0);
	}
	template <typename T = IMatcher1InputEntity*>*> static T get_Pocket2Button() {
		return ((T (*)(void *))(Il2CppBase() + 0x146719C))(0);
	}
	template <typename T = IMatcher1InputEntity*>*> static T get_Pocket3Button() {
		return ((T (*)(void *))(Il2CppBase() + 0x1467338))(0);
	}
	template <typename T = IMatcher1InputEntity*>*> static T get_Position() {
		return ((T (*)(void *))(Il2CppBase() + 0x14674D4))(0);
	}
	template <typename T = IMatcher1InputEntity*>*> static T get_RightMouse() {
		return ((T (*)(void *))(Il2CppBase() + 0x1467670))(0);
	}
	template <typename T = IMatcher1InputEntity*>*> static T get_Skill1Button() {
		return ((T (*)(void *))(Il2CppBase() + 0x146780C))(0);
	}
	template <typename T = IMatcher1InputEntity*>*> static T get_Skill2Button() {
		return ((T (*)(void *))(Il2CppBase() + 0x14679AC))(0);
	}
	template <typename T = IMatcher1InputEntity*>*> static T get_Tick() {
		return ((T (*)(void *))(Il2CppBase() + 0x1467B4C))(0);
	}
	template <typename T = IMatcher1InputEntity*>*> static T get_UseButton() {
		return ((T (*)(void *))(Il2CppBase() + 0x1467CEC))(0);
	}
	template <typename T = IMatcher1InputEntity*>*> static T get_Velocity() {
		return ((T (*)(void *))(Il2CppBase() + 0x1467E8C))(0);
	}
	template <typename T = IMatcher1InputEntity*>*> static T get_VerticalAxis() {
		return ((T (*)(void *))(Il2CppBase() + 0x146802C))(0);
	}
	template <typename T = IMatcher1InputEntity*>*> static T get_VerticalSkillShot() {
		return ((T (*)(void *))(Il2CppBase() + 0x14681CC))(0);
	}
	template <typename T = IAllOfMatcher1InputEntity*>*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x146836C))(0, indices);
	}
	template <typename T = IAllOfMatcher1InputEntity*>*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x14683E4))(0, matchers);
	}
	template <typename T = IAnyOfMatcher1InputEntity*>*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x146845C))(0, indices);
	}
	template <typename T = IAnyOfMatcher1InputEntity*>*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x14684D4))(0, matchers);
	}

};

