#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClassProgressInfoPopup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClassProgressInfoPopup"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _closeButtons() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _classIcon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _frame() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _caption() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _description() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _bottomDescription() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _resourceViews() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ClassProgressInfoPopup*))(Il2CppBase() + 0x159A36C))(this);
	}
	template <typename T = void> T Show(uintptr_t playerClass, uintptr_t tooltipView) {
		return ((T (*)(ClassProgressInfoPopup*, uintptr_t, uintptr_t))(Il2CppBase() + 0x159A45C))(this, playerClass, tooltipView);
	}
	template <typename T = void> T Awakeb__7_0() {
		return ((T (*)(ClassProgressInfoPopup*))(Il2CppBase() + 0x159AC14))(this);
	}

};

}
