#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OldComponentLookup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OldComponentLookup"));
	}

	template <typename R = int32_t> R& Index() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& Type() {
		return *(R*)((uintptr_t)this + 0x8);
	}


};

