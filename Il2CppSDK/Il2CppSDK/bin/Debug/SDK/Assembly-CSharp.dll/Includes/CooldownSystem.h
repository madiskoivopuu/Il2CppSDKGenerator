#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CooldownSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CooldownSystem"));
	}

	template <typename T = ICommonContexts*> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = IGroup1CooldownEntity*>*> T& _cooldowns() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(CooldownSystem*))(Il2CppBase() + 0x1339C98))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(CooldownSystem*))(Il2CppBase() + 0x1339D84))(this);
	}

};

