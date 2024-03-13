#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass690
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass69_0"));
	}

	template <typename T = PlayerClassRuneInventory*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = PlayerClassRuneInventory*> T& window() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = RuneItem*> T& freeSlot() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& hasRemainder() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& selectedInventoryId() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T OnMergeb__0(float coef) {
		return ((T (*)(cDisplayClass690*, float))(Il2CppBase() + 0x10B2358))(this, coef);
	}

};

