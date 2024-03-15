#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QualitySwitcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QualitySwitcher"));
	}

	template <typename R = uintptr_t> R& _target() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& _veryLow() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = bool> R& _low() {
		return *(R*)((uintptr_t)this + 0x21);
	}
	template <typename R = bool> R& _medium() {
		return *(R*)((uintptr_t)this + 0x22);
	}
	template <typename R = bool> R& _high() {
		return *(R*)((uintptr_t)this + 0x23);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(QualitySwitcher*))(Il2CppBase() + 0x11C621C))(this);
	}
	template <typename R = void> R OnQualityChanged(int32_t quality) {
		return ((R (*)(QualitySwitcher*, int32_t))(Il2CppBase() + 0x11C63B8))(this, quality);
	}
	template <typename R = void> R OnDestroy() {
		return ((R (*)(QualitySwitcher*))(Il2CppBase() + 0x11C64C0))(this);
	}

};

