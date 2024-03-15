#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IResetTimeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IResetTimeEntity"));
	}


	template <typename R = ResetTimeComponent*> R get_resetTime() {
		return ((R (*)(IResetTimeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasResetTime() {
		return ((R (*)(IResetTimeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddResetTime(int64_t newValue) {
		return ((R (*)(IResetTimeEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceResetTime(int64_t newValue) {
		return ((R (*)(IResetTimeEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveResetTime() {
		return ((R (*)(IResetTimeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

