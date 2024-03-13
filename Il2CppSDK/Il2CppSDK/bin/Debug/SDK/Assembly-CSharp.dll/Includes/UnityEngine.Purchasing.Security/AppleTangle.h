#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEnginePurchasingSecurity {

class AppleTangle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEnginePurchasingSecurity", "AppleTangle"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& data() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& order() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& key() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = bool> static T& IsPopulated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T Data() {
		return ((T (*)(void *))(Il2CppBase() + 0x1892664))(0);
	}

};

}
