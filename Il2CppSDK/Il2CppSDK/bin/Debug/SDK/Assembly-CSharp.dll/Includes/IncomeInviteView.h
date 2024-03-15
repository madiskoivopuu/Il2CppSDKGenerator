#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IncomeInviteView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IncomeInviteView"));
	}

	template <typename R = uintptr_t> R& _clanName() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _clanPlayersCount() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _inviteExpirationTime() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _clanLeaderName() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _clanLeaderLevel() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _inviteDescription() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& _button() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& _selected() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = int32_t> R& PlayersCount() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = int64_t> R& _inviteId() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	 Action1<IncomeInviteView*>*& _onIncomeInviteClicked() {
		return *(Action1<IncomeInviteView*>**)((uintptr_t)this + 0x68);
	}

	template <typename R = int32_t> R get_PlayersCount() {
		return ((R (*)(IncomeInviteView*))(Il2CppBase() + 0x1E3DFE4))(this);
	}
	template <typename R = void> R set_PlayersCount(int32_t value) {
		return ((R (*)(IncomeInviteView*, int32_t))(Il2CppBase() + 0x1E3DFEC))(this, value);
	}
	template <typename R = int64_t> R get_InviteId() {
		return ((R (*)(IncomeInviteView*))(Il2CppBase() + 0x1E3DFF4))(this);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(IncomeInviteView*))(Il2CppBase() + 0x1E3DFFC))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(IncomeInviteView*))(Il2CppBase() + 0x1E3E098))(this);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(IncomeInviteView*))(Il2CppBase() + 0x1E3E0C0))(this);
	}
	template <typename R = void> R Init(int64_t inviteId, Action1<IncomeInviteView*>* onIncomeInviteClicked) {
		return ((R (*)(IncomeInviteView*, int64_t, Action1<IncomeInviteView*>*))(Il2CppBase() + 0x1E3E188))(this, inviteId, onIncomeInviteClicked);
	}
	template <typename R = void> R OnViewClicked() {
		return ((R (*)(IncomeInviteView*))(Il2CppBase() + 0x1E3E8C8))(this);
	}
	template <typename R = void> R Update() {
		return ((R (*)(IncomeInviteView*))(Il2CppBase() + 0x1E3E928))(this);
	}
	template <typename R = void> R Select() {
		return ((R (*)(IncomeInviteView*))(Il2CppBase() + 0x1E3ED3C))(this);
	}
	template <typename R = void> R Deselect() {
		return ((R (*)(IncomeInviteView*))(Il2CppBase() + 0x1E3ED54))(this);
	}

};

