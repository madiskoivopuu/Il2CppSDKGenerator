#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class GuildApplicationsDialog : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildApplicationsDialog"));
	}

	template <typename T = uintptr_t> T& EmptyPanel() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = GuildApplicationPlayerItem*> T& ApplicationPlayerItemPrefab() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& DescriptionText() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& CancelButton() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = StandartButton*> T& RejectButton() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = StandartButton*> T& AcceptButton() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& _lastInvitesCount() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppList<GuildApplicationPlayerItem*>*> T& _selectedItems() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(GuildApplicationsDialog*))(Il2CppBase() + 0x12E4384))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(GuildApplicationsDialog*))(Il2CppBase() + 0x12E44C8))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(GuildApplicationsDialog*))(Il2CppBase() + 0x12E4534))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(GuildApplicationsDialog*))(Il2CppBase() + 0x12E4DA8))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(GuildApplicationsDialog*, float))(Il2CppBase() + 0x12E4E04))(this, deltaTime);
	}
	template <typename T = void> T UpdateUI() {
		return ((T (*)(GuildApplicationsDialog*))(Il2CppBase() + 0x12E4A20))(this);
	}
	template <typename T = void> T OnPlayerToggleChanged(bool isSelected, GuildApplicationPlayerItem* playerItem) {
		return ((T (*)(GuildApplicationsDialog*, bool, GuildApplicationPlayerItem*))(Il2CppBase() + 0x12E4E98))(this, isSelected, playerItem);
	}
	template <typename T = void> T OnRejectButtonPressed() {
		return ((T (*)(GuildApplicationsDialog*))(Il2CppBase() + 0x12E4FFC))(this);
	}
	template <typename T = void> T OnAcceptButtonPressed() {
		return ((T (*)(GuildApplicationsDialog*))(Il2CppBase() + 0x12E5258))(this);
	}

};

