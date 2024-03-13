#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class FindPlayerWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FindPlayerWindow"));
	}

	template <typename T = uintptr_t> T& CanvasGroup() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& ApplyBtn() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& ClearBtn() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& ClearBtnEventTrigger() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& CloseBtn() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& PlayerNamesContainer() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = PlayerNameView*> T& PlayerNamePrefab() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = TextMonoBehaviour*> T& NotFoundPlayer() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& InputField() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = PlayerNameView*> T& _selectedPlayer() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& _clearButtonPressed() {
		return *(T*)((uintptr_t)this + 0xC8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(FindPlayerWindow*))(Il2CppBase() + 0x1697384))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(FindPlayerWindow*))(Il2CppBase() + 0x16976C8))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(FindPlayerWindow*, float))(Il2CppBase() + 0x1697790))(this, deltaTime);
	}
	template <typename T = void> T OnApplyButtonClick() {
		return ((T (*)(FindPlayerWindow*))(Il2CppBase() + 0x1697994))(this);
	}
	template <typename T = void> T OnInputFieldEndEdit(Il2CppString* text) {
		return ((T (*)(FindPlayerWindow*, Il2CppString*))(Il2CppBase() + 0x1697CF0))(this, text);
	}
	template <typename T = uintptr_t> T SearchCoroutine() {
		return ((T (*)(FindPlayerWindow*))(Il2CppBase() + 0x1697D8C))(this);
	}
	template <typename T = void> T OnClearButtonClick() {
		return ((T (*)(FindPlayerWindow*))(Il2CppBase() + 0x1697E04))(this);
	}
	template <typename T = void> T OnError(uintptr_t btn, Il2CppString* error) {
		return ((T (*)(FindPlayerWindow*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1697CB0))(this, btn, error);
	}
	template <typename T = void> T OnReceivePlayerForInvite(ErrorCodes* code, int64_t playerId) {
		return ((T (*)(FindPlayerWindow*, ErrorCodes*, int64_t))(Il2CppBase() + 0x1697F78))(this, code, playerId);
	}
	template <typename T = void> T Awakeb__12_0(uintptr_t data) {
		return ((T (*)(FindPlayerWindow*, uintptr_t))(Il2CppBase() + 0x16985B8))(this, data);
	}
	template <typename T = void> T Awakeb__12_1(uintptr_t data) {
		return ((T (*)(FindPlayerWindow*, uintptr_t))(Il2CppBase() + 0x16985C0))(this, data);
	}

};

