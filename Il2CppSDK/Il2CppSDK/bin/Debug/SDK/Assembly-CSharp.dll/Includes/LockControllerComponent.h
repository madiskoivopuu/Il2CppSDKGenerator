#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LockControllerComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LockControllerComponent"));
	}

	template <typename R = Il2CppString*> R& Activator() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(LockControllerComponent*, Il2CppObject*))(Il2CppBase() + 0x1726284))(this, target);
	}

};

