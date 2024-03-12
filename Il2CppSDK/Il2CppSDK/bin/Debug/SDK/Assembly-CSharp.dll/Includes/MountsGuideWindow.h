#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class MountsGuideWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MountsGuideWindow"));
	}

	template <typename T = uintptr_t> T& TabsController() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& MountIcon() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& MountDescription() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& Tenacity() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& SlotsCount() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& MountSpeed() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& LeftButton() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& RightButton() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& SkillPrefab() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& SkillsScroll() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& SkillsContainer() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& FeaturesContainer() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& FeaturesText() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = int32_t> static T& ActiveTabIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _skillsGOs() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _currentMountIcons() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, void*>*> T& _mountsIcons() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = int32_t> T& _currentMountSpriteIndex() {
		return *(T*)((uintptr_t)this + 0x100);
	}

	template <typename T = int32_t> static T get_ActiveTabIndex() {
		return ((T (*)(void *))(Il2CppBase() + 0x154C27C))(0);
	}
	template <typename T = void> static T set_ActiveTabIndex(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x154C2E0))(0, value);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(MountsGuideWindow*))(Il2CppBase() + 0x154C348))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(MountsGuideWindow*))(Il2CppBase() + 0x154C908))(this);
	}
	template <typename T = void> T InitMountsSprites() {
		return ((T (*)(MountsGuideWindow*))(Il2CppBase() + 0x154C4BC))(this);
	}
	template <typename T = void> T OnLeftArrowButtonClick() {
		return ((T (*)(MountsGuideWindow*))(Il2CppBase() + 0x154C964))(this);
	}
	template <typename T = void> T OnRightArrowButtonClick() {
		return ((T (*)(MountsGuideWindow*))(Il2CppBase() + 0x154C9E8))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(MountsGuideWindow*, float))(Il2CppBase() + 0x154CA68))(this, deltaTime);
	}
	template <typename T = void> T ShowMountData(uintptr_t mountData) {
		return ((T (*)(MountsGuideWindow*, uintptr_t))(Il2CppBase() + 0x154B580))(this, mountData);
	}

};

}
