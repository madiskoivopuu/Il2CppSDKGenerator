#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WalletSettingComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WalletSettingComponent"));
	}

	template <typename T = bool> T& ShowEmpty() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& ShowCondition() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(WalletSettingComponent*, uintptr_t))(Il2CppBase() + 0x112BC18))(this, target);
	}

};

}
