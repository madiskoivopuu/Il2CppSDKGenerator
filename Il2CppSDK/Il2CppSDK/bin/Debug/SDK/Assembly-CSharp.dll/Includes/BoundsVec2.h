#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BoundsVec2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BoundsVec2"));
	}

	template <typename R = Vec2*> R& Min() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Vec2*> R& Max() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = bool> R IsOverelapedWith(BoundsVec2* other) {
		return ((R (*)(BoundsVec2*, BoundsVec2*))(Il2CppBase() + 0x15A0830))(this, other);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(BoundsVec2*))(Il2CppBase() + 0x15A086C))(this);
	}

};

