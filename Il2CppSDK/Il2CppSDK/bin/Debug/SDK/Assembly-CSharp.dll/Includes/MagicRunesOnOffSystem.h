#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicRunesOnOffSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicRunesOnOffSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(MagicRunesOnOffSystem*, void*))(Il2CppBase() + 0x1ADFB0C))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t modifier) {
		return ((T (*)(MagicRunesOnOffSystem*, uintptr_t))(Il2CppBase() + 0x1ADFBD8))(this, modifier);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* modifiers) {
		return ((T (*)(MagicRunesOnOffSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1ADFBF4))(this, modifiers);
	}

};

}
