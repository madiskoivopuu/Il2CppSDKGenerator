#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FinishOnCompletedComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FinishOnCompletedComponent"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(FinishOnCompletedComponent*, Il2CppObject*))(Il2CppBase() + 0x1698B98))(this, target);
	}

};

