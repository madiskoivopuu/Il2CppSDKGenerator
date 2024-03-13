#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuyDailyItemData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuyDailyItemData"));
	}

	template <typename T = int32_t> T& SlotId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = ServiceMessage*> T& Result() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(BuyDailyItemData*, uintptr_t))(Il2CppBase() + 0x15B2184))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(BuyDailyItemData*, uintptr_t))(Il2CppBase() + 0x15B21D8))(this, reader);
	}

};

