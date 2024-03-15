#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "../ValidateAttribute.h" 
namespace ConfigValidationValidators {

class BlueprintValidator : public ValidateAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ConfigValidationValidators", "BlueprintValidator"));
	}

	template <typename R = Il2CppArray<Il2CppString*>*> R& lookingContexts() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = bool> R& checkAllContext() {
		return *(R*)((uintptr_t)this + 0x28);
	}


};

}
