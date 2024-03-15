#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "../ValidateAttribute.h" 
namespace ConfigValidationValidators {

class ResourcesAssetValidator : public ValidateAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ConfigValidationValidators", "ResourcesAssetValidator"));
	}

	template <typename R = Il2CppString*> R& rootPath() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& extention() {
		return *(R*)((uintptr_t)this + 0x28);
	}


};

}
