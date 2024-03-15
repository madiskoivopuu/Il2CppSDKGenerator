#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClassInfoBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClassInfoBase"));
	}

	template <typename R = uintptr_t> R& Root() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& Name() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& Icon() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& ClassDescription() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& ClassParams() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = RewardResourceView*> R& Skill1() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = RewardResourceView*> R& Skill2() {
		return *(R*)((uintptr_t)this + 0x48);
	}

	template <typename R = void> R Show(ItemEntity* classEntity, TooltipView* tooltipView) {
		return ((R (*)(ClassInfoBase*, ItemEntity*, TooltipView*))(Il2CppBase() + 0x1599C64))(this, classEntity, tooltipView);
	}
	template <typename R = void> R Hide() {
		return ((R (*)(ClassInfoBase*))(Il2CppBase() + 0x159A334))(this);
	}

};

