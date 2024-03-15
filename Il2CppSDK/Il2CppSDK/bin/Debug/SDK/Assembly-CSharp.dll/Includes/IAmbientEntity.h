#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAmbientEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAmbientEntity"));
	}


	template <typename R = AmbientComponent*> R get_ambient() {
		return ((R (*)(IAmbientEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasAmbient() {
		return ((R (*)(IAmbientEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddAmbient(Il2CppString* newValue) {
		return ((R (*)(IAmbientEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceAmbient(Il2CppString* newValue) {
		return ((R (*)(IAmbientEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveAmbient() {
		return ((R (*)(IAmbientEntity*))(Il2CppBase() + 0x0))(this);
	}

};

