#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PeriodComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PeriodComponent"));
	}

	template <typename T = float> T& Value() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(PeriodComponent*, Il2CppObject*))(Il2CppBase() + 0x11EA2B8))(this, targetObject);
	}

};

