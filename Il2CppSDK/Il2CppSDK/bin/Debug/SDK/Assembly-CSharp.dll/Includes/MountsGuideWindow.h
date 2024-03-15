#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class MountsGuideWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MountsGuideWindow"));
	}

	template <typename R = MountsGuideTabsController*> R& TabsController() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& MountIcon() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& MountDescription() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = TextMonoBehaviour*> R& Tenacity() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = TextMonoBehaviour*> R& SlotsCount() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = TextMonoBehaviour*> R& MountSpeed() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& LeftButton() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& RightButton() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = MountSkillInfo*> R& SkillPrefab() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& SkillsScroll() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& SkillsContainer() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& FeaturesContainer() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = uintptr_t> R& FeaturesText() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = int32_t> static R& ActiveTabIndex() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 Il2CppList<uintptr_t>*& _skillsGOs() {
		return *(Il2CppList<uintptr_t>**)((uintptr_t)this + 0xE8);
	}
	template <typename R = Il2CppArray<Icon>*> R& _currentMountIcons() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	 Il2CppDictionary<Il2CppString*, HashSet1<Icon>*>*& _mountsIcons() {
		return *(Il2CppDictionary<Il2CppString*, HashSet1<Icon>*>**)((uintptr_t)this + 0xF8);
	}
	template <typename R = int32_t> R& _currentMountSpriteIndex() {
		return *(R*)((uintptr_t)this + 0x100);
	}

	template <typename R = int32_t> static R get_ActiveTabIndex() {
		return ((R (*)(void *))(Il2CppBase() + 0x154C27C))(0);
	}
	template <typename R = void> static R set_ActiveTabIndex(int32_t value) {
		return ((R (*)(void *, int32_t))(Il2CppBase() + 0x154C2E0))(0, value);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(MountsGuideWindow*))(Il2CppBase() + 0x154C348))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(MountsGuideWindow*))(Il2CppBase() + 0x154C908))(this);
	}
	template <typename R = void> R InitMountsSprites() {
		return ((R (*)(MountsGuideWindow*))(Il2CppBase() + 0x154C4BC))(this);
	}
	template <typename R = void> R OnLeftArrowButtonClick() {
		return ((R (*)(MountsGuideWindow*))(Il2CppBase() + 0x154C964))(this);
	}
	template <typename R = void> R OnRightArrowButtonClick() {
		return ((R (*)(MountsGuideWindow*))(Il2CppBase() + 0x154C9E8))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(MountsGuideWindow*, float))(Il2CppBase() + 0x154CA68))(this, deltaTime);
	}
	template <typename R = void> R ShowMountData(ItemEntity* mountData) {
		return ((R (*)(MountsGuideWindow*, ItemEntity*))(Il2CppBase() + 0x154B580))(this, mountData);
	}

};

