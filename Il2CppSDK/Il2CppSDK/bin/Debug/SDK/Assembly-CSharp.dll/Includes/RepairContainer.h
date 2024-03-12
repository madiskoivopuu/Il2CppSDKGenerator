#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RepairContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RepairContainer"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& InventorySlots() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& ItemPrefab() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Grid() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& ResultItem() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _window() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _entity() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Bind(uintptr_t window, uintptr_t entity) {
		return ((T (*)(RepairContainer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x13A3020))(this, window, entity);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(RepairContainer*, float))(Il2CppBase() + 0x13A3658))(this, deltaTime);
	}

};

}
