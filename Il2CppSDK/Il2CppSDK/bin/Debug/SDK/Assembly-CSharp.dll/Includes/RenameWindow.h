#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class RenameWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RenameWindow"));
	}

	template <typename T = uintptr_t> T& ApplyBtn() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& ApplyIcon() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& ApplyPrice() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& CloseBtn() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& CaptionText() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& MessageText() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& InputField() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& PriceContainer() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& _price() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& _coins() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = bool> T& _send() {
		return *(T*)((uintptr_t)this + 0xC0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RenameWindow*))(Il2CppBase() + 0x13A0FBC))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(RenameWindow*))(Il2CppBase() + 0x13A10A8))(this);
	}
	template <typename T = void> T OnApplyClick() {
		return ((T (*)(RenameWindow*))(Il2CppBase() + 0x13A166C))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(RenameWindow*, float))(Il2CppBase() + 0x13A1FB8))(this, deltaTime);
	}
	template <typename T = void> T OnClanRenamed(ErrorCodes* errorCode) {
		return ((T (*)(RenameWindow*, ErrorCodes*))(Il2CppBase() + 0x13A2354))(this, errorCode);
	}
	template <typename T = void> T OnPlayerRenamed(ErrorCodes* errorCode) {
		return ((T (*)(RenameWindow*, ErrorCodes*))(Il2CppBase() + 0x13A259C))(this, errorCode);
	}
	template <typename T = void> T OnCloseClick() {
		return ((T (*)(RenameWindow*))(Il2CppBase() + 0x13A27E4))(this);
	}
	template <typename T = Il2CppString*> static T OnApplyClickg__getLocalizedNameError|15_0(NameError* ne) {
		return ((T (*)(void *, NameError*))(Il2CppBase() + 0x13A1B94))(0, ne);
	}

};

