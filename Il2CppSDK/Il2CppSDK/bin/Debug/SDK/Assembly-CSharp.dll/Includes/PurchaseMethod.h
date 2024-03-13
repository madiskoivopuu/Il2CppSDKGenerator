#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PurchaseMethod
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PurchaseMethod"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = PurchaseMethod*> static T& None() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = PurchaseMethod*> static T& IAP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = PurchaseMethod*> static T& Coins() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

