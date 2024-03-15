#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WalletSettingComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WalletSettingComponent"));
	}

	template <typename R = bool> R& ShowEmpty() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& ShowCondition() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = WalletType> R& Type() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(WalletSettingComponent*, Il2CppObject*))(Il2CppBase() + 0x112BC18))(this, target);
	}

};

