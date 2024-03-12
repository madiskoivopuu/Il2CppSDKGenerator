#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyTaxComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyTaxComponent"));
	}

	template <typename T = Il2CppString*> T& SuccessEffect() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& FailedDialogue() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(ApplyTaxComponent*, uintptr_t))(Il2CppBase() + 0x189562C))(this, targetObject);
	}

};

}
