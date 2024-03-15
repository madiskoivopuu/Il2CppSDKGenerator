#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ConfigurationVersion
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConfigurationVersion"));
	}

	template <typename R = int64_t> R& Version() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = ConfigurationType*> R& Type() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& Valid() {
		return *(R*)((uintptr_t)this + 0x1C);
	}

	template <typename R = int64_t> R get_Version() {
		return ((R (*)(ConfigurationVersion*))(Il2CppBase() + 0x15E79F8))(this);
	}
	template <typename R = void> R set_Version(int64_t value) {
		return ((R (*)(ConfigurationVersion*, int64_t))(Il2CppBase() + 0x15E7A00))(this, value);
	}
	template <typename R = ConfigurationType*> R get_Type() {
		return ((R (*)(ConfigurationVersion*))(Il2CppBase() + 0x15E7A08))(this);
	}
	template <typename R = void> R set_Type(ConfigurationType* value) {
		return ((R (*)(ConfigurationVersion*, ConfigurationType*))(Il2CppBase() + 0x15E7A10))(this, value);
	}
	template <typename R = bool> R get_Valid() {
		return ((R (*)(ConfigurationVersion*))(Il2CppBase() + 0x15E7A18))(this);
	}
	template <typename R = void> R set_Valid(bool value) {
		return ((R (*)(ConfigurationVersion*, bool))(Il2CppBase() + 0x15E7A20))(this, value);
	}

};

