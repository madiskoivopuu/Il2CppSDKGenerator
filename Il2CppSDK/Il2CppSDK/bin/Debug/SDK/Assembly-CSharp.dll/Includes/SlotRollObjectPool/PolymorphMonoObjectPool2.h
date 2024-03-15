#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SlotRollObjectPool {

template <typename TData, typename TPoolable>
class PolymorphMonoObjectPool2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SlotRollObjectPool", "PolymorphMonoObjectPool`2"));
	}

	 Il2CppDictionary<int32_t, Stack1TPoolable>*>*& contentPool() {
		return *(Il2CppDictionary<int32_t, Stack1TPoolable>*>**)((uintptr_t)this + 0x0);
	}
	 IFactory2TPoolable, TData>*& factory() {
		return *(IFactory2TPoolable, TData>**)((uintptr_t)this + 0x0);
	}

	 TPoolable Pop(TData data, uintptr_t parent) {
		return ((TPoolable (*)(PolymorphMonoObjectPool2*, TData, uintptr_t))(Il2CppBase() + 0x0))(this, data, parent);
	}
	 TPoolable Pop_1(Stack1TPoolable>* stack, TData data, uintptr_t parent) {
		return ((TPoolable (*)(PolymorphMonoObjectPool2*, Stack1TPoolable>*, TData, uintptr_t))(Il2CppBase() + 0x0))(this, stack, data, parent);
	}
	template <typename R = void> R Pool(TPoolable poolable) {
		return ((R (*)(PolymorphMonoObjectPool2*, TPoolable))(Il2CppBase() + 0x0))(this, poolable);
	}
	template <typename R = void> R Pool_1(Stack1TPoolable>* stack, TPoolable poolable) {
		return ((R (*)(PolymorphMonoObjectPool2*, Stack1TPoolable>*, TPoolable))(Il2CppBase() + 0x0))(this, stack, poolable);
	}
	 TPoolable CreateNewInstance(TData data, uintptr_t parent) {
		return ((TPoolable (*)(PolymorphMonoObjectPool2*, TData, uintptr_t))(Il2CppBase() + 0x0))(this, data, parent);
	}

};

}
