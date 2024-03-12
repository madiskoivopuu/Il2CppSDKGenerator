#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RemoveInactiveContactSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RemoveInactiveContactSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& _contacts() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(RemoveInactiveContactSystem*))(Il2CppBase() + 0x13A0564))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(RemoveInactiveContactSystem*))(Il2CppBase() + 0x13A0654))(this);
	}

};

}
