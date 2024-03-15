#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "../ValidateAttribute.h" 
namespace ConfigValidationValidators {

class QuestValidator : public ValidateAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ConfigValidationValidators", "QuestValidator"));
	}

	template <typename R = bool> R& Tag() {
		return *(R*)((uintptr_t)this + 0x19);
	}

	template <typename R = bool> R get_Tag() {
		return ((R (*)(QuestValidator*))(Il2CppBase() + 0x1707200))(this);
	}
	template <typename R = void> R set_Tag(bool value) {
		return ((R (*)(QuestValidator*, bool))(Il2CppBase() + 0x1707208))(this, value);
	}

};

}
