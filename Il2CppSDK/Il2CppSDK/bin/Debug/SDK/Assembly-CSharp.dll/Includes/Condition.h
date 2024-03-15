#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Condition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Condition"));
	}

	template <typename R = SystemType*> R& System() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& AspectMoreThen() {
		return *(R*)((uintptr_t)this + 0x14);
	}


};

