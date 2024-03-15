#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VisibleConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VisibleConditionComponent"));
	}

	template <typename R = bool> R& Value() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(VisibleConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x15D0EA4))(this, target);
	}

};

