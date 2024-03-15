#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISilverEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISilverEntity"));
	}


	template <typename R = SilverComponent*> R get_silver() {
		return ((R (*)(ISilverEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasSilver() {
		return ((R (*)(ISilverEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddSilver(int32_t newCount) {
		return ((R (*)(ISilverEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename R = void> R ReplaceSilver(int32_t newCount) {
		return ((R (*)(ISilverEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename R = void> R RemoveSilver() {
		return ((R (*)(ISilverEntity*))(Il2CppBase() + 0x0))(this);
	}

};

