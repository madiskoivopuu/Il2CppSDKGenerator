#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RewardResource
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RewardResource"));
	}

	template <typename R = Il2CppString*> R& Blueprint() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& Count() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = int32_t> R& Price() {
		return *(R*)((uintptr_t)this + 0xC);
	}
	template <typename R = bool> R& DoNotShowNotification() {
		return *(R*)((uintptr_t)this + 0x10);
	}


};

