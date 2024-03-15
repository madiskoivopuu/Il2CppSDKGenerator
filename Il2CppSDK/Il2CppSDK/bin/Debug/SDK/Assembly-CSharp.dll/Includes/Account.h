#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Account
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Account"));
	}

	template <typename R = AccountStatus> R& Status() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& BattleTag() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& Level() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(Account*))(Il2CppBase() + 0xE9419C))(this);
	}

};

