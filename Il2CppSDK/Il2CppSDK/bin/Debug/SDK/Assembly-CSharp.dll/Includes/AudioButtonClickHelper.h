#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AudioButtonClickHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AudioButtonClickHelper"));
	}

	template <typename R = Il2CppString*> R& _soundName() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _button() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(AudioButtonClickHelper*))(Il2CppBase() + 0x1A5B82C))(this);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(AudioButtonClickHelper*))(Il2CppBase() + 0x1A5B888))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(AudioButtonClickHelper*))(Il2CppBase() + 0x1A5B934))(this);
	}
	template <typename R = void> R OnButtonClickHandlers() {
		return ((R (*)(AudioButtonClickHelper*))(Il2CppBase() + 0x1A5B9E0))(this);
	}

};

