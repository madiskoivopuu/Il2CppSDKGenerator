#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Shards
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Shards"));
	}

	template <typename R = int32_t> R& failed() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& successful() {
		return *(R*)((uintptr_t)this + 0x4);
	}
	template <typename R = int32_t> R& total() {
		return *(R*)((uintptr_t)this + 0x8);
	}


};

