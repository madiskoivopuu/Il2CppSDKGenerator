#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DayNightSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DayNightSystem"));
	}

	template <typename T = uintptr_t> T& sun() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& sunRotation() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& sunArcWidth() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& secondsInFullDay() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& sunColor() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& sunIntensity() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& ambientSkyColor() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& ambientHorizonColor() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& ambientGroundColorWet() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& ambientGroundColorNeutral() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& ambientGroundColorDry() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& ambientGroundIntensity() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& Zenith() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& currentTimeOfDay() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& currentTimeOfDayCalcAzimuth() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& Azimuth() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& Meridian() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& AzimuthLinear() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& GlobalTemperature() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& GlobalDry() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& a() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& b() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = void> T Start() {
		return ((T (*)(DayNightSystem*))(Il2CppBase() + 0xEB1F84))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(DayNightSystem*))(Il2CppBase() + 0xEB1FFC))(this);
	}

};

}
