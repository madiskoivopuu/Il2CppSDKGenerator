#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ferr {

class ColorUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ferr", "ColorUtil"));
	}

	template <typename R = float> static R& sqrt3() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = uintptr_t> static R HSL(float aHue, float aSaturation, float aLuminance) {
		return ((R (*)(void *, float, float, float))(Il2CppBase() + 0xE24ABC))(0, aHue, aSaturation, aLuminance);
	}
	template <typename R = uintptr_t> static R ToHSV(float aR, float aG, float aB) {
		return ((R (*)(void *, float, float, float))(Il2CppBase() + 0xE24C00))(0, aR, aG, aB);
	}
	template <typename R = uintptr_t> static R HSV(float aHue, float aSaturation, float aValue) {
		return ((R (*)(void *, float, float, float))(Il2CppBase() + 0xE24D04))(0, aHue, aSaturation, aValue);
	}
	template <typename R = uintptr_t> static R HCL(float aHue, float aChroma, float aLuma) {
		return ((R (*)(void *, float, float, float))(Il2CppBase() + 0xE24E2C))(0, aHue, aChroma, aLuma);
	}
	template <typename R = uintptr_t> static R GetColorBand(Il2CppArray<uintptr_t>* aColorBand, float aValue) {
		return ((R (*)(void *, Il2CppArray<uintptr_t>*, float))(Il2CppBase() + 0xE24F78))(0, aColorBand, aValue);
	}
	template <typename R = uintptr_t> static R FromHex(Il2CppString* aHex) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0xE250A4))(0, aHex);
	}
	template <typename R = Il2CppString*> static R ToHex(uintptr_t aColor) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0xE2530C))(0, aColor);
	}

};

}
