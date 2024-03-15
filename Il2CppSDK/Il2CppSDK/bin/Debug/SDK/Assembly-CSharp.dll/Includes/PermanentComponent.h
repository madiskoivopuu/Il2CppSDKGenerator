#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PermanentComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PermanentComponent"));
	}

	template <typename R = bool> R& SaveOnDeath() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(PermanentComponent*, Il2CppObject*))(Il2CppBase() + 0x11EA354))(this, target);
	}

};

