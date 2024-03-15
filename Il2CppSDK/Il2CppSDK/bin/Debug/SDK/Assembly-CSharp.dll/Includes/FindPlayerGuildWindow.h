#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class FindPlayerGuildWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FindPlayerGuildWindow"));
	}

	template <typename R = uintptr_t> R& CanvasGroup() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = StandartButton*> R& ApplyBtn() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& ApplyBtnText() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = StandartButton*> R& ClearBtn() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& ClearBtnEventTrigger() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& CloseBtn() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = GuildFindPlayerItem*> R& GuildPlayerInfo() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = TextMonoBehaviour*> R& NotFoundPlayer() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& InputField() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = int64_t> R& _selectedPlayer() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = bool> R& _clearButtonPressed() {
		return *(R*)((uintptr_t)this + 0xC8);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(FindPlayerGuildWindow*))(Il2CppBase() + 0x1695F60))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(FindPlayerGuildWindow*))(Il2CppBase() + 0x16962BC))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(FindPlayerGuildWindow*))(Il2CppBase() + 0x16963D8))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(FindPlayerGuildWindow*, float))(Il2CppBase() + 0x1696434))(this, deltaTime);
	}
	template <typename R = void> R OnApplyButtonClick() {
		return ((R (*)(FindPlayerGuildWindow*))(Il2CppBase() + 0x1696540))(this);
	}
	template <typename R = void> R OnInputFieldEndEdit(Il2CppString* text) {
		return ((R (*)(FindPlayerGuildWindow*, Il2CppString*))(Il2CppBase() + 0x1696B38))(this, text);
	}
	template <typename R = uintptr_t> R SearchCoroutine() {
		return ((R (*)(FindPlayerGuildWindow*))(Il2CppBase() + 0x1697010))(this);
	}
	template <typename R = void> R OnClearButtonClick() {
		return ((R (*)(FindPlayerGuildWindow*))(Il2CppBase() + 0x1697088))(this);
	}
	template <typename R = void> R OnReceivePlayerForInvite(ProtoTools::ErrorCodes code, int64_t playerId) {
		return ((R (*)(FindPlayerGuildWindow*, ProtoTools::ErrorCodes, int64_t))(Il2CppBase() + 0x1696C64))(this, code, playerId);
	}
	template <typename R = void> R HidePlayerPanels() {
		return ((R (*)(FindPlayerGuildWindow*))(Il2CppBase() + 0x169637C))(this);
	}
	template <typename R = void> R Awakeb__12_0(uintptr_t data) {
		return ((R (*)(FindPlayerGuildWindow*, uintptr_t))(Il2CppBase() + 0x16971EC))(this, data);
	}
	template <typename R = void> R Awakeb__12_1(uintptr_t data) {
		return ((R (*)(FindPlayerGuildWindow*, uintptr_t))(Il2CppBase() + 0x16971F4))(this, data);
	}

};

