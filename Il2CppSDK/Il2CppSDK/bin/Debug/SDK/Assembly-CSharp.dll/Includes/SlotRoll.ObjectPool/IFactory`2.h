#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SlotRollObjectPool {

class IFactory2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SlotRollObjectPool", "IFactory`2"));
	}


	template <typename T = uintptr_t> T CreateInstance(uintptr_t data, uintptr_t parent) {
		return ((T (*)(IFactory2*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, data, parent);
	}

};

}
