#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "MountItem" 

class TraderMountItem: MountItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TraderMountItem"));
	}

	template <typename T = int32_t> T& SlotIndex() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& _mountFuser() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = int32_t> T get_SlotIndex() {
		return ((T (*)(TraderMountItem*))(Il2CppBase() + 0x150EC9C))(this);
	}
	template <typename T = void> T set_SlotIndex(int32_t value) {
		return ((T (*)(TraderMountItem*, int32_t))(Il2CppBase() + 0x150ECA4))(this, value);
	}
	template <typename T = void> T Bind(uintptr_t window, uintptr_t entity, int32_t index, uintptr_t slot) {
		return ((T (*)(TraderMountItem*, uintptr_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x150ECAC))(this, window, entity, index, slot);
	}
	template <typename T = void> T Bind_1(uintptr_t window, uintptr_t entity, int32_t index, uintptr_t slot, void* onArming) {
		return ((T (*)(TraderMountItem*, uintptr_t, uintptr_t, int32_t, uintptr_t, void*))(Il2CppBase() + 0x150ED24))(this, window, entity, index, slot, onArming);
	}
	template <typename T = void> T ChangeMountInventoryId(int32_t mountInventoryId, Il2CppString* blueprint, int32_t index, int32_t id) {
		return ((T (*)(TraderMountItem*, int32_t, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x150F034))(this, mountInventoryId, blueprint, index, id);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(TraderMountItem*, float))(Il2CppBase() + 0x150F140))(this, deltaTime);
	}
	template <typename T = void> T Lock(bool visual) {
		return ((T (*)(TraderMountItem*, bool))(Il2CppBase() + 0x150F330))(this, visual);
	}
	template <typename T = void> T Unlock(bool visual) {
		return ((T (*)(TraderMountItem*, bool))(Il2CppBase() + 0x150F3DC))(this, visual);
	}

};

}
