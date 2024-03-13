#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LockControllerComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LockControllerComponent"));
	}

	template <typename T = Il2CppString*> T& Activator() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(LockControllerComponent*, Il2CppObject*))(Il2CppBase() + 0x1726284))(this, target);
	}

};

