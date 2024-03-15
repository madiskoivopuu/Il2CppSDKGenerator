#pragma once
#include <Il2Cpp/Il2Cpp.h>

class KefirAuthValidatorError
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KefirAuthValidatorError"));
	}

	template <typename R = Il2CppString*> static R& INVALID_TOKEN() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& INVALID_VALIDATION() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& INVALID_AUD() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& NOT_SUPPORT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

