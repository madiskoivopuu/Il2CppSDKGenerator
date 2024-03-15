#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoTools {

class ErrorCodesReflection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoTools", "ErrorCodesReflection"));
	}

	template <typename R = uintptr_t> static R& descriptor() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x137C580))(0);
	}

};

}
