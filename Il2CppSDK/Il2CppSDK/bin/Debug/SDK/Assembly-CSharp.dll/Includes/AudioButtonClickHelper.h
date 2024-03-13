#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AudioButtonClickHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AudioButtonClickHelper"));
	}

	template <typename T = Il2CppString*> T& _soundName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _button() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(AudioButtonClickHelper*))(Il2CppBase() + 0x1A5B82C))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(AudioButtonClickHelper*))(Il2CppBase() + 0x1A5B888))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(AudioButtonClickHelper*))(Il2CppBase() + 0x1A5B934))(this);
	}
	template <typename T = void> T OnButtonClickHandlers() {
		return ((T (*)(AudioButtonClickHelper*))(Il2CppBase() + 0x1A5B9E0))(this);
	}

};

