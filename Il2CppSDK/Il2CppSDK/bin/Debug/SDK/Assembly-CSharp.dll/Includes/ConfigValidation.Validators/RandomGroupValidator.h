#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "../ConfigValidation.Base/ValidateAttribute.h" 
namespace ConfigValidationValidators {

class RandomGroupValidator : public ValidateAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ConfigValidationValidators", "RandomGroupValidator"));
	}

	template <typename T = HashSet1Il2CppString*>*> static T& _ignoreSet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
