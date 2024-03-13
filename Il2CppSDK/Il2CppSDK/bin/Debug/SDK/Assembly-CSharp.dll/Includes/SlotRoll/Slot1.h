#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SlotRoll {

class Slot1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SlotRoll", "Slot`1"));
	}

	template <typename T = Action2Content1uintptr_t>*, Action1Content1uintptr_t>*>*>*> T& addAction() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Action2Content1uintptr_t>*, Action1Content1uintptr_t>*>*>*> T& removeAction() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Action2Content1uintptr_t>*, Action1Content1uintptr_t>*>*>*> T& rollAction() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = PolymorphMonoObjectPool2uintptr_t, Content1uintptr_t>*>*> T& pool() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Action1Content1uintptr_t>*>*> T& OnAdded() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Action1Content1uintptr_t>*>*> T& OnRemoved() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Action1Content1uintptr_t>*>*> T& OnRolledUp() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Content1uintptr_t>*> T& Content() {
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

	template <typename T = void> T add_OnAdded(Action1Content1uintptr_t>*>* value) {
		return ((T (*)(Slot1*, Action1Content1uintptr_t>*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnAdded(Action1Content1uintptr_t>*>* value) {
		return ((T (*)(Slot1*, Action1Content1uintptr_t>*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnRemoved(Action1Content1uintptr_t>*>* value) {
		return ((T (*)(Slot1*, Action1Content1uintptr_t>*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnRemoved(Action1Content1uintptr_t>*>* value) {
		return ((T (*)(Slot1*, Action1Content1uintptr_t>*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnRolledUp(Action1Content1uintptr_t>*>* value) {
		return ((T (*)(Slot1*, Action1Content1uintptr_t>*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnRolledUp(Action1Content1uintptr_t>*>* value) {
		return ((T (*)(Slot1*, Action1Content1uintptr_t>*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = Content1uintptr_t>*> T get_Content() {
		return ((T (*)(Slot1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_Content(Content1uintptr_t>* value) {
		return ((T (*)(Slot1*, Content1uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
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
	template <typename T = void> T Initialize(Action2Content1uintptr_t>*, Action1Content1uintptr_t>*>*>* addAction, Action2Content1uintptr_t>*, Action1Content1uintptr_t>*>*>* removeAction, Action2Content1uintptr_t>*, Action1Content1uintptr_t>*>*>* rollAction, PolymorphMonoObjectPool2uintptr_t, Content1uintptr_t>*>* pool, int32_t index) {
		return ((T (*)(Slot1*, Action2Content1uintptr_t>*, Action1Content1uintptr_t>*>*>*, Action2Content1uintptr_t>*, Action1Content1uintptr_t>*>*>*, Action2Content1uintptr_t>*, Action1Content1uintptr_t>*>*>*, PolymorphMonoObjectPool2uintptr_t, Content1uintptr_t>*>*, int32_t))(Il2CppBase() + 0x0))(this, addAction, removeAction, rollAction, pool, index);
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
	template <typename T = void> T FillHard(Content1uintptr_t>* content) {
		return ((T (*)(Slot1*, Content1uintptr_t>*))(Il2CppBase() + 0x0))(this, content);
	}
	template <typename T = Content1uintptr_t>*> T ClearHard() {
		return ((T (*)(Slot1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T StartAdding(Content1uintptr_t>* content, Action1Content1uintptr_t>*>* onComplete) {
		return ((T (*)(Slot1*, Content1uintptr_t>*, Action1Content1uintptr_t>*>*))(Il2CppBase() + 0x0))(this, content, onComplete);
	}
	template <typename T = void> T StartRemoving(Content1uintptr_t>* content, Action1Content1uintptr_t>*>* onComplete) {
		return ((T (*)(Slot1*, Content1uintptr_t>*, Action1Content1uintptr_t>*>*))(Il2CppBase() + 0x0))(this, content, onComplete);
	}
	template <typename T = void> T StartRolling(Content1uintptr_t>* content, Action1Content1uintptr_t>*>* onComplete) {
		return ((T (*)(Slot1*, Content1uintptr_t>*, Action1Content1uintptr_t>*>*))(Il2CppBase() + 0x0))(this, content, onComplete);
	}
	template <typename T = Content1uintptr_t>*> T CreateContent(uintptr_t data) {
		return ((T (*)(Slot1*, uintptr_t))(Il2CppBase() + 0x0))(this, data);
	}
	template <typename T = void> T DisposeContent(Content1uintptr_t>* content) {
		return ((T (*)(Slot1*, Content1uintptr_t>*))(Il2CppBase() + 0x0))(this, content);
	}
	template <typename T = void> T Fillb__28_0(Content1uintptr_t>* c) {
		return ((T (*)(Slot1*, Content1uintptr_t>*))(Il2CppBase() + 0x0))(this, c);
	}
	template <typename T = void> T Clearb__29_0(Content1uintptr_t>* c) {
		return ((T (*)(Slot1*, Content1uintptr_t>*))(Il2CppBase() + 0x0))(this, c);
	}
	template <typename T = void> T RollUpb__30_0(Content1uintptr_t>* c) {
		return ((T (*)(Slot1*, Content1uintptr_t>*))(Il2CppBase() + 0x0))(this, c);
	}

};

}
