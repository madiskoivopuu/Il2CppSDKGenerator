#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CollisionMagicStateComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CollisionMagicStateComponent"));
	}

	 Il2CppDictionary<int32_t, int64_t>*& Targets() {
		return *(Il2CppDictionary<int32_t, int64_t>**)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R Clear() {
		return ((R (*)(CollisionMagicStateComponent*))(Il2CppBase() + 0xE23E30))(this);
	}

};

