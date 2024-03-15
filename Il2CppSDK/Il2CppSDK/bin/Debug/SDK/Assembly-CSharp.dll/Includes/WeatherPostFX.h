#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeatherPostFX
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeatherPostFX"));
	}

	template <typename R = uintptr_t> R& Material() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = RTInit*> R& RT_Camera() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = bool> R& IsGlobalMap() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _rt() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& RT_Temp() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _camera() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> R& _currentQuality() {
		return *(R*)((uintptr_t)this + 0x48);
	}

	template <typename R = uintptr_t> R get_RT() {
		return ((R (*)(WeatherPostFX*))(Il2CppBase() + 0x112F5D4))(this);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(WeatherPostFX*))(Il2CppBase() + 0x112F738))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(WeatherPostFX*))(Il2CppBase() + 0x112F834))(this);
	}
	template <typename R = void> R OnQualityChanged(int32_t quality) {
		return ((R (*)(WeatherPostFX*, int32_t))(Il2CppBase() + 0x112F930))(this, quality);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(WeatherPostFX*))(Il2CppBase() + 0x112FA34))(this);
	}
	template <typename R = void> R OnPreRender() {
		return ((R (*)(WeatherPostFX*))(Il2CppBase() + 0x112FAD0))(this);
	}
	template <typename R = void> R OnPostRender() {
		return ((R (*)(WeatherPostFX*))(Il2CppBase() + 0x112FB5C))(this);
	}

};

