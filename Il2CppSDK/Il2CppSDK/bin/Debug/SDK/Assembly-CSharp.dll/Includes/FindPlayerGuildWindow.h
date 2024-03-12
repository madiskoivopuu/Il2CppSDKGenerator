#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class FindPlayerGuildWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FindPlayerGuildWindow"));
	}

	template <typename T = uintptr_t> T& CanvasGroup() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& ApplyBtn() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& ApplyBtnText() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& ClearBtn() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& ClearBtnEventTrigger() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& CloseBtn() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& GuildPlayerInfo() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& NotFoundPlayer() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& InputField() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int64_t> T& _selectedPlayer() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& _clearButtonPressed() {
		return *(T*)((uintptr_t)this + 0xC8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(FindPlayerGuildWindow*))(Il2CppBase() + 0x1695F60))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(FindPlayerGuildWindow*))(Il2CppBase() + 0x16962BC))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(FindPlayerGuildWindow*))(Il2CppBase() + 0x16963D8))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(FindPlayerGuildWindow*, float))(Il2CppBase() + 0x1696434))(this, deltaTime);
	}
	template <typename T = void> T OnApplyButtonClick() {
		return ((T (*)(FindPlayerGuildWindow*))(Il2CppBase() + 0x1696540))(this);
	}
	template <typename T = void> T OnInputFieldEndEdit(Il2CppString* text) {
		return ((T (*)(FindPlayerGuildWindow*, Il2CppString*))(Il2CppBase() + 0x1696B38))(this, text);
	}
	template <typename T = uintptr_t> T SearchCoroutine() {
		return ((T (*)(FindPlayerGuildWindow*))(Il2CppBase() + 0x1697010))(this);
	}
	template <typename T = void> T OnClearButtonClick() {
		return ((T (*)(FindPlayerGuildWindow*))(Il2CppBase() + 0x1697088))(this);
	}
	template <typename T = void> T OnReceivePlayerForInvite(uintptr_t code, int64_t playerId) {
		return ((T (*)(FindPlayerGuildWindow*, uintptr_t, int64_t))(Il2CppBase() + 0x1696C64))(this, code, playerId);
	}
	template <typename T = void> T HidePlayerPanels() {
		return ((T (*)(FindPlayerGuildWindow*))(Il2CppBase() + 0x169637C))(this);
	}
	template <typename T = void> T Awakeb__12_0(uintptr_t data) {
		return ((T (*)(FindPlayerGuildWindow*, uintptr_t))(Il2CppBase() + 0x16971EC))(this, data);
	}
	template <typename T = void> T Awakeb__12_1(uintptr_t data) {
		return ((T (*)(FindPlayerGuildWindow*, uintptr_t))(Il2CppBase() + 0x16971F4))(this, data);
	}

};

}
