#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ConfigValidationBase {

class ValidationResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ConfigValidationBase", "ValidationResult"));
	}

	template <typename R = ConfigValidationBase::ResultType> R& ResultType() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& Message() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = uintptr_t> R& Type() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& EntityDescription() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = ConfigValidationBase::ValidationResult> static R Create(ConfigValidationBase::ResultType resultType, Il2CppString* message) {
		return ((R (*)(void *, ConfigValidationBase::ResultType, Il2CppString*))(Il2CppBase() + 0x15C3CF8))(0, resultType, message);
	}
	template <typename R = ConfigValidationBase::ValidationResult> static R get_Empty() {
		return ((R (*)(void *))(Il2CppBase() + 0x15C3D3C))(0);
	}

};

}
