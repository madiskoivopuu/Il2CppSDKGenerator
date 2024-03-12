#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SlotRoll {

class Slot1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SlotRoll", "Slot`1"));
	}

	template <typename T = void*> T& addAction() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& removeAction() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& rollAction() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& pool() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& OnAdded() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& OnRemoved() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& OnRolledUp() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& Content() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& isEmpty() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& IsBlocked() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T add_OnAdded(void* value) {
		return ((T (*)(Slot1*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnAdded(void* value) {
		return ((T (*)(Slot1*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnRemoved(void* value) {
		return ((T (*)(Slot1*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnRemoved(void* value) {
		return ((T (*)(Slot1*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnRolledUp(void* value) {
		return ((T (*)(Slot1*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnRolledUp(void* value) {
		return ((T (*)(Slot1*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void*> T get_Content() {
		return ((T (*)(Slot1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_Content(void* value) {
		return ((T (*)(Slot1*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = int32_t> T get_Index() {
		return ((T (*)(Slot1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_IsEmpty() {
		return ((T (*)(Slot1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_IsBlocked() {
		return ((T (*)(Slot1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_IsBlocked(bool value) {
		return ((T (*)(Slot1*, bool))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T Initialize(void* addAction, void* removeAction, void* rollAction, void* pool, int32_t index) {
		return ((T (*)(Slot1*, void*, void*, void*, void*, int32_t))(Il2CppBase() + 0x0))(this, addAction, removeAction, rollAction, pool, index);
	}
	template <typename T = void> T Fill(uintptr_t content) {
		return ((T (*)(Slot1*, uintptr_t))(Il2CppBase() + 0x0))(this, content);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(Slot1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T RollUp() {
		return ((T (*)(Slot1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T FillHard(void* content) {
		return ((T (*)(Slot1*, void*))(Il2CppBase() + 0x0))(this, content);
	}
	template <typename T = void*> T ClearHard() {
		return ((T (*)(Slot1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T StartAdding(void* content, void* onComplete) {
		return ((T (*)(Slot1*, void*, void*))(Il2CppBase() + 0x0))(this, content, onComplete);
	}
	template <typename T = void> T StartRemoving(void* content, void* onComplete) {
		return ((T (*)(Slot1*, void*, void*))(Il2CppBase() + 0x0))(this, content, onComplete);
	}
	template <typename T = void> T StartRolling(void* content, void* onComplete) {
		return ((T (*)(Slot1*, void*, void*))(Il2CppBase() + 0x0))(this, content, onComplete);
	}
	template <typename T = void*> T CreateContent(uintptr_t data) {
		return ((T (*)(Slot1*, uintptr_t))(Il2CppBase() + 0x0))(this, data);
	}
	template <typename T = void> T DisposeContent(void* content) {
		return ((T (*)(Slot1*, void*))(Il2CppBase() + 0x0))(this, content);
	}
	template <typename T = void> T Fillb__28_0(void* c) {
		return ((T (*)(Slot1*, void*))(Il2CppBase() + 0x0))(this, c);
	}
	template <typename T = void> T Clearb__29_0(void* c) {
		return ((T (*)(Slot1*, void*))(Il2CppBase() + 0x0))(this, c);
	}
	template <typename T = void> T RollUpb__30_0(void* c) {
		return ((T (*)(Slot1*, void*))(Il2CppBase() + 0x0))(this, c);
	}

};

}
