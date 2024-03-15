#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DayNightSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DayNightSystem"));
	}

	template <typename R = uintptr_t> R& sun() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& sunRotation() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& sunArcWidth() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = float> R& secondsInFullDay() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& sunColor() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& sunIntensity() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& ambientSkyColor() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& ambientHorizonColor() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& ambientGroundColorWet() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& ambientGroundColorNeutral() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& ambientGroundColorDry() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& ambientGroundIntensity() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = float> R& Zenith() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = float> R& currentTimeOfDay() {
		return *(R*)((uintptr_t)this + 0x74);
	}
	template <typename R = float> R& currentTimeOfDayCalcAzimuth() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = float> R& Azimuth() {
		return *(R*)((uintptr_t)this + 0x7C);
	}
	template <typename R = float> R& Meridian() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = float> R& AzimuthLinear() {
		return *(R*)((uintptr_t)this + 0x84);
	}
	template <typename R = float> R& GlobalTemperature() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = float> R& GlobalDry() {
		return *(R*)((uintptr_t)this + 0x8C);
	}
	template <typename R = uintptr_t> R& a() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& b() {
		return *(R*)((uintptr_t)this + 0xA0);
	}

	template <typename R = void> R Start() {
		return ((R (*)(DayNightSystem*))(Il2CppBase() + 0xEB1F84))(this);
	}
	template <typename R = void> R Update() {
		return ((R (*)(DayNightSystem*))(Il2CppBase() + 0xEB1FFC))(this);
	}

};

