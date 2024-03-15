#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuyDailyItemData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuyDailyItemData"));
	}

	template <typename R = int32_t> R& SlotId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = ServiceMessage> R& Result() {
		return *(R*)((uintptr_t)this + 0x4);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(BuyDailyItemData*, uintptr_t))(Il2CppBase() + 0x15B2184))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(BuyDailyItemData*, uintptr_t))(Il2CppBase() + 0x15B21D8))(this, reader);
	}

};

