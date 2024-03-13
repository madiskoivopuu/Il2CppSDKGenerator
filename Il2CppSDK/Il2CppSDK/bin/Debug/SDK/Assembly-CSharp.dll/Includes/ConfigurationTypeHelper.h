#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ConfigurationTypeHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConfigurationTypeHelper"));
	}

	template <typename T = Il2CppDictionary<ClientConfigurationType*, ConfigurationType*>*> static T& _map() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = ConfigurationType*> static T GetType(ClientConfigurationType* ctype) {
		return ((T (*)(void *, ClientConfigurationType*))(Il2CppBase() + 0x15E7840))(0, ctype);
	}
	template <typename T = ClientConfigurationType*> static T GetProtoType(ConfigurationType* ctype) {
		return ((T (*)(void *, ConfigurationType*))(Il2CppBase() + 0x15E5288))(0, ctype);
	}

};

