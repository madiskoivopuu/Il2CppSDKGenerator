#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "../ConfigValidation.Base/ValidateAttribute.h" 
namespace ConfigValidationValidators {

class QuestValidator : public ValidateAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ConfigValidationValidators", "QuestValidator"));
	}

	template <typename T = bool> T& Tag() {
		return *(T*)((uintptr_t)this + 0x19);
	}

	template <typename T = bool> T get_Tag() {
		return ((T (*)(QuestValidator*))(Il2CppBase() + 0x1707200))(this);
	}
	template <typename T = void> T set_Tag(bool value) {
		return ((T (*)(QuestValidator*, bool))(Il2CppBase() + 0x1707208))(this, value);
	}

};

}
