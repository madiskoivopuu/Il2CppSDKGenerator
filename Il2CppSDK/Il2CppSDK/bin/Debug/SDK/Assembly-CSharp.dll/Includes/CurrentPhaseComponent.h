#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CurrentPhaseComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CurrentPhaseComponent"));
	}

	template <typename T = int32_t> T& Index() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& NextPhaseTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

