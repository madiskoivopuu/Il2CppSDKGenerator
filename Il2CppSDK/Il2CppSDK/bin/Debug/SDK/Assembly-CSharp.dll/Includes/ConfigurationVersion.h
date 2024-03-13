#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ConfigurationVersion
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConfigurationVersion"));
	}

	template <typename T = int64_t> T& Version() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = ConfigurationType*> T& Type() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& Valid() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int64_t> T get_Version() {
		return ((T (*)(ConfigurationVersion*))(Il2CppBase() + 0x15E79F8))(this);
	}
	template <typename T = void> T set_Version(int64_t value) {
		return ((T (*)(ConfigurationVersion*, int64_t))(Il2CppBase() + 0x15E7A00))(this, value);
	}
	template <typename T = ConfigurationType*> T get_Type() {
		return ((T (*)(ConfigurationVersion*))(Il2CppBase() + 0x15E7A08))(this);
	}
	template <typename T = void> T set_Type(ConfigurationType* value) {
		return ((T (*)(ConfigurationVersion*, ConfigurationType*))(Il2CppBase() + 0x15E7A10))(this, value);
	}
	template <typename T = bool> T get_Valid() {
		return ((T (*)(ConfigurationVersion*))(Il2CppBase() + 0x15E7A18))(this);
	}
	template <typename T = void> T set_Valid(bool value) {
		return ((T (*)(ConfigurationVersion*, bool))(Il2CppBase() + 0x15E7A20))(this, value);
	}

};

