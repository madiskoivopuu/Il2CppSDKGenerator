#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICoverRadiusEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICoverRadiusEntity"));
	}


	template <typename R = CoverRadiusComponent*> R get_coverRadius() {
		return ((R (*)(ICoverRadiusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasCoverRadius() {
		return ((R (*)(ICoverRadiusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddCoverRadius(float newValue) {
		return ((R (*)(ICoverRadiusEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceCoverRadius(float newValue) {
		return ((R (*)(ICoverRadiusEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveCoverRadius() {
		return ((R (*)(ICoverRadiusEntity*))(Il2CppBase() + 0x0))(this);
	}

};

