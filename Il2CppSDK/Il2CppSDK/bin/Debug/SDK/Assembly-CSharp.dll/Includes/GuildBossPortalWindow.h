#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class GuildBossPortalWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildBossPortalWindow"));
	}

	template <typename R = float> static R& LastPortalDisableClickTime() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& LockClosePortalForSecond() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uintptr_t> R& _closeButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _enterButton() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& _resetButton() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& _portalButton() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& _nameText() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& _deskText() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& _previewImg() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& _locationImg() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _difficalties() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& _activeDiffColor() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& _disabledDiffColor() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = Il2CppString*> R& _lastActiveBoss() {
		return *(R*)((uintptr_t)this + 0xE0);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(GuildBossPortalWindow*))(Il2CppBase() + 0x12E72F8))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(GuildBossPortalWindow*))(Il2CppBase() + 0x12E7484))(this);
	}
	template <typename R = void> R ShowBoss(ItemEntity* bossEntity) {
		return ((R (*)(GuildBossPortalWindow*, ItemEntity*))(Il2CppBase() + 0x12E7920))(this, bossEntity);
	}
	template <typename R = void> R EnterButtonClick() {
		return ((R (*)(GuildBossPortalWindow*))(Il2CppBase() + 0x12E7BA0))(this);
	}
	template <typename R = void> R ResetButtonClick() {
		return ((R (*)(GuildBossPortalWindow*))(Il2CppBase() + 0x12E7D60))(this);
	}
	template <typename R = void> R PortalButtonClick() {
		return ((R (*)(GuildBossPortalWindow*))(Il2CppBase() + 0x12E82E8))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(GuildBossPortalWindow*, float))(Il2CppBase() + 0x12E8530))(this, deltaTime);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(GuildBossPortalWindow*))(Il2CppBase() + 0x12E76B8))(this);
	}

};

