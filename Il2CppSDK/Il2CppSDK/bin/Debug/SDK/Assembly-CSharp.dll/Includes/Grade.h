#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Grade
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Grade"));
	}

	template <typename T = Il2CppString*> T& Condition() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Resources() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& SlotsCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

