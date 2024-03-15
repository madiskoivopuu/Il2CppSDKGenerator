#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CurrentPhaseComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CurrentPhaseComponent"));
	}

	template <typename R = int32_t> R& Index() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int64_t> R& NextPhaseTime() {
		return *(R*)((uintptr_t)this + 0x18);
	}


};

