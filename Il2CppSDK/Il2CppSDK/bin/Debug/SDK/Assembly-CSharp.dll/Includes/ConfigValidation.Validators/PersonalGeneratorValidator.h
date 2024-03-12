#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "../ConfigValidation.Base/ValidateAttribute" 
namespace ConfigValidationValidators {

class PersonalGeneratorValidator: ValidateAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ConfigValidationValidators", "PersonalGeneratorValidator"));
	}



};

}
