#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IncomeInviteView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IncomeInviteView"));
	}

	template <typename T = uintptr_t> T& _clanName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _clanPlayersCount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _inviteExpirationTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _clanLeaderName() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _clanLeaderLevel() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _inviteDescription() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _button() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _selected() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& PlayersCount() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int64_t> T& _inviteId() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Action1IncomeInviteView*>*> T& _onIncomeInviteClicked() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = int32_t> T get_PlayersCount() {
		return ((T (*)(IncomeInviteView*))(Il2CppBase() + 0x1E3DFE4))(this);
	}
	template <typename T = void> T set_PlayersCount(int32_t value) {
		return ((T (*)(IncomeInviteView*, int32_t))(Il2CppBase() + 0x1E3DFEC))(this, value);
	}
	template <typename T = int64_t> T get_InviteId() {
		return ((T (*)(IncomeInviteView*))(Il2CppBase() + 0x1E3DFF4))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(IncomeInviteView*))(Il2CppBase() + 0x1E3DFFC))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(IncomeInviteView*))(Il2CppBase() + 0x1E3E098))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(IncomeInviteView*))(Il2CppBase() + 0x1E3E0C0))(this);
	}
	template <typename T = void> T Init(int64_t inviteId, Action1IncomeInviteView*>* onIncomeInviteClicked) {
		return ((T (*)(IncomeInviteView*, int64_t, Action1IncomeInviteView*>*))(Il2CppBase() + 0x1E3E188))(this, inviteId, onIncomeInviteClicked);
	}
	template <typename T = void> T OnViewClicked() {
		return ((T (*)(IncomeInviteView*))(Il2CppBase() + 0x1E3E8C8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(IncomeInviteView*))(Il2CppBase() + 0x1E3E928))(this);
	}
	template <typename T = void> T Select() {
		return ((T (*)(IncomeInviteView*))(Il2CppBase() + 0x1E3ED3C))(this);
	}
	template <typename T = void> T Deselect() {
		return ((T (*)(IncomeInviteView*))(Il2CppBase() + 0x1E3ED54))(this);
	}

};

