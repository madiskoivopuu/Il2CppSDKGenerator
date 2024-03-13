#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class GoToCityWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GoToCityWindow"));
	}

	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& AcceptButton() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& AcceptButtonText() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& GoToButtonHelpers() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& LeftTitleText() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& RightTitleText() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& LeftButtonIcon() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& RightButtonIcon() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = ButtonHelper*> T& _currentButton() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(GoToCityWindow*))(Il2CppBase() + 0x12DF0E0))(this);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(GoToCityWindow*))(Il2CppBase() + 0x12DF804))(this);
	}
	template <typename T = void> T OnGoTo(int32_t index) {
		return ((T (*)(GoToCityWindow*, int32_t))(Il2CppBase() + 0x12DF91C))(this, index);
	}
	template <typename T = void> T OnAcceptButtonClickHandler() {
		return ((T (*)(GoToCityWindow*))(Il2CppBase() + 0x12DFBC0))(this);
	}
	template <typename T = void> T OnButtonClickedHandler(ButtonHelper* goToButton) {
		return ((T (*)(GoToCityWindow*, ButtonHelper*))(Il2CppBase() + 0x12DFC54))(this, goToButton);
	}
	template <typename T = void> T DeselectOtherButton(ButtonHelper* goToButton) {
		return ((T (*)(GoToCityWindow*, ButtonHelper*))(Il2CppBase() + 0x12DFD08))(this, goToButton);
	}
	template <typename T = void> T SetAcceptButtonInteractive(bool interactive) {
		return ((T (*)(GoToCityWindow*, bool))(Il2CppBase() + 0x12DF538))(this, interactive);
	}

};

