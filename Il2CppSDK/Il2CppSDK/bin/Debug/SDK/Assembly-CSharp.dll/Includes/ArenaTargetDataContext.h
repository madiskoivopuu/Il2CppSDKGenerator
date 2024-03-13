#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseDataContext.h" 

class ArenaTargetDataContext : public BaseDataContext<uintptr_t>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArenaTargetDataContext"));
	}

	template <typename T = int32_t> T& TargetId() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = int32_t> T get_TargetId() {
		return ((T (*)(ArenaTargetDataContext*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = GameEntity*> T GetTarget() {
		return ((T (*)(ArenaTargetDataContext*))(Il2CppBase() + 0x0))(this);
	}

};

