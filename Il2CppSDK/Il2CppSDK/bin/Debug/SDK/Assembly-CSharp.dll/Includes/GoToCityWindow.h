#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class GoToCityWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GoToCityWindow"));
	}

	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& AcceptButton() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& AcceptButtonText() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = Il2CppArray<GoToButtonHelper*>*> R& GoToButtonHelpers() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& LeftTitleText() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& RightTitleText() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& LeftButtonIcon() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& RightButtonIcon() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = ButtonHelper*> R& _currentButton() {
		return *(R*)((uintptr_t)this + 0xB8);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(GoToCityWindow*))(Il2CppBase() + 0x12DF0E0))(this);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(GoToCityWindow*))(Il2CppBase() + 0x12DF804))(this);
	}
	template <typename R = void> R OnGoTo(int32_t index) {
		return ((R (*)(GoToCityWindow*, int32_t))(Il2CppBase() + 0x12DF91C))(this, index);
	}
	template <typename R = void> R OnAcceptButtonClickHandler() {
		return ((R (*)(GoToCityWindow*))(Il2CppBase() + 0x12DFBC0))(this);
	}
	template <typename R = void> R OnButtonClickedHandler(ButtonHelper* goToButton) {
		return ((R (*)(GoToCityWindow*, ButtonHelper*))(Il2CppBase() + 0x12DFC54))(this, goToButton);
	}
	template <typename R = void> R DeselectOtherButton(ButtonHelper* goToButton) {
		return ((R (*)(GoToCityWindow*, ButtonHelper*))(Il2CppBase() + 0x12DFD08))(this, goToButton);
	}
	template <typename R = void> R SetAcceptButtonInteractive(bool interactive) {
		return ((R (*)(GoToCityWindow*, bool))(Il2CppBase() + 0x12DF538))(this, interactive);
	}

};

