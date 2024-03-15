#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SlotRoll {

template <typename TData>
class SlotRoll1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SlotRoll", "SlotRoll`1"));
	}

	 Il2CppList<Slot1TData>*>*& slots() {
		return *(Il2CppList<Slot1TData>*>**)((uintptr_t)this + 0x0);
	}
	 Queue1TData>*& pendingContents() {
		return *(Queue1TData>**)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& addedCount() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	 Queue1Content1TData>*>*& removeQueue() {
		return *(Queue1Content1TData>*>**)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& rolledItemsCounter() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = bool> R& IsRolledNow() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = bool> R& IsClearedNow() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = bool> R get_IsAnimatedNow() {
		return ((R (*)(SlotRoll1*))(Il2CppBase() + 0x0))(this);
	}
	 Il2CppList<Slot1TData>*>* get_Slots() {
		return ((Il2CppList<Slot1TData>*>* (*)(SlotRoll1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = int32_t> R get_Size() {
		return ((R (*)(SlotRoll1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = int32_t> R GetLastEmptySlot() {
		return ((R (*)(SlotRoll1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddContent(TData content) {
		return ((R (*)(SlotRoll1*, TData))(Il2CppBase() + 0x0))(this, content);
	}
	template <typename R = void> R RemoveContent(int32_t index) {
		return ((R (*)(SlotRoll1*, int32_t))(Il2CppBase() + 0x0))(this, index);
	}
	template <typename R = int32_t> R GetLastEmptySlotRecursively(int32_t index) {
		return ((R (*)(SlotRoll1*, int32_t))(Il2CppBase() + 0x0))(this, index);
	}
	template <typename R = int32_t> R GetFirstSpace() {
		return ((R (*)(SlotRoll1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = int32_t> R GetFirstSpaceRecursively(int32_t index, int32_t lastEmpty) {
		return ((R (*)(SlotRoll1*, int32_t, int32_t))(Il2CppBase() + 0x0))(this, index, lastEmpty);
	}
	template <typename R = void> R OnSlotCleared(Content1TData>* content) {
		return ((R (*)(SlotRoll1*, Content1TData>*))(Il2CppBase() + 0x0))(this, content);
	}
	template <typename R = bool> R TryToRoll() {
		return ((R (*)(SlotRoll1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R OnSlotRolledUp(Content1TData>* content) {
		return ((R (*)(SlotRoll1*, Content1TData>*))(Il2CppBase() + 0x0))(this, content);
	}
	template <typename R = void> R TryToAdvance() {
		return ((R (*)(SlotRoll1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R OnStabilized() {
		return ((R (*)(SlotRoll1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R TryToDequeuePendingToRemove() {
		return ((R (*)(SlotRoll1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R OnSlotAdded(Content1TData>* content) {
		return ((R (*)(SlotRoll1*, Content1TData>*))(Il2CppBase() + 0x0))(this, content);
	}
	template <typename R = bool> R TryToDequeuePendingToAdd() {
		return ((R (*)(SlotRoll1*))(Il2CppBase() + 0x0))(this);
	}

};

}
