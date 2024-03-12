#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LimitCachedComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LimitCachedComponent"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T& List() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
