#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ConfigValidationBase {

class ValidateAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ConfigValidationBase", "ValidateAttribute"));
	}

	template <typename R = Il2CppString*> R& fieldName() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& allowNull() {
		return *(R*)((uintptr_t)this + 0x18);
	}


};

}