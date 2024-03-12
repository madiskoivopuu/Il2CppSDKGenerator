#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SlotRollObjectPool {

class SimpleMonoObjectPool2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SlotRollObjectPool", "SimpleMonoObjectPool`2"));
	}

	template <typename T = void*> T& pool() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& factory() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T Pop(uintptr_t data, uintptr_t parent) {
		return ((T (*)(SimpleMonoObjectPool2*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, data, parent);
	}
	template <typename T = void> T Pool(uintptr_t poolable) {
		return ((T (*)(SimpleMonoObjectPool2*, uintptr_t))(Il2CppBase() + 0x0))(this, poolable);
	}
	template <typename T = void> T Pool_1(uintptr_t poolable, uintptr_t parent) {
		return ((T (*)(SimpleMonoObjectPool2*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, poolable, parent);
	}
	template <typename T = uintptr_t> T CreateNewInstance(uintptr_t data, uintptr_t parent) {
		return ((T (*)(SimpleMonoObjectPool2*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, data, parent);
	}

};

}
