#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "../ConfigValidation.Base/ValidateAttribute.h" 
namespace ConfigValidationValidators {

class BlueprintValidator : public ValidateAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ConfigValidationValidators", "BlueprintValidator"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& lookingContexts() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& checkAllContext() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

}
