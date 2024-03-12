#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CartRequirementsContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CartRequirementsContainer"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& PrerequisiteSlots() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& CurrencyItems() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& ItemPrefab() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& DontShowBop() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = Il2CppList<uintptr_t>*> T Bind(uintptr_t window, uintptr_t entity) {
		return ((T (*)(CartRequirementsContainer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x13E8274))(this, window, entity);
	}

};

}
