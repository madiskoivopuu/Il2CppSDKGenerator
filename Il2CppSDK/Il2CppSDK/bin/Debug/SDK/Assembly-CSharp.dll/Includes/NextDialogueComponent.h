#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NextDialogueComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NextDialogueComponent"));
	}

	template <typename R = Il2CppArray<Button*>*> R& Buttons() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(NextDialogueComponent*, Il2CppObject*))(Il2CppBase() + 0x13B1AF4))(this, targetObject);
	}

};

