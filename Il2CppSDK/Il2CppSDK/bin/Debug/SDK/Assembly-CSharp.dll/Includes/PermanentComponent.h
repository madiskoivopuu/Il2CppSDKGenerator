#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PermanentComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PermanentComponent"));
	}

	template <typename T = bool> T& SaveOnDeath() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(PermanentComponent*, Il2CppObject*))(Il2CppBase() + 0x11EA354))(this, target);
	}

};

