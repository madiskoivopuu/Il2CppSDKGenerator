#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICoverRadiusEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICoverRadiusEntity"));
	}


	template <typename T = uintptr_t> T get_coverRadius() {
		return ((T (*)(ICoverRadiusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasCoverRadius() {
		return ((T (*)(ICoverRadiusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddCoverRadius(float newValue) {
		return ((T (*)(ICoverRadiusEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceCoverRadius(float newValue) {
		return ((T (*)(ICoverRadiusEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveCoverRadius() {
		return ((T (*)(ICoverRadiusEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
