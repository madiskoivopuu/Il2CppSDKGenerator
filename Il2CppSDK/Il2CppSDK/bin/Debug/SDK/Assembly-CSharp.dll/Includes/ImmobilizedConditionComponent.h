#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ImmobilizedConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ImmobilizedConditionComponent"));
	}

	template <typename R = bool> R& Value() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ImmobilizedConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x1E3DB68))(this, target);
	}

};

