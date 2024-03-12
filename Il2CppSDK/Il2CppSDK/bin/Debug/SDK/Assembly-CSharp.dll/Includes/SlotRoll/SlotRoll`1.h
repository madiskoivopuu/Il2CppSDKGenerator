#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SlotRoll {

class SlotRoll1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SlotRoll", "SlotRoll`1"));
	}

	template <typename T = Il2CppList<void*>*> T& slots() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& pendingContents() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& addedCount() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& removeQueue() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& rolledItemsCounter() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& IsRolledNow() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& IsClearedNow() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = bool> T get_IsAnimatedNow() {
		return ((T (*)(SlotRoll1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppList<void*>*> T get_Slots() {
		return ((T (*)(SlotRoll1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_Size() {
		return ((T (*)(SlotRoll1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T GetLastEmptySlot() {
		return ((T (*)(SlotRoll1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddContent(uintptr_t content) {
		return ((T (*)(SlotRoll1*, uintptr_t))(Il2CppBase() + 0x0))(this, content);
	}
	template <typename T = void> T RemoveContent(int32_t index) {
		return ((T (*)(SlotRoll1*, int32_t))(Il2CppBase() + 0x0))(this, index);
	}
	template <typename T = int32_t> T GetLastEmptySlotRecursively(int32_t index) {
		return ((T (*)(SlotRoll1*, int32_t))(Il2CppBase() + 0x0))(this, index);
	}
	template <typename T = int32_t> T GetFirstSpace() {
		return ((T (*)(SlotRoll1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T GetFirstSpaceRecursively(int32_t index, int32_t lastEmpty) {
		return ((T (*)(SlotRoll1*, int32_t, int32_t))(Il2CppBase() + 0x0))(this, index, lastEmpty);
	}
	template <typename T = void> T OnSlotCleared(void* content) {
		return ((T (*)(SlotRoll1*, void*))(Il2CppBase() + 0x0))(this, content);
	}
	template <typename T = bool> T TryToRoll() {
		return ((T (*)(SlotRoll1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnSlotRolledUp(void* content) {
		return ((T (*)(SlotRoll1*, void*))(Il2CppBase() + 0x0))(this, content);
	}
	template <typename T = void> T TryToAdvance() {
		return ((T (*)(SlotRoll1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnStabilized() {
		return ((T (*)(SlotRoll1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T TryToDequeuePendingToRemove() {
		return ((T (*)(SlotRoll1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnSlotAdded(void* content) {
		return ((T (*)(SlotRoll1*, void*))(Il2CppBase() + 0x0))(this, content);
	}
	template <typename T = bool> T TryToDequeuePendingToAdd() {
		return ((T (*)(SlotRoll1*))(Il2CppBase() + 0x0))(this);
	}

};

}
