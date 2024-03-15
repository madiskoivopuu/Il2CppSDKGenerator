#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MoveToConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MoveToConditionComponent"));
	}

	template <typename R = bool> R& Valid() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(MoveToConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x1557474))(this, target);
	}

};

