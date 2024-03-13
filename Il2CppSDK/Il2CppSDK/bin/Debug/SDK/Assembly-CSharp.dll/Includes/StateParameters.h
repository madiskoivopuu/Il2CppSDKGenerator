#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StateParameters
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StateParameters"));
	}

	template <typename T = bool> T& UseNet() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Nullable1int64_t>*> T& EndTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Nullable1bool>*> T& Success() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

