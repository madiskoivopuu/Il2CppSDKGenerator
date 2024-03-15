#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HidePetConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HidePetConditionComponent"));
	}

	template <typename R = bool> R& Value() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(HidePetConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x1C43AB4))(this, target);
	}

};

