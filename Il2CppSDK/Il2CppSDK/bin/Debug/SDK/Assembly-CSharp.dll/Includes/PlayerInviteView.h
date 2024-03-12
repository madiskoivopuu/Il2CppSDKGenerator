#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerInviteView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerInviteView"));
	}

	template <typename T = uintptr_t> T& _name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _cancelInviteButton() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Slot0() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& Slot1() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& Slot2() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& Slot3() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& LoadingSpinner() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& Time() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _window() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = unsigned char> T& _cellIndex() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = void*> T& _onCancelOngoingInvite() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = unsigned char> T get_CellIndex() {
		return ((T (*)(PlayerInviteView*))(Il2CppBase() + 0x15689B4))(this);
	}
	template <typename T = uintptr_t> T get_Clan() {
		return ((T (*)(PlayerInviteView*))(Il2CppBase() + 0x15689BC))(this);
	}
	template <typename T = uintptr_t> T get_Player() {
		return ((T (*)(PlayerInviteView*))(Il2CppBase() + 0x1568A98))(this);
	}
	template <typename T = uintptr_t> T get_Invite() {
		return ((T (*)(PlayerInviteView*))(Il2CppBase() + 0x1568BA0))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(PlayerInviteView*))(Il2CppBase() + 0x1568CAC))(this);
	}
	template <typename T = void> T Bind(uintptr_t window, unsigned char cellIndex) {
		return ((T (*)(PlayerInviteView*, uintptr_t, unsigned char))(Il2CppBase() + 0x1568D9C))(this, window, cellIndex);
	}
	template <typename T = void> T OnDraw(float deltaTime) {
		return ((T (*)(PlayerInviteView*, float))(Il2CppBase() + 0x1569044))(this, deltaTime);
	}
	template <typename T = void> T Bindb__20_0() {
		return ((T (*)(PlayerInviteView*))(Il2CppBase() + 0x1569408))(this);
	}

};

}
