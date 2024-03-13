#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RollChestRewardRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RollChestRewardRequest"));
	}

	template <typename T = int32_t> T& TargetId() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(RollChestRewardRequest*, uintptr_t))(Il2CppBase() + 0x11A2A80))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(RollChestRewardRequest*, uintptr_t))(Il2CppBase() + 0x11A2AC4))(this, reader);
	}

};

