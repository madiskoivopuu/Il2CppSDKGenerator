#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShieldViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShieldViewSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R Execute() {
		return ((R (*)(ShieldViewSystem*))(Il2CppBase() + 0x1630708))(this);
	}

};

