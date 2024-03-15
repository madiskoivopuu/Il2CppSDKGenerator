#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MimicSpawnHack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MimicSpawnHack"));
	}

	template <typename R = uintptr_t> R& _animator() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& _IsSpawnDelay() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R Start() {
		return ((R (*)(MimicSpawnHack*))(Il2CppBase() + 0x12D272C))(this);
	}
	template <typename R = uintptr_t> R IsSpawnDelay() {
		return ((R (*)(MimicSpawnHack*))(Il2CppBase() + 0x12D28C4))(this);
	}

};

