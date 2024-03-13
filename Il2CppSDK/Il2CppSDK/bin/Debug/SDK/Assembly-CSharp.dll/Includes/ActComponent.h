#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActComponent"));
	}

	template <typename T = Il2CppString*> T& MainQuest() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(ActComponent*, Il2CppObject*))(Il2CppBase() + 0x18E7634))(this, target);
	}

};

