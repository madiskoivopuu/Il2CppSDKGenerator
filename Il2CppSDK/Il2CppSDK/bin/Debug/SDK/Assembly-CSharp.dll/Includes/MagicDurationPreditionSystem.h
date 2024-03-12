#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicDurationPreditionSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicDurationPreditionSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& _magics() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(MagicDurationPreditionSystem*))(Il2CppBase() + 0x1ACE044))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(MagicDurationPreditionSystem*))(Il2CppBase() + 0x1ACE42C))(this);
	}

};

}
