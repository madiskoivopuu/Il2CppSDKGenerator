#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class ExpeditionWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExpeditionWindow"));
	}

	template <typename R = uintptr_t> R& _closeButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _startButton() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = Il2CppArray<ExpeditionButton*>*> R& _buttons() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = int32_t> R& _currentButtonIndex() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = bool> R& _startButtonClicked() {
		return *(R*)((uintptr_t)this + 0x94);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(ExpeditionWindow*))(Il2CppBase() + 0x1684180))(this);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(ExpeditionWindow*))(Il2CppBase() + 0x1684360))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(ExpeditionWindow*))(Il2CppBase() + 0x1684448))(this);
	}
	template <typename R = void> R OnShowWarningHook(WarningDataForClient* data, uintptr_t hooked) {
		return ((R (*)(ExpeditionWindow*, WarningDataForClient*, uintptr_t))(Il2CppBase() + 0x16845CC))(this, data, hooked);
	}
	template <typename R = void> R OnStartButtonClickHandler() {
		return ((R (*)(ExpeditionWindow*))(Il2CppBase() + 0x1684720))(this);
	}
	template <typename R = void> R OnButtonClickedHandler(int32_t index) {
		return ((R (*)(ExpeditionWindow*, int32_t))(Il2CppBase() + 0x16847B4))(this, index);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(ExpeditionWindow*))(Il2CppBase() + 0x1684854))(this);
	}
	template <typename R = void> R Awakeb__6_0() {
		return ((R (*)(ExpeditionWindow*))(Il2CppBase() + 0x1684970))(this);
	}

};

