#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SlotPrefab
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SlotPrefab"));
	}

	template <typename R = uintptr_t> R& Prefab() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = ItemEntity*> R& Item() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& Fxs() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = Il2CppString*> R GetItemName() {
		return ((R (*)(SlotPrefab*))(Il2CppBase() + 0xEA8A1C))(this);
	}
	template <typename R = void> R Clear() {
		return ((R (*)(SlotPrefab*))(Il2CppBase() + 0xEA8A70))(this);
	}
	template <typename R = void> R SetFxsActive(bool active) {
		return ((R (*)(SlotPrefab*, bool))(Il2CppBase() + 0xEA8C18))(this, active);
	}

};

