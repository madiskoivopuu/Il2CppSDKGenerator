#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ConfigValidationBase {

class ValidationResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ConfigValidationBase", "ValidationResult"));
	}

	template <typename T = uintptr_t> T& ResultType() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& Message() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& EntityDescription() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> static T Create(uintptr_t resultType, Il2CppString* message) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x15C3CF8))(0, resultType, message);
	}
	template <typename T = uintptr_t> static T get_Empty() {
		return ((T (*)(void *))(Il2CppBase() + 0x15C3D3C))(0);
	}

};

}
