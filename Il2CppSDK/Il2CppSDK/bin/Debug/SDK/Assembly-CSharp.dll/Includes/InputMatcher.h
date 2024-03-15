#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InputMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InputMatcher"));
	}

	 static IMatcher1<InputEntity*>*& _matcherAttackButton() {
		return *(IMatcher1<InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1<InputEntity*>*& _matcherBannerButton() {
		return *(IMatcher1<InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1<InputEntity*>*& _matcherButtonDown() {
		return *(IMatcher1<InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1<InputEntity*>*& _matcherButtonHold() {
		return *(IMatcher1<InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1<InputEntity*>*& _matcherButtonPulse() {
		return *(IMatcher1<InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1<InputEntity*>*& _matcherButtonUp() {
		return *(IMatcher1<InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1<InputEntity*>*& _matcherCrouchButton() {
		return *(IMatcher1<InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1<InputEntity*>*& _matcherDrag() {
		return *(IMatcher1<InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1<InputEntity*>*& _matcherDuration() {
		return *(IMatcher1<InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1<InputEntity*>*& _matcherFishingButton() {
		return *(IMatcher1<InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1<InputEntity*>*& _matcherFishnetButton() {
		return *(IMatcher1<InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	 static IMatcher1<InputEntity*>*& _matcherFloatValue() {
		return *(IMatcher1<InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	 static IMatcher1<InputEntity*>*& _matcherHorizontalAxis() {
		return *(IMatcher1<InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	 static IMatcher1<InputEntity*>*& _matcherHorizontalSkillShot() {
		return *(IMatcher1<InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	 static IMatcher1<InputEntity*>*& _matcherHoverMouse() {
		return *(IMatcher1<InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	 static IMatcher1<InputEntity*>*& _matcherInteractButton() {
		return *(IMatcher1<InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	 static IMatcher1<InputEntity*>*& _matcherInventoryItem() {
		return *(IMatcher1<InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	 static IMatcher1<InputEntity*>*& _matcherLeftMouse() {
		return *(IMatcher1<InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	 static IMatcher1<InputEntity*>*& _matcherMountButton() {
		return *(IMatcher1<InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	 static IMatcher1<InputEntity*>*& _matcherMountSkill1Button() {
		return *(IMatcher1<InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	 static IMatcher1<InputEntity*>*& _matcherMountSkill2Button() {
		return *(IMatcher1<InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	 static IMatcher1<InputEntity*>*& _matcherMountSkill3Button() {
		return *(IMatcher1<InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	 static IMatcher1<InputEntity*>*& _matcherMouseDown() {
		return *(IMatcher1<InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	 static IMatcher1<InputEntity*>*& _matcherMousePosition() {
		return *(IMatcher1<InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	 static IMatcher1<InputEntity*>*& _matcherMouseUp() {
		return *(IMatcher1<InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	 static IMatcher1<InputEntity*>*& _matcherMoveToTarget() {
		return *(IMatcher1<InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	 static IMatcher1<InputEntity*>*& _matcherParent() {
		return *(IMatcher1<InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	 static IMatcher1<InputEntity*>*& _matcherPocket1Button() {
		return *(IMatcher1<InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	 static IMatcher1<InputEntity*>*& _matcherPocket2Button() {
		return *(IMatcher1<InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	 static IMatcher1<InputEntity*>*& _matcherPocket3Button() {
		return *(IMatcher1<InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	 static IMatcher1<InputEntity*>*& _matcherPosition() {
		return *(IMatcher1<InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	 static IMatcher1<InputEntity*>*& _matcherRightMouse() {
		return *(IMatcher1<InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	 static IMatcher1<InputEntity*>*& _matcherSkill1Button() {
		return *(IMatcher1<InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	 static IMatcher1<InputEntity*>*& _matcherSkill2Button() {
		return *(IMatcher1<InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	 static IMatcher1<InputEntity*>*& _matcherTick() {
		return *(IMatcher1<InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	 static IMatcher1<InputEntity*>*& _matcherUseButton() {
		return *(IMatcher1<InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	 static IMatcher1<InputEntity*>*& _matcherVelocity() {
		return *(IMatcher1<InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	 static IMatcher1<InputEntity*>*& _matcherVerticalAxis() {
		return *(IMatcher1<InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	 static IMatcher1<InputEntity*>*& _matcherVerticalSkillShot() {
		return *(IMatcher1<InputEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x130);
	}

	 static IMatcher1<InputEntity*>* get_AttackButton() {
		return ((IMatcher1<InputEntity*>* (*)(void *))(Il2CppBase() + 0x14644A8))(0);
	}
	 static IMatcher1<InputEntity*>* get_BannerButton() {
		return ((IMatcher1<InputEntity*>* (*)(void *))(Il2CppBase() + 0x1464628))(0);
	}
	 static IMatcher1<InputEntity*>* get_ButtonDown() {
		return ((IMatcher1<InputEntity*>* (*)(void *))(Il2CppBase() + 0x14647C4))(0);
	}
	 static IMatcher1<InputEntity*>* get_ButtonHold() {
		return ((IMatcher1<InputEntity*>* (*)(void *))(Il2CppBase() + 0x1464960))(0);
	}
	 static IMatcher1<InputEntity*>* get_ButtonPulse() {
		return ((IMatcher1<InputEntity*>* (*)(void *))(Il2CppBase() + 0x1464AFC))(0);
	}
	 static IMatcher1<InputEntity*>* get_ButtonUp() {
		return ((IMatcher1<InputEntity*>* (*)(void *))(Il2CppBase() + 0x1464C98))(0);
	}
	 static IMatcher1<InputEntity*>* get_CrouchButton() {
		return ((IMatcher1<InputEntity*>* (*)(void *))(Il2CppBase() + 0x1464E34))(0);
	}
	 static IMatcher1<InputEntity*>* get_Drag() {
		return ((IMatcher1<InputEntity*>* (*)(void *))(Il2CppBase() + 0x1464FD0))(0);
	}
	 static IMatcher1<InputEntity*>* get_Duration() {
		return ((IMatcher1<InputEntity*>* (*)(void *))(Il2CppBase() + 0x146516C))(0);
	}
	 static IMatcher1<InputEntity*>* get_FishingButton() {
		return ((IMatcher1<InputEntity*>* (*)(void *))(Il2CppBase() + 0x1465308))(0);
	}
	 static IMatcher1<InputEntity*>* get_FishnetButton() {
		return ((IMatcher1<InputEntity*>* (*)(void *))(Il2CppBase() + 0x14654A4))(0);
	}
	 static IMatcher1<InputEntity*>* get_FloatValue() {
		return ((IMatcher1<InputEntity*>* (*)(void *))(Il2CppBase() + 0x1465640))(0);
	}
	 static IMatcher1<InputEntity*>* get_HorizontalAxis() {
		return ((IMatcher1<InputEntity*>* (*)(void *))(Il2CppBase() + 0x14657DC))(0);
	}
	 static IMatcher1<InputEntity*>* get_HorizontalSkillShot() {
		return ((IMatcher1<InputEntity*>* (*)(void *))(Il2CppBase() + 0x1465978))(0);
	}
	 static IMatcher1<InputEntity*>* get_HoverMouse() {
		return ((IMatcher1<InputEntity*>* (*)(void *))(Il2CppBase() + 0x1465B14))(0);
	}
	 static IMatcher1<InputEntity*>* get_InteractButton() {
		return ((IMatcher1<InputEntity*>* (*)(void *))(Il2CppBase() + 0x1465CB0))(0);
	}
	 static IMatcher1<InputEntity*>* get_InventoryItem() {
		return ((IMatcher1<InputEntity*>* (*)(void *))(Il2CppBase() + 0x1465E4C))(0);
	}
	 static IMatcher1<InputEntity*>* get_LeftMouse() {
		return ((IMatcher1<InputEntity*>* (*)(void *))(Il2CppBase() + 0x1465FE8))(0);
	}
	 static IMatcher1<InputEntity*>* get_MountButton() {
		return ((IMatcher1<InputEntity*>* (*)(void *))(Il2CppBase() + 0x1466184))(0);
	}
	 static IMatcher1<InputEntity*>* get_MountSkill1Button() {
		return ((IMatcher1<InputEntity*>* (*)(void *))(Il2CppBase() + 0x1466320))(0);
	}
	 static IMatcher1<InputEntity*>* get_MountSkill2Button() {
		return ((IMatcher1<InputEntity*>* (*)(void *))(Il2CppBase() + 0x14664BC))(0);
	}
	 static IMatcher1<InputEntity*>* get_MountSkill3Button() {
		return ((IMatcher1<InputEntity*>* (*)(void *))(Il2CppBase() + 0x1466658))(0);
	}
	 static IMatcher1<InputEntity*>* get_MouseDown() {
		return ((IMatcher1<InputEntity*>* (*)(void *))(Il2CppBase() + 0x14667F4))(0);
	}
	 static IMatcher1<InputEntity*>* get_MousePosition() {
		return ((IMatcher1<InputEntity*>* (*)(void *))(Il2CppBase() + 0x1466990))(0);
	}
	 static IMatcher1<InputEntity*>* get_MouseUp() {
		return ((IMatcher1<InputEntity*>* (*)(void *))(Il2CppBase() + 0x1466B2C))(0);
	}
	 static IMatcher1<InputEntity*>* get_MoveToTarget() {
		return ((IMatcher1<InputEntity*>* (*)(void *))(Il2CppBase() + 0x1466CC8))(0);
	}
	 static IMatcher1<InputEntity*>* get_Parent() {
		return ((IMatcher1<InputEntity*>* (*)(void *))(Il2CppBase() + 0x1466E64))(0);
	}
	 static IMatcher1<InputEntity*>* get_Pocket1Button() {
		return ((IMatcher1<InputEntity*>* (*)(void *))(Il2CppBase() + 0x1467000))(0);
	}
	 static IMatcher1<InputEntity*>* get_Pocket2Button() {
		return ((IMatcher1<InputEntity*>* (*)(void *))(Il2CppBase() + 0x146719C))(0);
	}
	 static IMatcher1<InputEntity*>* get_Pocket3Button() {
		return ((IMatcher1<InputEntity*>* (*)(void *))(Il2CppBase() + 0x1467338))(0);
	}
	 static IMatcher1<InputEntity*>* get_Position() {
		return ((IMatcher1<InputEntity*>* (*)(void *))(Il2CppBase() + 0x14674D4))(0);
	}
	 static IMatcher1<InputEntity*>* get_RightMouse() {
		return ((IMatcher1<InputEntity*>* (*)(void *))(Il2CppBase() + 0x1467670))(0);
	}
	 static IMatcher1<InputEntity*>* get_Skill1Button() {
		return ((IMatcher1<InputEntity*>* (*)(void *))(Il2CppBase() + 0x146780C))(0);
	}
	 static IMatcher1<InputEntity*>* get_Skill2Button() {
		return ((IMatcher1<InputEntity*>* (*)(void *))(Il2CppBase() + 0x14679AC))(0);
	}
	 static IMatcher1<InputEntity*>* get_Tick() {
		return ((IMatcher1<InputEntity*>* (*)(void *))(Il2CppBase() + 0x1467B4C))(0);
	}
	 static IMatcher1<InputEntity*>* get_UseButton() {
		return ((IMatcher1<InputEntity*>* (*)(void *))(Il2CppBase() + 0x1467CEC))(0);
	}
	 static IMatcher1<InputEntity*>* get_Velocity() {
		return ((IMatcher1<InputEntity*>* (*)(void *))(Il2CppBase() + 0x1467E8C))(0);
	}
	 static IMatcher1<InputEntity*>* get_VerticalAxis() {
		return ((IMatcher1<InputEntity*>* (*)(void *))(Il2CppBase() + 0x146802C))(0);
	}
	 static IMatcher1<InputEntity*>* get_VerticalSkillShot() {
		return ((IMatcher1<InputEntity*>* (*)(void *))(Il2CppBase() + 0x14681CC))(0);
	}
	 static IAllOfMatcher1<InputEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1<InputEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x146836C))(0, indices);
	}
	 static IAllOfMatcher1<InputEntity*>* AllOf_1(Il2CppArray<IMatcher1<InputEntity*>*>* matchers) {
		return ((IAllOfMatcher1<InputEntity*>* (*)(void *, Il2CppArray<IMatcher1<InputEntity*>*>*))(Il2CppBase() + 0x14683E4))(0, matchers);
	}
	 static IAnyOfMatcher1<InputEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1<InputEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x146845C))(0, indices);
	}
	 static IAnyOfMatcher1<InputEntity*>* AnyOf_1(Il2CppArray<IMatcher1<InputEntity*>*>* matchers) {
		return ((IAnyOfMatcher1<InputEntity*>* (*)(void *, Il2CppArray<IMatcher1<InputEntity*>*>*))(Il2CppBase() + 0x14684D4))(0, matchers);
	}

};

