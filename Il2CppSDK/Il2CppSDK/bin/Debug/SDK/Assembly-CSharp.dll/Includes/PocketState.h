#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PocketState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PocketState"));
	}

	template <typename T = int32_t> T& AttackCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int64_t> T& NextUseTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

