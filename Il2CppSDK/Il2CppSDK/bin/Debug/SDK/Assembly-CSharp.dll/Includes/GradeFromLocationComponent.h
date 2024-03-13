#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GradeFromLocationComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GradeFromLocationComponent"));
	}

	template <typename T = int32_t> T& Offset() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(GradeFromLocationComponent*, Il2CppObject*))(Il2CppBase() + 0x12E2058))(this, target);
	}

};

