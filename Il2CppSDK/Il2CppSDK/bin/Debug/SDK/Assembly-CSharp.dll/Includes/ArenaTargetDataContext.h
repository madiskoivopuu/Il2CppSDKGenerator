#pragma once
#include <Il2Cpp/Il2Cpp.h>

template <typename T>
class ArenaTargetDataContext : public BaseDataContext<T>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArenaTargetDataContext"));
	}

	template <typename R = int32_t> R& TargetId() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = int32_t> R get_TargetId() {
		return ((R (*)(ArenaTargetDataContext*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = GameEntity*> R GetTarget() {
		return ((R (*)(ArenaTargetDataContext*))(Il2CppBase() + 0x0))(this);
	}

};

