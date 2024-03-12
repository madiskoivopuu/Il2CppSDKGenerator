#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISilenceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISilenceEntity"));
	}


	template <typename T = uintptr_t> T get_silence() {
		return ((T (*)(ISilenceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasSilence() {
		return ((T (*)(ISilenceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddSilence(bool newIgnoreImmune) {
		return ((T (*)(ISilenceEntity*, bool))(Il2CppBase() + 0x0))(this, newIgnoreImmune);
	}
	template <typename T = void> T ReplaceSilence(bool newIgnoreImmune) {
		return ((T (*)(ISilenceEntity*, bool))(Il2CppBase() + 0x0))(this, newIgnoreImmune);
	}
	template <typename T = void> T RemoveSilence() {
		return ((T (*)(ISilenceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
