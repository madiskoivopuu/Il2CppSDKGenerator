#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SlotRoll {

template <typename TData>
class Slot1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SlotRoll", "Slot`1"));
	}

	 Action2Content1TData>*, Action1Content1TData>*>*>*& addAction() {
		return *(Action2Content1TData>*, Action1Content1TData>*>*>**)((uintptr_t)this + 0x0);
	}
	 Action2Content1TData>*, Action1Content1TData>*>*>*& removeAction() {
		return *(Action2Content1TData>*, Action1Content1TData>*>*>**)((uintptr_t)this + 0x0);
	}
	 Action2Content1TData>*, Action1Content1TData>*>*>*& rollAction() {
		return *(Action2Content1TData>*, Action1Content1TData>*>*>**)((uintptr_t)this + 0x0);
	}
	 PolymorphMonoObjectPool2TData, Content1TData>*>*& pool() {
		return *(PolymorphMonoObjectPool2TData, Content1TData>*>**)((uintptr_t)this + 0x0);
	}
	 Action1Content1TData>*>*& OnAdded() {
		return *(Action1Content1TData>*>**)((uintptr_t)this + 0x0);
	}
	 Action1Content1TData>*>*& OnRemoved() {
		return *(Action1Content1TData>*>**)((uintptr_t)this + 0x0);
	}
	 Action1Content1TData>*>*& OnRolledUp() {
		return *(Action1Content1TData>*>**)((uintptr_t)this + 0x0);
	}
	 Content1TData>*& Content() {
		return *(Content1TData>**)((uintptr_t)this + 0x0);
	}
	template <typename R = bool> R& isEmpty() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& index() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = bool> R& IsBlocked() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R add_OnAdded(Action1Content1TData>*>* value) {
		return ((R (*)(Slot1*, Action1Content1TData>*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnAdded(Action1Content1TData>*>* value) {
		return ((R (*)(Slot1*, Action1Content1TData>*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnRemoved(Action1Content1TData>*>* value) {
		return ((R (*)(Slot1*, Action1Content1TData>*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnRemoved(Action1Content1TData>*>* value) {
		return ((R (*)(Slot1*, Action1Content1TData>*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnRolledUp(Action1Content1TData>*>* value) {
		return ((R (*)(Slot1*, Action1Content1TData>*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnRolledUp(Action1Content1TData>*>* value) {
		return ((R (*)(Slot1*, Action1Content1TData>*>*))(Il2CppBase() + 0x0))(this, value);
	}
	 Content1TData>* get_Content() {
		return ((Content1TData>* (*)(Slot1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_Content(Content1TData>* value) {
		return ((R (*)(Slot1*, Content1TData>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = int32_t> R get_Index() {
		return ((R (*)(Slot1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_IsEmpty() {
		return ((R (*)(Slot1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_IsBlocked() {
		return ((R (*)(Slot1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_IsBlocked(bool value) {
		return ((R (*)(Slot1*, bool))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R Initialize(Action2Content1TData>*, Action1Content1TData>*>*>* addAction, Action2Content1TData>*, Action1Content1TData>*>*>* removeAction, Action2Content1TData>*, Action1Content1TData>*>*>* rollAction, PolymorphMonoObjectPool2TData, Content1TData>*>* pool, int32_t index) {
		return ((R (*)(Slot1*, Action2Content1TData>*, Action1Content1TData>*>*>*, Action2Content1TData>*, Action1Content1TData>*>*>*, Action2Content1TData>*, Action1Content1TData>*>*>*, PolymorphMonoObjectPool2TData, Content1TData>*>*, int32_t))(Il2CppBase() + 0x0))(this, addAction, removeAction, rollAction, pool, index);
	}
	template <typename R = void> R Fill(TData content) {
		return ((R (*)(Slot1*, TData))(Il2CppBase() + 0x0))(this, content);
	}
	template <typename R = void> R Clear() {
		return ((R (*)(Slot1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R RollUp() {
		return ((R (*)(Slot1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R FillHard(Content1TData>* content) {
		return ((R (*)(Slot1*, Content1TData>*))(Il2CppBase() + 0x0))(this, content);
	}
	 Content1TData>* ClearHard() {
		return ((Content1TData>* (*)(Slot1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R StartAdding(Content1TData>* content, Action1Content1TData>*>* onComplete) {
		return ((R (*)(Slot1*, Content1TData>*, Action1Content1TData>*>*))(Il2CppBase() + 0x0))(this, content, onComplete);
	}
	template <typename R = void> R StartRemoving(Content1TData>* content, Action1Content1TData>*>* onComplete) {
		return ((R (*)(Slot1*, Content1TData>*, Action1Content1TData>*>*))(Il2CppBase() + 0x0))(this, content, onComplete);
	}
	template <typename R = void> R StartRolling(Content1TData>* content, Action1Content1TData>*>* onComplete) {
		return ((R (*)(Slot1*, Content1TData>*, Action1Content1TData>*>*))(Il2CppBase() + 0x0))(this, content, onComplete);
	}
	 Content1TData>* CreateContent(TData data) {
		return ((Content1TData>* (*)(Slot1*, TData))(Il2CppBase() + 0x0))(this, data);
	}
	template <typename R = void> R DisposeContent(Content1TData>* content) {
		return ((R (*)(Slot1*, Content1TData>*))(Il2CppBase() + 0x0))(this, content);
	}
	template <typename R = void> R Fillb__28_0(Content1TData>* c) {
		return ((R (*)(Slot1*, Content1TData>*))(Il2CppBase() + 0x0))(this, c);
	}
	template <typename R = void> R Clearb__29_0(Content1TData>* c) {
		return ((R (*)(Slot1*, Content1TData>*))(Il2CppBase() + 0x0))(this, c);
	}
	template <typename R = void> R RollUpb__30_0(Content1TData>* c) {
		return ((R (*)(Slot1*, Content1TData>*))(Il2CppBase() + 0x0))(this, c);
	}

};

}
