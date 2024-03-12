#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAmbientEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAmbientEntity"));
	}


	template <typename T = uintptr_t> T get_ambient() {
		return ((T (*)(IAmbientEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasAmbient() {
		return ((T (*)(IAmbientEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddAmbient(Il2CppString* newValue) {
		return ((T (*)(IAmbientEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceAmbient(Il2CppString* newValue) {
		return ((T (*)(IAmbientEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveAmbient() {
		return ((T (*)(IAmbientEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
