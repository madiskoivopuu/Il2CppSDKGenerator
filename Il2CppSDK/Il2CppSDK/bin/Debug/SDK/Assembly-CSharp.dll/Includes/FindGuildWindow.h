#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class FindGuildWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FindGuildWindow"));
	}

	template <typename R = uintptr_t> R& CanvasGroup() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& MessageText() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& ApplyBtn() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& ApplyBtnText() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& ClearBtn() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& ClearBtnEventTrigger() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& CloseBtn() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = GuildInfoView*> R& GuildInfo() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = TextMonoBehaviour*> R& NotFoundGuild() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& TagInputField() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& NameInputField() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = int64_t> R& _selectedGuild() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = bool> R& _clearButtonPressed() {
		return *(R*)((uintptr_t)this + 0xD8);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(FindGuildWindow*))(Il2CppBase() + 0x169402C))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(FindGuildWindow*))(Il2CppBase() + 0x1694520))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(FindGuildWindow*))(Il2CppBase() + 0x1694734))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(FindGuildWindow*, float))(Il2CppBase() + 0x1694790))(this, deltaTime);
	}
	template <typename R = void> R OnApplyButtonClick() {
		return ((R (*)(FindGuildWindow*))(Il2CppBase() + 0x16948B4))(this);
	}
	template <typename R = void> R OnTagInputFieldEndEdit(Il2CppString* text) {
		return ((R (*)(FindGuildWindow*, Il2CppString*))(Il2CppBase() + 0x1695098))(this, text);
	}
	template <typename R = void> R OnNameInputFieldEndEdit(Il2CppString* text) {
		return ((R (*)(FindGuildWindow*, Il2CppString*))(Il2CppBase() + 0x1695908))(this, text);
	}
	template <typename R = uintptr_t> R SearchCoroutine() {
		return ((R (*)(FindGuildWindow*))(Il2CppBase() + 0x1695890))(this);
	}
	template <typename R = void> R OnClearButtonClick() {
		return ((R (*)(FindGuildWindow*))(Il2CppBase() + 0x1695A68))(this);
	}
	template <typename R = void> R OnReceiveGuildForInvite(ProtoTools::ErrorCodes errorCode, int64_t guildId) {
		return ((R (*)(FindGuildWindow*, ProtoTools::ErrorCodes, int64_t))(Il2CppBase() + 0x16951F8))(this, errorCode, guildId);
	}
	template <typename R = void> R HideGuildPanels() {
		return ((R (*)(FindGuildWindow*))(Il2CppBase() + 0x16945FC))(this);
	}
	template <typename R = void> R Awakeb__14_0(Il2CppString* text) {
		return ((R (*)(FindGuildWindow*, Il2CppString*))(Il2CppBase() + 0x1695CB0))(this, text);
	}
	template <typename R = void> R Awakeb__14_1(Il2CppString* text) {
		return ((R (*)(FindGuildWindow*, Il2CppString*))(Il2CppBase() + 0x1695D3C))(this, text);
	}
	template <typename R = void> R Awakeb__14_2(uintptr_t data) {
		return ((R (*)(FindGuildWindow*, uintptr_t))(Il2CppBase() + 0x1695DC8))(this, data);
	}
	template <typename R = void> R Awakeb__14_3(uintptr_t data) {
		return ((R (*)(FindGuildWindow*, uintptr_t))(Il2CppBase() + 0x1695DD0))(this, data);
	}

};

