#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DailyShopStateComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DailyShopStateComponent"));
	}

	template <typename T = int64_t> T& ResetTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SoldSlots() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Slots() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(DailyShopStateComponent*, uintptr_t))(Il2CppBase() + 0x1648768))(this, target);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(DailyShopStateComponent*, uintptr_t))(Il2CppBase() + 0x1648834))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(DailyShopStateComponent*, uintptr_t))(Il2CppBase() + 0x16488D4))(this, writer);
	}

};

}
