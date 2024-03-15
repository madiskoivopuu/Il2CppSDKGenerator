#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SlotRollObjectPool {

template <typename TData>
class IPoolable1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SlotRollObjectPool", "IPoolable`1"));
	}


	template <typename R = void> R Initialize(TData data) {
		return ((R (*)(IPoolable1*, TData))(Il2CppBase() + 0x0))(this, data);
	}
	template <typename R = void> R Deinitialize(uintptr_t parent) {
		return ((R (*)(IPoolable1*, uintptr_t))(Il2CppBase() + 0x0))(this, parent);
	}

};

}
