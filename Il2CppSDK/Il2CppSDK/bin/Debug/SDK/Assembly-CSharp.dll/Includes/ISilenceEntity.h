#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISilenceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISilenceEntity"));
	}


	template <typename R = SilenceComponent*> R get_silence() {
		return ((R (*)(ISilenceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasSilence() {
		return ((R (*)(ISilenceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddSilence(bool newIgnoreImmune) {
		return ((R (*)(ISilenceEntity*, bool))(Il2CppBase() + 0x0))(this, newIgnoreImmune);
	}
	template <typename R = void> R ReplaceSilence(bool newIgnoreImmune) {
		return ((R (*)(ISilenceEntity*, bool))(Il2CppBase() + 0x0))(this, newIgnoreImmune);
	}
	template <typename R = void> R RemoveSilence() {
		return ((R (*)(ISilenceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

