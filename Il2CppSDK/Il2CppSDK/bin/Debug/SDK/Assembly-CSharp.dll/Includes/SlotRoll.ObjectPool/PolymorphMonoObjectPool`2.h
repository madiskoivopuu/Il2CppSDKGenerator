#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SlotRollObjectPool {

class PolymorphMonoObjectPool2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SlotRollObjectPool", "PolymorphMonoObjectPool`2"));
	}

	template <typename T = Il2CppDictionary<int32_t, void*>*> T& contentPool() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& factory() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T Pop(uintptr_t data, uintptr_t parent) {
		return ((T (*)(PolymorphMonoObjectPool2*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, data, parent);
	}
	template <typename T = uintptr_t> T Pop_1(void* stack, uintptr_t data, uintptr_t parent) {
		return ((T (*)(PolymorphMonoObjectPool2*, void*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, stack, data, parent);
	}
	template <typename T = void> T Pool(uintptr_t poolable) {
		return ((T (*)(PolymorphMonoObjectPool2*, uintptr_t))(Il2CppBase() + 0x0))(this, poolable);
	}
	template <typename T = void> T Pool_1(void* stack, uintptr_t poolable) {
		return ((T (*)(PolymorphMonoObjectPool2*, void*, uintptr_t))(Il2CppBase() + 0x0))(this, stack, poolable);
	}
	template <typename T = uintptr_t> T CreateNewInstance(uintptr_t data, uintptr_t parent) {
		return ((T (*)(PolymorphMonoObjectPool2*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, data, parent);
	}

};

}
