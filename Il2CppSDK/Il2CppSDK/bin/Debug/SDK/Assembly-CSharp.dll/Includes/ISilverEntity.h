#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISilverEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISilverEntity"));
	}


	template <typename T = SilverComponent*> T get_silver() {
		return ((T (*)(ISilverEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasSilver() {
		return ((T (*)(ISilverEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddSilver(int32_t newCount) {
		return ((T (*)(ISilverEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename T = void> T ReplaceSilver(int32_t newCount) {
		return ((T (*)(ISilverEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename T = void> T RemoveSilver() {
		return ((T (*)(ISilverEntity*))(Il2CppBase() + 0x0))(this);
	}

};

