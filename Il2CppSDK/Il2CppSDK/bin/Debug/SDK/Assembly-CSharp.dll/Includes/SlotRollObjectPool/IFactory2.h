#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SlotRollObjectPool {

template <typename TCreateble, typename TData>
class IFactory2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SlotRollObjectPool", "IFactory`2"));
	}


	 TCreateble CreateInstance(TData data, uintptr_t parent) {
		return ((TCreateble (*)(IFactory2*, TData, uintptr_t))(Il2CppBase() + 0x0))(this, data, parent);
	}

};

}
