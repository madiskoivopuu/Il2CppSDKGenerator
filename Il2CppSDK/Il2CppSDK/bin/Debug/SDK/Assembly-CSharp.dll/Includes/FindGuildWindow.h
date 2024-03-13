#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class FindGuildWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FindGuildWindow"));
	}

	template <typename T = uintptr_t> T& CanvasGroup() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& MessageText() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& ApplyBtn() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& ApplyBtnText() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& ClearBtn() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& ClearBtnEventTrigger() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& CloseBtn() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = GuildInfoView*> T& GuildInfo() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = TextMonoBehaviour*> T& NotFoundGuild() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& TagInputField() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& NameInputField() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int64_t> T& _selectedGuild() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = bool> T& _clearButtonPressed() {
		return *(T*)((uintptr_t)this + 0xD8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(FindGuildWindow*))(Il2CppBase() + 0x169402C))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(FindGuildWindow*))(Il2CppBase() + 0x1694520))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(FindGuildWindow*))(Il2CppBase() + 0x1694734))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(FindGuildWindow*, float))(Il2CppBase() + 0x1694790))(this, deltaTime);
	}
	template <typename T = void> T OnApplyButtonClick() {
		return ((T (*)(FindGuildWindow*))(Il2CppBase() + 0x16948B4))(this);
	}
	template <typename T = void> T OnTagInputFieldEndEdit(Il2CppString* text) {
		return ((T (*)(FindGuildWindow*, Il2CppString*))(Il2CppBase() + 0x1695098))(this, text);
	}
	template <typename T = void> T OnNameInputFieldEndEdit(Il2CppString* text) {
		return ((T (*)(FindGuildWindow*, Il2CppString*))(Il2CppBase() + 0x1695908))(this, text);
	}
	template <typename T = uintptr_t> T SearchCoroutine() {
		return ((T (*)(FindGuildWindow*))(Il2CppBase() + 0x1695890))(this);
	}
	template <typename T = void> T OnClearButtonClick() {
		return ((T (*)(FindGuildWindow*))(Il2CppBase() + 0x1695A68))(this);
	}
	template <typename T = void> T OnReceiveGuildForInvite(ErrorCodes* errorCode, int64_t guildId) {
		return ((T (*)(FindGuildWindow*, ErrorCodes*, int64_t))(Il2CppBase() + 0x16951F8))(this, errorCode, guildId);
	}
	template <typename T = void> T HideGuildPanels() {
		return ((T (*)(FindGuildWindow*))(Il2CppBase() + 0x16945FC))(this);
	}
	template <typename T = void> T Awakeb__14_0(Il2CppString* text) {
		return ((T (*)(FindGuildWindow*, Il2CppString*))(Il2CppBase() + 0x1695CB0))(this, text);
	}
	template <typename T = void> T Awakeb__14_1(Il2CppString* text) {
		return ((T (*)(FindGuildWindow*, Il2CppString*))(Il2CppBase() + 0x1695D3C))(this, text);
	}
	template <typename T = void> T Awakeb__14_2(uintptr_t data) {
		return ((T (*)(FindGuildWindow*, uintptr_t))(Il2CppBase() + 0x1695DC8))(this, data);
	}
	template <typename T = void> T Awakeb__14_3(uintptr_t data) {
		return ((T (*)(FindGuildWindow*, uintptr_t))(Il2CppBase() + 0x1695DD0))(this, data);
	}

};

