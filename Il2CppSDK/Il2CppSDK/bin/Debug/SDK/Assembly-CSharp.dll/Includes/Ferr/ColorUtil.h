#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ferr {

class ColorUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ferr", "ColorUtil"));
	}

	template <typename T = float> static T& sqrt3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T HSL(float aHue, float aSaturation, float aLuminance) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0xE24ABC))(0, aHue, aSaturation, aLuminance);
	}
	template <typename T = uintptr_t> static T ToHSV(float aR, float aG, float aB) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0xE24C00))(0, aR, aG, aB);
	}
	template <typename T = uintptr_t> static T HSV(float aHue, float aSaturation, float aValue) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0xE24D04))(0, aHue, aSaturation, aValue);
	}
	template <typename T = uintptr_t> static T HCL(float aHue, float aChroma, float aLuma) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0xE24E2C))(0, aHue, aChroma, aLuma);
	}
	template <typename T = uintptr_t> static T GetColorBand(Il2CppArray<uintptr_t>* aColorBand, float aValue) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, float))(Il2CppBase() + 0xE24F78))(0, aColorBand, aValue);
	}
	template <typename T = uintptr_t> static T FromHex(Il2CppString* aHex) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0xE250A4))(0, aHex);
	}
	template <typename T = Il2CppString*> static T ToHex(uintptr_t aColor) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xE2530C))(0, aColor);
	}

};

}
