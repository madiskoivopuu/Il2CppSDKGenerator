#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnActionStartComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnActionStartComponent"));
	}

	template <typename R = bool> R& BreakSneak() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& Magics() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(OnActionStartComponent*, Il2CppObject*))(Il2CppBase() + 0x11DC090))(this, target);
	}

};

