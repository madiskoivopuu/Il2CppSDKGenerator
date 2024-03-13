#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SaveSourceConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SaveSourceConditionComponent"));
	}

	template <typename T = bool> T& Can() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(SaveSourceConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x1356D6C))(this, target);
	}

};

