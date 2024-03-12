#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ReuseList1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ReuseList`1"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& InnerList() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& Total() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& TotalCapacity() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& TotalCreated() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = int32_t> T get_Total() {
		return ((T (*)(ReuseList1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_Total(int32_t value) {
		return ((T (*)(ReuseList1*, int32_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = int32_t> T get_TotalCapacity() {
		return ((T (*)(ReuseList1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_TotalCapacity(int32_t value) {
		return ((T (*)(ReuseList1*, int32_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = int32_t> T get_TotalCreated() {
		return ((T (*)(ReuseList1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_TotalCreated(int32_t value) {
		return ((T (*)(ReuseList1*, int32_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = bool> T RemoveIndexAt(int32_t index) {
		return ((T (*)(ReuseList1*, int32_t))(Il2CppBase() + 0x0))(this, index);
	}
	template <typename T = bool> T Remove(uintptr_t what) {
		return ((T (*)(ReuseList1*, uintptr_t))(Il2CppBase() + 0x0))(this, what);
	}
	template <typename T = int32_t> T AddNewIndex() {
		return ((T (*)(ReuseList1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T Add(uintptr_t element) {
		return ((T (*)(ReuseList1*, uintptr_t))(Il2CppBase() + 0x0))(this, element);
	}
	template <typename T = uintptr_t> T get_Item(int32_t index) {
		return ((T (*)(ReuseList1*, int32_t))(Il2CppBase() + 0x0))(this, index);
	}
	template <typename T = void> T ClearIndexes() {
		return ((T (*)(ReuseList1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T FindIndex(uintptr_t what) {
		return ((T (*)(ReuseList1*, uintptr_t))(Il2CppBase() + 0x0))(this, what);
	}
	template <typename T = bool> T Contains(uintptr_t what) {
		return ((T (*)(ReuseList1*, uintptr_t))(Il2CppBase() + 0x0))(this, what);
	}

};

}
