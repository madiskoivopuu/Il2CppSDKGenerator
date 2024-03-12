#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RewardResource
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RewardResource"));
	}

	template <typename T = Il2CppString*> T& Blueprint() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& Price() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& DoNotShowNotification() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
