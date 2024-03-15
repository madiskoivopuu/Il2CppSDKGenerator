#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EnrageTracker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnrageTracker"));
	}

	template <typename R = Il2CppString*> R& Icon() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Caption() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& StartTime() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& EndTime() {
		return *(R*)((uintptr_t)this + 0x24);
	}


};

