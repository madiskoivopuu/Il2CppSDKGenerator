#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DailyShopStateComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DailyShopStateComponent"));
	}

	template <typename R = int64_t> R& ResetTime() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<bool>*> R& SoldSlots() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<uint8_t>*> R& Slots() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(DailyShopStateComponent*, Il2CppObject*))(Il2CppBase() + 0x1648768))(this, target);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(DailyShopStateComponent*, uintptr_t))(Il2CppBase() + 0x1648834))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(DailyShopStateComponent*, uintptr_t))(Il2CppBase() + 0x16488D4))(this, writer);
	}

};

