#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class RenameWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RenameWindow"));
	}

	template <typename R = uintptr_t> R& ApplyBtn() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& ApplyIcon() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& ApplyPrice() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& CloseBtn() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& CaptionText() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& MessageText() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& InputField() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& PriceContainer() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = int32_t> R& _price() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = int32_t> R& _coins() {
		return *(R*)((uintptr_t)this + 0xBC);
	}
	template <typename R = bool> R& _send() {
		return *(R*)((uintptr_t)this + 0xC0);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(RenameWindow*))(Il2CppBase() + 0x13A0FBC))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(RenameWindow*))(Il2CppBase() + 0x13A10A8))(this);
	}
	template <typename R = void> R OnApplyClick() {
		return ((R (*)(RenameWindow*))(Il2CppBase() + 0x13A166C))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(RenameWindow*, float))(Il2CppBase() + 0x13A1FB8))(this, deltaTime);
	}
	template <typename R = void> R OnClanRenamed(ProtoTools::ErrorCodes errorCode) {
		return ((R (*)(RenameWindow*, ProtoTools::ErrorCodes))(Il2CppBase() + 0x13A2354))(this, errorCode);
	}
	template <typename R = void> R OnPlayerRenamed(ProtoTools::ErrorCodes errorCode) {
		return ((R (*)(RenameWindow*, ProtoTools::ErrorCodes))(Il2CppBase() + 0x13A259C))(this, errorCode);
	}
	template <typename R = void> R OnCloseClick() {
		return ((R (*)(RenameWindow*))(Il2CppBase() + 0x13A27E4))(this);
	}
	template <typename R = Il2CppString*> static R OnApplyClickg__getLocalizedNameError|15_0(NameError ne) {
		return ((R (*)(void *, NameError))(Il2CppBase() + 0x13A1B94))(0, ne);
	}

};

