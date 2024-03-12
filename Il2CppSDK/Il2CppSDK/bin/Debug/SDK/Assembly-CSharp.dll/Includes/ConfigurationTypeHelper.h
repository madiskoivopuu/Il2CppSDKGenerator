#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ConfigurationTypeHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConfigurationTypeHelper"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> static T& _map() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T GetType(uintptr_t ctype) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x15E7840))(0, ctype);
	}
	template <typename T = uintptr_t> static T GetProtoType(uintptr_t ctype) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x15E5288))(0, ctype);
	}

};

}
