#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ConfigurationTypeHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConfigurationTypeHelper"));
	}

	 static Il2CppDictionary<ProtoModels::ClientConfigurationType*, ConfigurationType*>*& _map() {
		return *(Il2CppDictionary<ProtoModels::ClientConfigurationType*, ConfigurationType*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = ConfigurationType*> static R GetType(ProtoModels::ClientConfigurationType* ctype) {
		return ((R (*)(void *, ProtoModels::ClientConfigurationType*))(Il2CppBase() + 0x15E7840))(0, ctype);
	}
	template <typename R = ProtoModels::ClientConfigurationType*> static R GetProtoType(ConfigurationType* ctype) {
		return ((R (*)(void *, ConfigurationType*))(Il2CppBase() + 0x15E5288))(0, ctype);
	}

};

