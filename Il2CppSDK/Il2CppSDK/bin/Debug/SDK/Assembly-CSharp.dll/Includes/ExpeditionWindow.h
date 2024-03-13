#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class ExpeditionWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExpeditionWindow"));
	}

	template <typename T = uintptr_t> T& _closeButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _startButton() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _buttons() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& _currentButtonIndex() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& _startButtonClicked() {
		return *(T*)((uintptr_t)this + 0x94);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ExpeditionWindow*))(Il2CppBase() + 0x1684180))(this);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(ExpeditionWindow*))(Il2CppBase() + 0x1684360))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(ExpeditionWindow*))(Il2CppBase() + 0x1684448))(this);
	}
	template <typename T = void> T OnShowWarningHook(WarningDataForClient* data, uintptr_t hooked) {
		return ((T (*)(ExpeditionWindow*, WarningDataForClient*, uintptr_t))(Il2CppBase() + 0x16845CC))(this, data, hooked);
	}
	template <typename T = void> T OnStartButtonClickHandler() {
		return ((T (*)(ExpeditionWindow*))(Il2CppBase() + 0x1684720))(this);
	}
	template <typename T = void> T OnButtonClickedHandler(int32_t index) {
		return ((T (*)(ExpeditionWindow*, int32_t))(Il2CppBase() + 0x16847B4))(this, index);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(ExpeditionWindow*))(Il2CppBase() + 0x1684854))(this);
	}
	template <typename T = void> T Awakeb__6_0() {
		return ((T (*)(ExpeditionWindow*))(Il2CppBase() + 0x1684970))(this);
	}

};

