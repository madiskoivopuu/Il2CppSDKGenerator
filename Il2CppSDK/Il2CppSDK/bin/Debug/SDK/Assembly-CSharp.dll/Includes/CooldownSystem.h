#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CooldownSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CooldownSystem"));
	}

	template <typename R = ICommonContexts*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 IGroup1<CooldownEntity*>*& _cooldowns() {
		return *(IGroup1<CooldownEntity*>**)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(CooldownSystem*))(Il2CppBase() + 0x1339C98))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(CooldownSystem*))(Il2CppBase() + 0x1339D84))(this);
	}

};

