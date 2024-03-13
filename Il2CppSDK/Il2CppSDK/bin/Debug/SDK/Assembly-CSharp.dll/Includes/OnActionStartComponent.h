#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnActionStartComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnActionStartComponent"));
	}

	template <typename T = bool> T& BreakSneak() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Magics() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(OnActionStartComponent*, Il2CppObject*))(Il2CppBase() + 0x11DC090))(this, target);
	}

};

