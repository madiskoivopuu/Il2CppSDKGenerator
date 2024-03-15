#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SlotRollObjectPool {

template <typename TData>
class IPolymorphPoolable1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SlotRollObjectPool", "IPolymorphPoolable`1"));
	}


	template <typename R = int32_t> R get_Key() {
		return ((R (*)(IPolymorphPoolable1*))(Il2CppBase() + 0x0))(this);
	}

};

}
