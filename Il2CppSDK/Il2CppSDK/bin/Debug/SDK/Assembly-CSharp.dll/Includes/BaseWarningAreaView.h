#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseWarningAreaView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseWarningAreaView"));
	}

	template <typename T = uintptr_t> T& Controller() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_Controller() {
		return ((T (*)(BaseWarningAreaView*))(Il2CppBase() + 0x167117C))(this);
	}
	template <typename T = void> T set_Controller(uintptr_t value) {
		return ((T (*)(BaseWarningAreaView*, uintptr_t))(Il2CppBase() + 0x1671184))(this, value);
	}
	template <typename T = void> T StartPlay(uintptr_t controller) {
		return ((T (*)(BaseWarningAreaView*, uintptr_t))(Il2CppBase() + 0x167118C))(this, controller);
	}
	template <typename T = void> T OnStartPlay() {
		return ((T (*)(BaseWarningAreaView*))(Il2CppBase() + 0x0))(this);
	}

};

}
