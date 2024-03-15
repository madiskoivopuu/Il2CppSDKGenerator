#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class FindPlayerWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FindPlayerWindow"));
	}

	template <typename R = uintptr_t> R& CanvasGroup() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& ApplyBtn() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& ClearBtn() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& ClearBtnEventTrigger() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& CloseBtn() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& PlayerNamesContainer() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = PlayerNameView*> R& PlayerNamePrefab() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = TextMonoBehaviour*> R& NotFoundPlayer() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& InputField() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = PlayerNameView*> R& _selectedPlayer() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = bool> R& _clearButtonPressed() {
		return *(R*)((uintptr_t)this + 0xC8);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(FindPlayerWindow*))(Il2CppBase() + 0x1697384))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(FindPlayerWindow*))(Il2CppBase() + 0x16976C8))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(FindPlayerWindow*, float))(Il2CppBase() + 0x1697790))(this, deltaTime);
	}
	template <typename R = void> R OnApplyButtonClick() {
		return ((R (*)(FindPlayerWindow*))(Il2CppBase() + 0x1697994))(this);
	}
	template <typename R = void> R OnInputFieldEndEdit(Il2CppString* text) {
		return ((R (*)(FindPlayerWindow*, Il2CppString*))(Il2CppBase() + 0x1697CF0))(this, text);
	}
	template <typename R = uintptr_t> R SearchCoroutine() {
		return ((R (*)(FindPlayerWindow*))(Il2CppBase() + 0x1697D8C))(this);
	}
	template <typename R = void> R OnClearButtonClick() {
		return ((R (*)(FindPlayerWindow*))(Il2CppBase() + 0x1697E04))(this);
	}
	template <typename R = void> R OnError(uintptr_t btn, Il2CppString* error) {
		return ((R (*)(FindPlayerWindow*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1697CB0))(this, btn, error);
	}
	template <typename R = void> R OnReceivePlayerForInvite(ProtoTools::ErrorCodes* code, int64_t playerId) {
		return ((R (*)(FindPlayerWindow*, ProtoTools::ErrorCodes*, int64_t))(Il2CppBase() + 0x1697F78))(this, code, playerId);
	}
	template <typename R = void> R Awakeb__12_0(uintptr_t data) {
		return ((R (*)(FindPlayerWindow*, uintptr_t))(Il2CppBase() + 0x16985B8))(this, data);
	}
	template <typename R = void> R Awakeb__12_1(uintptr_t data) {
		return ((R (*)(FindPlayerWindow*, uintptr_t))(Il2CppBase() + 0x16985C0))(this, data);
	}

};

