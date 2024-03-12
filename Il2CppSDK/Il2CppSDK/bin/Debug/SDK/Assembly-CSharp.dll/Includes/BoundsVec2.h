#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BoundsVec2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BoundsVec2"));
	}

	template <typename T = uintptr_t> T& Min() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& Max() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T IsOverelapedWith(uintptr_t other) {
		return ((T (*)(BoundsVec2*, uintptr_t))(Il2CppBase() + 0x15A0830))(this, other);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(BoundsVec2*))(Il2CppBase() + 0x15A086C))(this);
	}

};

}
