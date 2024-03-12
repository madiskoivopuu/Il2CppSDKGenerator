#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "MountItem" 

class TraderResultItem: MountItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TraderResultItem"));
	}

	template <typename T = uintptr_t> T& _randomWithDiceIcon() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _mountSkills() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& SlotIndex() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& _defaultIndex() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& _mountFuser() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& _traderWindow() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = int32_t> T& _skillsCount() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = bool> T& _isRandomType() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = bool> T& _isRandomSkills() {
		return *(T*)((uintptr_t)this + 0xE5);
	}

	template <typename T = int32_t> T get_SlotIndex() {
		return ((T (*)(TraderResultItem*))(Il2CppBase() + 0x150F490))(this);
	}
	template <typename T = void> T set_SlotIndex(int32_t value) {
		return ((T (*)(TraderResultItem*, int32_t))(Il2CppBase() + 0x150F498))(this, value);
	}
	template <typename T = bool> T get_IsRandomItem() {
		return ((T (*)(TraderResultItem*))(Il2CppBase() + 0x150F4A0))(this);
	}
	template <typename T = void> T Bind(uintptr_t window, uintptr_t entity, int32_t slotIndex, int32_t id) {
		return ((T (*)(TraderResultItem*, uintptr_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x150F4B0))(this, window, entity, slotIndex, id);
	}
	template <typename T = void> T Bind_1(uintptr_t window, uintptr_t entity, int32_t index, uintptr_t slot, void* onArming) {
		return ((T (*)(TraderResultItem*, uintptr_t, uintptr_t, int32_t, uintptr_t, void*))(Il2CppBase() + 0x150F53C))(this, window, entity, index, slot, onArming);
	}
	template <typename T = void> T ShowFuseResult(uintptr_t result) {
		return ((T (*)(TraderResultItem*, uintptr_t))(Il2CppBase() + 0x150FB74))(this, result);
	}

};

}
