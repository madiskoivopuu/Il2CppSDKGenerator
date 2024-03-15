#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GradeFromLocationComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GradeFromLocationComponent"));
	}

	template <typename R = int32_t> R& Offset() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(GradeFromLocationComponent*, Il2CppObject*))(Il2CppBase() + 0x12E2058))(this, target);
	}

};

