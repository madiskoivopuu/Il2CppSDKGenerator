#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeatherPostFX
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeatherPostFX"));
	}

	template <typename T = uintptr_t> T& Material() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = RTInit*> T& RT_Camera() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& IsGlobalMap() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _rt() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& RT_Temp() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _camera() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& _currentQuality() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = uintptr_t> T get_RT() {
		return ((T (*)(WeatherPostFX*))(Il2CppBase() + 0x112F5D4))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(WeatherPostFX*))(Il2CppBase() + 0x112F738))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(WeatherPostFX*))(Il2CppBase() + 0x112F834))(this);
	}
	template <typename T = void> T OnQualityChanged(int32_t quality) {
		return ((T (*)(WeatherPostFX*, int32_t))(Il2CppBase() + 0x112F930))(this, quality);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(WeatherPostFX*))(Il2CppBase() + 0x112FA34))(this);
	}
	template <typename T = void> T OnPreRender() {
		return ((T (*)(WeatherPostFX*))(Il2CppBase() + 0x112FAD0))(this);
	}
	template <typename T = void> T OnPostRender() {
		return ((T (*)(WeatherPostFX*))(Il2CppBase() + 0x112FB5C))(this);
	}

};

