#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AFKTriggerComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AFKTriggerComponent"));
	}

	template <typename R = bool> R& Move() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(AFKTriggerComponent*, Il2CppObject*))(Il2CppBase() + 0x1D95984))(this, targetObject);
	}

};

