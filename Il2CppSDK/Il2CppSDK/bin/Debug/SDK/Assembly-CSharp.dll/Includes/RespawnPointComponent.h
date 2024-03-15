#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RespawnPointComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RespawnPointComponent"));
	}

	template <typename R = float> R& Range() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(RespawnPointComponent*, Il2CppObject*))(Il2CppBase() + 0x119D1E8))(this, target);
	}

};

