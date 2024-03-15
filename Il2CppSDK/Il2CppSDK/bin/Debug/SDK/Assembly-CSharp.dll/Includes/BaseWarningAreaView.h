#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseWarningAreaView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseWarningAreaView"));
	}

	template <typename R = WarningAreaController*> R& Controller() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = WarningAreaController*> R get_Controller() {
		return ((R (*)(BaseWarningAreaView*))(Il2CppBase() + 0x167117C))(this);
	}
	template <typename R = void> R set_Controller(WarningAreaController* value) {
		return ((R (*)(BaseWarningAreaView*, WarningAreaController*))(Il2CppBase() + 0x1671184))(this, value);
	}
	template <typename R = void> R StartPlay(WarningAreaController* controller) {
		return ((R (*)(BaseWarningAreaView*, WarningAreaController*))(Il2CppBase() + 0x167118C))(this, controller);
	}
	template <typename R = void> R OnStartPlay() {
		return ((R (*)(BaseWarningAreaView*))(Il2CppBase() + 0x0))(this);
	}

};

