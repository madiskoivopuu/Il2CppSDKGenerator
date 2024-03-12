#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QualitySwitcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QualitySwitcher"));
	}

	template <typename T = uintptr_t> T& _target() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& _veryLow() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& _low() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = bool> T& _medium() {
		return *(T*)((uintptr_t)this + 0x22);
	}
	template <typename T = bool> T& _high() {
		return *(T*)((uintptr_t)this + 0x23);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(QualitySwitcher*))(Il2CppBase() + 0x11C621C))(this);
	}
	template <typename T = void> T OnQualityChanged(int32_t quality) {
		return ((T (*)(QualitySwitcher*, int32_t))(Il2CppBase() + 0x11C63B8))(this, quality);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(QualitySwitcher*))(Il2CppBase() + 0x11C64C0))(this);
	}

};

}
