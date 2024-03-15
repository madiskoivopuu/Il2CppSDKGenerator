#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerInviteView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerInviteView"));
	}

	template <typename R = uintptr_t> R& _name() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _cancelInviteButton() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& Slot0() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& Slot1() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& Slot2() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& Slot3() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& LoadingSpinner() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& Time() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = ClanInvitationWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uint8_t> R& _cellIndex() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	 Action1<int64_t>*& _onCancelOngoingInvite() {
		return *(Action1<int64_t>**)((uintptr_t)this + 0x68);
	}

	template <typename R = uint8_t> R get_CellIndex() {
		return ((R (*)(PlayerInviteView*))(Il2CppBase() + 0x15689B4))(this);
	}
	template <typename R = ClanEntity*> R get_Clan() {
		return ((R (*)(PlayerInviteView*))(Il2CppBase() + 0x15689BC))(this);
	}
	template <typename R = PlayerEntity*> R get_Player() {
		return ((R (*)(PlayerInviteView*))(Il2CppBase() + 0x1568A98))(this);
	}
	template <typename R = InviteEntity*> R get_Invite() {
		return ((R (*)(PlayerInviteView*))(Il2CppBase() + 0x1568BA0))(this);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(PlayerInviteView*))(Il2CppBase() + 0x1568CAC))(this);
	}
	template <typename R = void> R Bind(ClanInvitationWindow* window, uint8_t cellIndex) {
		return ((R (*)(PlayerInviteView*, ClanInvitationWindow*, uint8_t))(Il2CppBase() + 0x1568D9C))(this, window, cellIndex);
	}
	template <typename R = void> R OnDraw(float deltaTime) {
		return ((R (*)(PlayerInviteView*, float))(Il2CppBase() + 0x1569044))(this, deltaTime);
	}
	template <typename R = void> R Bindb__20_0() {
		return ((R (*)(PlayerInviteView*))(Il2CppBase() + 0x1569408))(this);
	}

};

