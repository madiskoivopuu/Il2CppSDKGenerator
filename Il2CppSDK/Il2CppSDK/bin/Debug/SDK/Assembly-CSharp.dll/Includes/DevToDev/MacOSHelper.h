#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DevToDev {

class MacOSHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "DevToDev", "MacOSHelper"));
	}


	template <typename R = Il2CppString*> static R dtd_g() {
		return ((R (*)(void *))(Il2CppBase() + 0x11F1DC4))(0);
	}
	template <typename R = Il2CppString*> static R dtd_o() {
		return ((R (*)(void *))(Il2CppBase() + 0x11F1DCC))(0);
	}
	template <typename R = Il2CppString*> static R dtd_p() {
		return ((R (*)(void *))(Il2CppBase() + 0x11F1DD4))(0);
	}
	template <typename R = Il2CppString*> static R dtd_a() {
		return ((R (*)(void *))(Il2CppBase() + 0x11F1DDC))(0);
	}
	template <typename R = Il2CppString*> static R dtd_e() {
		return ((R (*)(void *))(Il2CppBase() + 0x11F1DE4))(0);
	}
	template <typename R = Il2CppString*> static R dtd_f() {
		return ((R (*)(void *))(Il2CppBase() + 0x11F1DEC))(0);
	}
	template <typename R = Il2CppString*> static R dtd_d() {
		return ((R (*)(void *))(Il2CppBase() + 0x11F1DF4))(0);
	}
	template <typename R = void> static R dtd_z() {
		return ((R (*)(void *))(Il2CppBase() + 0x11F1DFC))(0);
	}
	template <typename R = Il2CppString*> static R dtd_i(Il2CppString* a) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x11F1E00))(0, a);
	}
	template <typename R = void> static R dtd_j(Il2CppString* a) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x11F1E08))(0, a);
	}

};

}
