#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HeightFog
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HeightFog"));
	}

	template <typename R = bool> R& isEnabled() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& _HeightFog_Horizon() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = float> R& _HeightFog_Height() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _HeightFog_Color() {
		return *(R*)((uintptr_t)this + 0x24);
	}

	template <typename R = void> R OnEnable() {
		return ((R (*)(HeightFog*))(Il2CppBase() + 0x128BE1C))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(HeightFog*))(Il2CppBase() + 0x128BF0C))(this);
	}
	template <typename R = void> R Update() {
		return ((R (*)(HeightFog*))(Il2CppBase() + 0x128BF6C))(this);
	}

};

