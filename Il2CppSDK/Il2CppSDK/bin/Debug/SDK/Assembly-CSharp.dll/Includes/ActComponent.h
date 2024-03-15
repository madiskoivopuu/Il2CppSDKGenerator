#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActComponent"));
	}

	template <typename R = Il2CppString*> R& MainQuest() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ActComponent*, Il2CppObject*))(Il2CppBase() + 0x18E7634))(this, target);
	}

};

