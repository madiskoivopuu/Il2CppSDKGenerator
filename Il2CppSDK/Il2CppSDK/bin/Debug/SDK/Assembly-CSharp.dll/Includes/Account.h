#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Account
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Account"));
	}

	template <typename T = uintptr_t> T& Status() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& BattleTag() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Level() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Account*))(Il2CppBase() + 0xE9419C))(this);
	}

};

}
