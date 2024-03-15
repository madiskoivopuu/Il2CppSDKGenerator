#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEnginePurchasingSecurity {

class GooglePlayTangle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEnginePurchasingSecurity", "GooglePlayTangle"));
	}

	template <typename R = Il2CppArray<uint8_t>*> static R& data() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppArray<int32_t>*> static R& order() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = int32_t> static R& key() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename R = bool> static R& IsPopulated() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename R = Il2CppArray<uint8_t>*> static R Data() {
		return ((R (*)(void *))(Il2CppBase() + 0x12E1DE8))(0);
	}

};

}
