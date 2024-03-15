#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "../ValidateAttribute.h" 
namespace ConfigValidationValidators {

class RandomGroupValidator : public ValidateAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ConfigValidationValidators", "RandomGroupValidator"));
	}

	 static HashSet1<Il2CppString*>*& _ignoreSet() {
		return *(HashSet1<Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
