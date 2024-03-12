#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass680
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass68_0"));
	}

	template <typename T = uintptr_t> T& window() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& isRuneInventory() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& selectedInventoryId() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& itemsTo() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& world() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& fromClassSlotIndex() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T OnDeleteb__0(float coef) {
		return ((T (*)(cDisplayClass680*, float))(Il2CppBase() + 0x10B1EA8))(this, coef);
	}

};

}
