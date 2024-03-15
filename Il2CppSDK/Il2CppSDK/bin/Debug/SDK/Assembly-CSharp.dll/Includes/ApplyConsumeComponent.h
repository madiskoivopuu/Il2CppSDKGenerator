#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyConsumeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyConsumeComponent"));
	}

	template <typename R = Il2CppArray<Resource*>*> R& Values() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(ApplyConsumeComponent*, Il2CppObject*))(Il2CppBase() + 0x18935AC))(this, targetObject);
	}

};

