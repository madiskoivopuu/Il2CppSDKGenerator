#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass720
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass72_0"));
	}

	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& itemToMerge() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& slotId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& fromClassSlotIndex() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& toClassSlotIndex() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& toClass() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T MergeOnDropb__0() {
		return ((T (*)(cDisplayClass720*))(Il2CppBase() + 0x10B2490))(this);
	}

};

}
