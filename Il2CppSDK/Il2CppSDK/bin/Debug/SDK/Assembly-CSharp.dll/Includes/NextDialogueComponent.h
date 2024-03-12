#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NextDialogueComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NextDialogueComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Buttons() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(NextDialogueComponent*, uintptr_t))(Il2CppBase() + 0x13B1AF4))(this, targetObject);
	}

};

}
