#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass690
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass69_0"));
	}

	template <typename R = PlayerClassRuneInventory*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = PlayerClassRuneInventory*> R& window() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = RuneItem*> R& freeSlot() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = bool> R& hasRemainder() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> R& selectedInventoryId() {
		return *(R*)((uintptr_t)this + 0x2C);
	}

	template <typename R = void> R OnMergeb__0(float coef) {
		return ((R (*)(cDisplayClass690*, float))(Il2CppBase() + 0x10B2358))(this, coef);
	}

};

