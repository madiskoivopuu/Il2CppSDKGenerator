#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MimicSpawnHack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MimicSpawnHack"));
	}

	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& _IsSpawnDelay() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Start() {
		return ((T (*)(MimicSpawnHack*))(Il2CppBase() + 0x12D272C))(this);
	}
	template <typename T = uintptr_t> T IsSpawnDelay() {
		return ((T (*)(MimicSpawnHack*))(Il2CppBase() + 0x12D28C4))(this);
	}

};

}
