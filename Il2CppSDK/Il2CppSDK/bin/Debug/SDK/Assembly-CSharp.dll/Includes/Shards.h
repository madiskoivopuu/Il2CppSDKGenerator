#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Shards
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Shards"));
	}

	template <typename T = int32_t> T& failed() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& successful() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& total() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
