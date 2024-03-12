#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IResetTimeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IResetTimeEntity"));
	}


	template <typename T = uintptr_t> T get_resetTime() {
		return ((T (*)(IResetTimeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasResetTime() {
		return ((T (*)(IResetTimeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddResetTime(int64_t newValue) {
		return ((T (*)(IResetTimeEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceResetTime(int64_t newValue) {
		return ((T (*)(IResetTimeEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveResetTime() {
		return ((T (*)(IResetTimeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
