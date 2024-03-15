#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PocketState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PocketState"));
	}

	template <typename R = int32_t> R& AttackCount() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& Count() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = int64_t> R& NextUseTime() {
		return *(R*)((uintptr_t)this + 0x18);
	}


};

