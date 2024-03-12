#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HeightFog
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HeightFog"));
	}

	template <typename T = bool> T& isEnabled() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& _HeightFog_Horizon() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& _HeightFog_Height() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _HeightFog_Color() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(HeightFog*))(Il2CppBase() + 0x128BE1C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(HeightFog*))(Il2CppBase() + 0x128BF0C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(HeightFog*))(Il2CppBase() + 0x128BF6C))(this);
	}

};

}
