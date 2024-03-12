#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CheatData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CheatData"));
	}

	template <typename T = uintptr_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& Durability() {
		return *(T*)((uintptr_t)this + 0x14);
	}


};

}
