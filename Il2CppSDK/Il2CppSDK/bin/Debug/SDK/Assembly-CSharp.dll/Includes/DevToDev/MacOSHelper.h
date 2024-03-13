#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DevToDev {

class MacOSHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "DevToDev", "MacOSHelper"));
	}


	template <typename T = Il2CppString*> static T dtd_g() {
		return ((T (*)(void *))(Il2CppBase() + 0x11F1DC4))(0);
	}
	template <typename T = Il2CppString*> static T dtd_o() {
		return ((T (*)(void *))(Il2CppBase() + 0x11F1DCC))(0);
	}
	template <typename T = Il2CppString*> static T dtd_p() {
		return ((T (*)(void *))(Il2CppBase() + 0x11F1DD4))(0);
	}
	template <typename T = Il2CppString*> static T dtd_a() {
		return ((T (*)(void *))(Il2CppBase() + 0x11F1DDC))(0);
	}
	template <typename T = Il2CppString*> static T dtd_e() {
		return ((T (*)(void *))(Il2CppBase() + 0x11F1DE4))(0);
	}
	template <typename T = Il2CppString*> static T dtd_f() {
		return ((T (*)(void *))(Il2CppBase() + 0x11F1DEC))(0);
	}
	template <typename T = Il2CppString*> static T dtd_d() {
		return ((T (*)(void *))(Il2CppBase() + 0x11F1DF4))(0);
	}
	template <typename T = void> static T dtd_z() {
		return ((T (*)(void *))(Il2CppBase() + 0x11F1DFC))(0);
	}
	template <typename T = Il2CppString*> static T dtd_i(Il2CppString* a) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x11F1E00))(0, a);
	}
	template <typename T = void> static T dtd_j(Il2CppString* a) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x11F1E08))(0, a);
	}

};

}
