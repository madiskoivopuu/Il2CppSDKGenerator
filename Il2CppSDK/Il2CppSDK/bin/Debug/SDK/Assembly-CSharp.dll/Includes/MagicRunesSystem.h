#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicRunesSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicRunesSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(MagicRunesSystem*, void*))(Il2CppBase() + 0x1AE0150))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(MagicRunesSystem*, uintptr_t))(Il2CppBase() + 0x1AE021C))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* entities) {
		return ((T (*)(MagicRunesSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1AE0238))(this, entities);
	}

};

}
