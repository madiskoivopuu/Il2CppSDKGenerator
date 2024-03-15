#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SaveSourceConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SaveSourceConditionComponent"));
	}

	template <typename R = bool> R& Can() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(SaveSourceConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x1356D6C))(this, target);
	}

};

