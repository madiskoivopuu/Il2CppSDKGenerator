#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StateParameters
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StateParameters"));
	}

	template <typename R = bool> R& UseNet() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	 Nullable1<int64_t>*& EndTime() {
		return *(Nullable1<int64_t>**)((uintptr_t)this + 0x8);
	}
	 Nullable1<bool>*& Success() {
		return *(Nullable1<bool>**)((uintptr_t)this + 0x18);
	}


};

