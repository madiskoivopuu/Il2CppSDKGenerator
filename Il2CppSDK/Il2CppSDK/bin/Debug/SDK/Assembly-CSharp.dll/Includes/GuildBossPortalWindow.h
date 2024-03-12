#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class GuildBossPortalWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildBossPortalWindow"));
	}

	template <typename T = float> static T& LastPortalDisableClickTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& LockClosePortalForSecond() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _closeButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _enterButton() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _resetButton() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _portalButton() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _nameText() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _deskText() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _previewImg() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _locationImg() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _difficalties() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& _activeDiffColor() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& _disabledDiffColor() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppString*> T& _lastActiveBoss() {
		return *(T*)((uintptr_t)this + 0xE0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GuildBossPortalWindow*))(Il2CppBase() + 0x12E72F8))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(GuildBossPortalWindow*))(Il2CppBase() + 0x12E7484))(this);
	}
	template <typename T = void> T ShowBoss(uintptr_t bossEntity) {
		return ((T (*)(GuildBossPortalWindow*, uintptr_t))(Il2CppBase() + 0x12E7920))(this, bossEntity);
	}
	template <typename T = void> T EnterButtonClick() {
		return ((T (*)(GuildBossPortalWindow*))(Il2CppBase() + 0x12E7BA0))(this);
	}
	template <typename T = void> T ResetButtonClick() {
		return ((T (*)(GuildBossPortalWindow*))(Il2CppBase() + 0x12E7D60))(this);
	}
	template <typename T = void> T PortalButtonClick() {
		return ((T (*)(GuildBossPortalWindow*))(Il2CppBase() + 0x12E82E8))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(GuildBossPortalWindow*, float))(Il2CppBase() + 0x12E8530))(this, deltaTime);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(GuildBossPortalWindow*))(Il2CppBase() + 0x12E76B8))(this);
	}

};

}
