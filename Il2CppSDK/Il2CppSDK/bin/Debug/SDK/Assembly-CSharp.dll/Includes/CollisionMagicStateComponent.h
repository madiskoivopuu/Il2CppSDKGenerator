#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CollisionMagicStateComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CollisionMagicStateComponent"));
	}

	template <typename T = Il2CppDictionary<int32_t, int64_t>*> T& Targets() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Clear() {
		return ((T (*)(CollisionMagicStateComponent*))(Il2CppBase() + 0xE23E30))(this);
	}

};

}
