#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StatueConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StatueConditionComponent"));
	}

	template <typename R = StatueStatus*> R& Status() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(StatueConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x148FB60))(this, target);
	}

};

