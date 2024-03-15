#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace AdvancedCheats {

class CheatView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AdvancedCheats", "CheatView"));
	}

	template <typename R = uintptr_t> R& innerNameText() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& IsShown() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R UnBind() {
		return ((R (*)(CheatView*))(Il2CppBase() + 0x173CE90))(this);
	}
	template <typename R = bool> R get_IsShown() {
		return ((R (*)(CheatView*))(Il2CppBase() + 0x173CF34))(this);
	}
	template <typename R = void> R set_IsShown(bool value) {
		return ((R (*)(CheatView*, bool))(Il2CppBase() + 0x173CF3C))(this, value);
	}
	template <typename R = void> R Show() {
		return ((R (*)(CheatView*))(Il2CppBase() + 0x173CF48))(this);
	}
	template <typename R = void> R Hide() {
		return ((R (*)(CheatView*))(Il2CppBase() + 0x173CF2C))(this);
	}
	template <typename R = void> R SwitchVisibility() {
		return ((R (*)(CheatView*))(Il2CppBase() + 0x173CFC0))(this);
	}
	template <typename R = void> R SwitchVisibilityInternal() {
		return ((R (*)(CheatView*))(Il2CppBase() + 0x173CF54))(this);
	}

};

}
