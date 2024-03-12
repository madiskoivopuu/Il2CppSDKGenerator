#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreData"));
	}

	template <typename T = uintptr_t> T& Tooltip() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& Messages() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
