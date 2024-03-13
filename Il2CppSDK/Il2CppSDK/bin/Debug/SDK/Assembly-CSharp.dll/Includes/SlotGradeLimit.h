#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SlotGradeLimit
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SlotGradeLimit"));
	}

	template <typename T = int32_t> T& Index() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& Limit() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

