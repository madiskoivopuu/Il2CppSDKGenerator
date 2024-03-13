#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ConfigValidationBase {

class ValidateAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ConfigValidationBase", "ValidateAttribute"));
	}

	template <typename T = Il2CppString*> T& fieldName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& allowNull() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
