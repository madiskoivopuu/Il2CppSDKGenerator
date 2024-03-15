#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyTaxComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyTaxComponent"));
	}

	template <typename R = Il2CppString*> R& SuccessEffect() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& FailedDialogue() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(ApplyTaxComponent*, Il2CppObject*))(Il2CppBase() + 0x189562C))(this, targetObject);
	}

};

