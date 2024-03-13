#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyConsumeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyConsumeComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Values() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(ApplyConsumeComponent*, Il2CppObject*))(Il2CppBase() + 0x18935AC))(this, targetObject);
	}

};

