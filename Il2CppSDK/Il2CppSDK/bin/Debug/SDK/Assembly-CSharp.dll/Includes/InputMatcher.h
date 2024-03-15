#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InputMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InputMatcher"));
	}

	 static IMatcher1InputEntity*>*& _matcherAttackButton() {
		return *(IMatcher1InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1InputEntity*>*& _matcherBannerButton() {
		return *(IMatcher1InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1InputEntity*>*& _matcherButtonDown() {
		return *(IMatcher1InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1InputEntity*>*& _matcherButtonHold() {
		return *(IMatcher1InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1InputEntity*>*& _matcherButtonPulse() {
		return *(IMatcher1InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1InputEntity*>*& _matcherButtonUp() {
		return *(IMatcher1InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1InputEntity*>*& _matcherCrouchButton() {
		return *(IMatcher1InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1InputEntity*>*& _matcherDrag() {
		return *(IMatcher1InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1InputEntity*>*& _matcherDuration() {
		return *(IMatcher1InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1InputEntity*>*& _matcherFishingButton() {
		return *(IMatcher1InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1InputEntity*>*& _matcherFishnetButton() {
		return *(IMatcher1InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	 static IMatcher1InputEntity*>*& _matcherFloatValue() {
		return *(IMatcher1InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	 static IMatcher1InputEntity*>*& _matcherHorizontalAxis() {
		return *(IMatcher1InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	 static IMatcher1InputEntity*>*& _matcherHorizontalSkillShot() {
		return *(IMatcher1InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	 static IMatcher1InputEntity*>*& _matcherHoverMouse() {
		return *(IMatcher1InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	 static IMatcher1InputEntity*>*& _matcherInteractButton() {
		return *(IMatcher1InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	 static IMatcher1InputEntity*>*& _matcherInventoryItem() {
		return *(IMatcher1InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	 static IMatcher1InputEntity*>*& _matcherLeftMouse() {
		return *(IMatcher1InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	 static IMatcher1InputEntity*>*& _matcherMountButton() {
		return *(IMatcher1InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	 static IMatcher1InputEntity*>*& _matcherMountSkill1Button() {
		return *(IMatcher1InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	 static IMatcher1InputEntity*>*& _matcherMountSkill2Button() {
		return *(IMatcher1InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	 static IMatcher1InputEntity*>*& _matcherMountSkill3Button() {
		return *(IMatcher1InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	 static IMatcher1InputEntity*>*& _matcherMouseDown() {
		return *(IMatcher1InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	 static IMatcher1InputEntity*>*& _matcherMousePosition() {
		return *(IMatcher1InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	 static IMatcher1InputEntity*>*& _matcherMouseUp() {
		return *(IMatcher1InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	 static IMatcher1InputEntity*>*& _matcherMoveToTarget() {
		return *(IMatcher1InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	 static IMatcher1InputEntity*>*& _matcherParent() {
		return *(IMatcher1InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	 static IMatcher1InputEntity*>*& _matcherPocket1Button() {
		return *(IMatcher1InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	 static IMatcher1InputEntity*>*& _matcherPocket2Button() {
		return *(IMatcher1InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	 static IMatcher1InputEntity*>*& _matcherPocket3Button() {
		return *(IMatcher1InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	 static IMatcher1InputEntity*>*& _matcherPosition() {
		return *(IMatcher1InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	 static IMatcher1InputEntity*>*& _matcherRightMouse() {
		return *(IMatcher1InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	 static IMatcher1InputEntity*>*& _matcherSkill1Button() {
		return *(IMatcher1InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	 static IMatcher1InputEntity*>*& _matcherSkill2Button() {
		return *(IMatcher1InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	 static IMatcher1InputEntity*>*& _matcherTick() {
		return *(IMatcher1InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	 static IMatcher1InputEntity*>*& _matcherUseButton() {
		return *(IMatcher1InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	 static IMatcher1InputEntity*>*& _matcherVelocity() {
		return *(IMatcher1InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	 static IMatcher1InputEntity*>*& _matcherVerticalAxis() {
		return *(IMatcher1InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	 static IMatcher1InputEntity*>*& _matcherVerticalSkillShot() {
		return *(IMatcher1InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x130);
	}

	 static IMatcher1InputEntity*>* get_AttackButton() {
		return ((IMatcher1InputEntity*>* (*)(void *))(Il2CppBase() + 0x14644A8))(0);
	}
	 static IMatcher1InputEntity*>* get_BannerButton() {
		return ((IMatcher1InputEntity*>* (*)(void *))(Il2CppBase() + 0x1464628))(0);
	}
	 static IMatcher1InputEntity*>* get_ButtonDown() {
		return ((IMatcher1InputEntity*>* (*)(void *))(Il2CppBase() + 0x14647C4))(0);
	}
	 static IMatcher1InputEntity*>* get_ButtonHold() {
		return ((IMatcher1InputEntity*>* (*)(void *))(Il2CppBase() + 0x1464960))(0);
	}
	 static IMatcher1InputEntity*>* get_ButtonPulse() {
		return ((IMatcher1InputEntity*>* (*)(void *))(Il2CppBase() + 0x1464AFC))(0);
	}
	 static IMatcher1InputEntity*>* get_ButtonUp() {
		return ((IMatcher1InputEntity*>* (*)(void *))(Il2CppBase() + 0x1464C98))(0);
	}
	 static IMatcher1InputEntity*>* get_CrouchButton() {
		return ((IMatcher1InputEntity*>* (*)(void *))(Il2CppBase() + 0x1464E34))(0);
	}
	 static IMatcher1InputEntity*>* get_Drag() {
		return ((IMatcher1InputEntity*>* (*)(void *))(Il2CppBase() + 0x1464FD0))(0);
	}
	 static IMatcher1InputEntity*>* get_Duration() {
		return ((IMatcher1InputEntity*>* (*)(void *))(Il2CppBase() + 0x146516C))(0);
	}
	 static IMatcher1InputEntity*>* get_FishingButton() {
		return ((IMatcher1InputEntity*>* (*)(void *))(Il2CppBase() + 0x1465308))(0);
	}
	 static IMatcher1InputEntity*>* get_FishnetButton() {
		return ((IMatcher1InputEntity*>* (*)(void *))(Il2CppBase() + 0x14654A4))(0);
	}
	 static IMatcher1InputEntity*>* get_FloatValue() {
		return ((IMatcher1InputEntity*>* (*)(void *))(Il2CppBase() + 0x1465640))(0);
	}
	 static IMatcher1InputEntity*>* get_HorizontalAxis() {
		return ((IMatcher1InputEntity*>* (*)(void *))(Il2CppBase() + 0x14657DC))(0);
	}
	 static IMatcher1InputEntity*>* get_HorizontalSkillShot() {
		return ((IMatcher1InputEntity*>* (*)(void *))(Il2CppBase() + 0x1465978))(0);
	}
	 static IMatcher1InputEntity*>* get_HoverMouse() {
		return ((IMatcher1InputEntity*>* (*)(void *))(Il2CppBase() + 0x1465B14))(0);
	}
	 static IMatcher1InputEntity*>* get_InteractButton() {
		return ((IMatcher1InputEntity*>* (*)(void *))(Il2CppBase() + 0x1465CB0))(0);
	}
	 static IMatcher1InputEntity*>* get_InventoryItem() {
		return ((IMatcher1InputEntity*>* (*)(void *))(Il2CppBase() + 0x1465E4C))(0);
	}
	 static IMatcher1InputEntity*>* get_LeftMouse() {
		return ((IMatcher1InputEntity*>* (*)(void *))(Il2CppBase() + 0x1465FE8))(0);
	}
	 static IMatcher1InputEntity*>* get_MountButton() {
		return ((IMatcher1InputEntity*>* (*)(void *))(Il2CppBase() + 0x1466184))(0);
	}
	 static IMatcher1InputEntity*>* get_MountSkill1Button() {
		return ((IMatcher1InputEntity*>* (*)(void *))(Il2CppBase() + 0x1466320))(0);
	}
	 static IMatcher1InputEntity*>* get_MountSkill2Button() {
		return ((IMatcher1InputEntity*>* (*)(void *))(Il2CppBase() + 0x14664BC))(0);
	}
	 static IMatcher1InputEntity*>* get_MountSkill3Button() {
		return ((IMatcher1InputEntity*>* (*)(void *))(Il2CppBase() + 0x1466658))(0);
	}
	 static IMatcher1InputEntity*>* get_MouseDown() {
		return ((IMatcher1InputEntity*>* (*)(void *))(Il2CppBase() + 0x14667F4))(0);
	}
	 static IMatcher1InputEntity*>* get_MousePosition() {
		return ((IMatcher1InputEntity*>* (*)(void *))(Il2CppBase() + 0x1466990))(0);
	}
	 static IMatcher1InputEntity*>* get_MouseUp() {
		return ((IMatcher1InputEntity*>* (*)(void *))(Il2CppBase() + 0x1466B2C))(0);
	}
	 static IMatcher1InputEntity*>* get_MoveToTarget() {
		return ((IMatcher1InputEntity*>* (*)(void *))(Il2CppBase() + 0x1466CC8))(0);
	}
	 static IMatcher1InputEntity*>* get_Parent() {
		return ((IMatcher1InputEntity*>* (*)(void *))(Il2CppBase() + 0x1466E64))(0);
	}
	 static IMatcher1InputEntity*>* get_Pocket1Button() {
		return ((IMatcher1InputEntity*>* (*)(void *))(Il2CppBase() + 0x1467000))(0);
	}
	 static IMatcher1InputEntity*>* get_Pocket2Button() {
		return ((IMatcher1InputEntity*>* (*)(void *))(Il2CppBase() + 0x146719C))(0);
	}
	 static IMatcher1InputEntity*>* get_Pocket3Button() {
		return ((IMatcher1InputEntity*>* (*)(void *))(Il2CppBase() + 0x1467338))(0);
	}
	 static IMatcher1InputEntity*>* get_Position() {
		return ((IMatcher1InputEntity*>* (*)(void *))(Il2CppBase() + 0x14674D4))(0);
	}
	 static IMatcher1InputEntity*>* get_RightMouse() {
		return ((IMatcher1InputEntity*>* (*)(void *))(Il2CppBase() + 0x1467670))(0);
	}
	 static IMatcher1InputEntity*>* get_Skill1Button() {
		return ((IMatcher1InputEntity*>* (*)(void *))(Il2CppBase() + 0x146780C))(0);
	}
	 static IMatcher1InputEntity*>* get_Skill2Button() {
		return ((IMatcher1InputEntity*>* (*)(void *))(Il2CppBase() + 0x14679AC))(0);
	}
	 static IMatcher1InputEntity*>* get_Tick() {
		return ((IMatcher1InputEntity*>* (*)(void *))(Il2CppBase() + 0x1467B4C))(0);
	}
	 static IMatcher1InputEntity*>* get_UseButton() {
		return ((IMatcher1InputEntity*>* (*)(void *))(Il2CppBase() + 0x1467CEC))(0);
	}
	 static IMatcher1InputEntity*>* get_Velocity() {
		return ((IMatcher1InputEntity*>* (*)(void *))(Il2CppBase() + 0x1467E8C))(0);
	}
	 static IMatcher1InputEntity*>* get_VerticalAxis() {
		return ((IMatcher1InputEntity*>* (*)(void *))(Il2CppBase() + 0x146802C))(0);
	}
	 static IMatcher1InputEntity*>* get_VerticalSkillShot() {
		return ((IMatcher1InputEntity*>* (*)(void *))(Il2CppBase() + 0x14681CC))(0);
	}
	 static IAllOfMatcher1InputEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1InputEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x146836C))(0, indices);
	}
	 static IAllOfMatcher1InputEntity*>* AllOf_1(Il2CppArray<IMatcher1InputEntity*>*>* matchers) {
		return ((IAllOfMatcher1InputEntity*>* (*)(void *, Il2CppArray<IMatcher1InputEntity*>*>*))(Il2CppBase() + 0x14683E4))(0, matchers);
	}
	 static IAnyOfMatcher1InputEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1InputEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x146845C))(0, indices);
	}
	 static IAnyOfMatcher1InputEntity*>* AnyOf_1(Il2CppArray<IMatcher1InputEntity*>*>* matchers) {
		return ((IAnyOfMatcher1InputEntity*>* (*)(void *, Il2CppArray<IMatcher1InputEntity*>*>*))(Il2CppBase() + 0x14684D4))(0, matchers);
	}

};

