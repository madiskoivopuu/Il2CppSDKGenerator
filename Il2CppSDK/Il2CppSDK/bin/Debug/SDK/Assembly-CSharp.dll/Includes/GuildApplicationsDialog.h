#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class GuildApplicationsDialog : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildApplicationsDialog"));
	}

	template <typename R = uintptr_t> R& EmptyPanel() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& Container() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = GuildApplicationPlayerItem*> R& ApplicationPlayerItemPrefab() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& DescriptionText() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& CancelButton() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = StandartButton*> R& RejectButton() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = StandartButton*> R& AcceptButton() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = int32_t> R& _lastInvitesCount() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	 Il2CppList<GuildApplicationPlayerItem*>*& _selectedItems() {
		return *(Il2CppList<GuildApplicationPlayerItem*>**)((uintptr_t)this + 0xB8);
	}

	template <typename R = void> R OnEnable() {
		return ((R (*)(GuildApplicationsDialog*))(Il2CppBase() + 0x12E4384))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(GuildApplicationsDialog*))(Il2CppBase() + 0x12E44C8))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(GuildApplicationsDialog*))(Il2CppBase() + 0x12E4534))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(GuildApplicationsDialog*))(Il2CppBase() + 0x12E4DA8))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(GuildApplicationsDialog*, float))(Il2CppBase() + 0x12E4E04))(this, deltaTime);
	}
	template <typename R = void> R UpdateUI() {
		return ((R (*)(GuildApplicationsDialog*))(Il2CppBase() + 0x12E4A20))(this);
	}
	template <typename R = void> R OnPlayerToggleChanged(bool isSelected, GuildApplicationPlayerItem* playerItem) {
		return ((R (*)(GuildApplicationsDialog*, bool, GuildApplicationPlayerItem*))(Il2CppBase() + 0x12E4E98))(this, isSelected, playerItem);
	}
	template <typename R = void> R OnRejectButtonPressed() {
		return ((R (*)(GuildApplicationsDialog*))(Il2CppBase() + 0x12E4FFC))(this);
	}
	template <typename R = void> R OnAcceptButtonPressed() {
		return ((R (*)(GuildApplicationsDialog*))(Il2CppBase() + 0x12E5258))(this);
	}

};

