#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SlotPrefab
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SlotPrefab"));
	}

	template <typename T = uintptr_t> T& Prefab() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& Item() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Fxs() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(SlotPrefab*))(Il2CppBase() + 0xEA8A1C))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(SlotPrefab*))(Il2CppBase() + 0xEA8A70))(this);
	}
	template <typename T = void> T SetFxsActive(bool active) {
		return ((T (*)(SlotPrefab*, bool))(Il2CppBase() + 0xEA8C18))(this, active);
	}

};

}
