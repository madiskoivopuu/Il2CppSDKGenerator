#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Grade
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Grade"));
	}

	template <typename R = Il2CppString*> R& Condition() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppArray<Resource>*> R& Resources() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = int32_t> R& SlotsCount() {
		return *(R*)((uintptr_t)this + 0x10);
	}


};

