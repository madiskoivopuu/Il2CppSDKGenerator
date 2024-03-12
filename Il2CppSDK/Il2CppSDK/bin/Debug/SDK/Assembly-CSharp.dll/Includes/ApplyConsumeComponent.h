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

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(ApplyConsumeComponent*, uintptr_t))(Il2CppBase() + 0x18935AC))(this, targetObject);
	}

};

}
