#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClassInfoBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClassInfoBase"));
	}

	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& ClassDescription() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& ClassParams() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = RewardResourceView*> T& Skill1() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = RewardResourceView*> T& Skill2() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T Show(ItemEntity* classEntity, TooltipView* tooltipView) {
		return ((T (*)(ClassInfoBase*, ItemEntity*, TooltipView*))(Il2CppBase() + 0x1599C64))(this, classEntity, tooltipView);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(ClassInfoBase*))(Il2CppBase() + 0x159A334))(this);
	}

};

