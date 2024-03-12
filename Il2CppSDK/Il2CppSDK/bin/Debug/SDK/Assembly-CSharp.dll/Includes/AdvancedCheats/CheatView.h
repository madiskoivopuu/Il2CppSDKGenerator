#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace AdvancedCheats {

class CheatView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AdvancedCheats", "CheatView"));
	}

	template <typename T = uintptr_t> T& innerNameText() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& IsShown() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T UnBind() {
		return ((T (*)(CheatView*))(Il2CppBase() + 0x173CE90))(this);
	}
	template <typename T = bool> T get_IsShown() {
		return ((T (*)(CheatView*))(Il2CppBase() + 0x173CF34))(this);
	}
	template <typename T = void> T set_IsShown(bool value) {
		return ((T (*)(CheatView*, bool))(Il2CppBase() + 0x173CF3C))(this, value);
	}
	template <typename T = void> T Show() {
		return ((T (*)(CheatView*))(Il2CppBase() + 0x173CF48))(this);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(CheatView*))(Il2CppBase() + 0x173CF2C))(this);
	}
	template <typename T = void> T SwitchVisibility() {
		return ((T (*)(CheatView*))(Il2CppBase() + 0x173CFC0))(this);
	}
	template <typename T = void> T SwitchVisibilityInternal() {
		return ((T (*)(CheatView*))(Il2CppBase() + 0x173CF54))(this);
	}

};

}
