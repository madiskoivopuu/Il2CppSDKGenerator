#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass720
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass72_0"));
	}

	template <typename R = PlayerClassRuneInventory*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = RuneItem*> R& itemToMerge() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> R& slotId() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> R& fromClassSlotIndex() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = int32_t> R& toClassSlotIndex() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = bool> R& toClass() {
		return *(R*)((uintptr_t)this + 0x2C);
	}

	template <typename R = void> R MergeOnDropb__0() {
		return ((R (*)(cDisplayClass720*))(Il2CppBase() + 0x10B2490))(this);
	}

};

