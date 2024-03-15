#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SlotRollObjectPool {

template <typename TData, typename TPoolable>
class SimpleMonoObjectPool2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SlotRollObjectPool", "SimpleMonoObjectPool`2"));
	}

	 Stack1TPoolable>*& pool() {
		return *(Stack1TPoolable>**)((uintptr_t)this + 0x0);
	}
	 IFactory2TPoolable, TData>*& factory() {
		return *(IFactory2TPoolable, TData>**)((uintptr_t)this + 0x0);
	}

	 TPoolable Pop(TData data, uintptr_t parent) {
		return ((TPoolable (*)(SimpleMonoObjectPool2*, TData, uintptr_t))(Il2CppBase() + 0x0))(this, data, parent);
	}
	template <typename R = void> R Pool(TPoolable poolable) {
		return ((R (*)(SimpleMonoObjectPool2*, TPoolable))(Il2CppBase() + 0x0))(this, poolable);
	}
	template <typename R = void> R Pool_1(TPoolable poolable, uintptr_t parent) {
		return ((R (*)(SimpleMonoObjectPool2*, TPoolable, uintptr_t))(Il2CppBase() + 0x0))(this, poolable, parent);
	}
	 TPoolable CreateNewInstance(TData data, uintptr_t parent) {
		return ((TPoolable (*)(SimpleMonoObjectPool2*, TData, uintptr_t))(Il2CppBase() + 0x0))(this, data, parent);
	}

};

}
