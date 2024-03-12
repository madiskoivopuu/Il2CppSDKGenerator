#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BopComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BopComponent"));
	}

	template <typename T = Il2CppString*> T& ActiveCondition() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(BopComponent*, uintptr_t))(Il2CppBase() + 0x16C96B0))(this, targetObject);
	}

};

}
