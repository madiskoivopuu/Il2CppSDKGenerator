#pragma once
#include <Il2Cpp/Il2Cpp.h>

template <typename T>
class ReuseList1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ReuseList`1"));
	}

	 Il2CppArray<T>*& InnerList() {
		return *(Il2CppArray<T>**)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& Total() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& TotalCapacity() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& TotalCreated() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = int32_t> R get_Total() {
		return ((R (*)(ReuseList1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_Total(int32_t value) {
		return ((R (*)(ReuseList1*, int32_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = int32_t> R get_TotalCapacity() {
		return ((R (*)(ReuseList1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_TotalCapacity(int32_t value) {
		return ((R (*)(ReuseList1*, int32_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = int32_t> R get_TotalCreated() {
		return ((R (*)(ReuseList1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_TotalCreated(int32_t value) {
		return ((R (*)(ReuseList1*, int32_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = bool> R RemoveIndexAt(int32_t index) {
		return ((R (*)(ReuseList1*, int32_t))(Il2CppBase() + 0x0))(this, index);
	}
	template <typename R = bool> R Remove(T what) {
		return ((R (*)(ReuseList1*, T))(Il2CppBase() + 0x0))(this, what);
	}
	template <typename R = int32_t> R AddNewIndex() {
		return ((R (*)(ReuseList1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = int32_t> R Add(T element) {
		return ((R (*)(ReuseList1*, T))(Il2CppBase() + 0x0))(this, element);
	}
	 T get_Item(int32_t index) {
		return ((T (*)(ReuseList1*, int32_t))(Il2CppBase() + 0x0))(this, index);
	}
	template <typename R = void> R ClearIndexes() {
		return ((R (*)(ReuseList1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = int32_t> R FindIndex(T what) {
		return ((R (*)(ReuseList1*, T))(Il2CppBase() + 0x0))(this, what);
	}
	template <typename R = bool> R Contains(T what) {
		return ((R (*)(ReuseList1*, T))(Il2CppBase() + 0x0))(this, what);
	}

};

