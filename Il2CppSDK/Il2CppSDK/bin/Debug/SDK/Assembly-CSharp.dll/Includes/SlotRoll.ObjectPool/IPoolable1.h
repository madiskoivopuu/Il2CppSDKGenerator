#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SlotRollObjectPool {

class IPoolable1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SlotRollObjectPool", "IPoolable`1"));
	}


	template <typename T = void> T Initialize(uintptr_t data) {
		return ((T (*)(IPoolable1*, uintptr_t))(Il2CppBase() + 0x0))(this, data);
	}
	template <typename T = void> T Deinitialize(uintptr_t parent) {
		return ((T (*)(IPoolable1*, uintptr_t))(Il2CppBase() + 0x0))(this, parent);
	}

};

}
