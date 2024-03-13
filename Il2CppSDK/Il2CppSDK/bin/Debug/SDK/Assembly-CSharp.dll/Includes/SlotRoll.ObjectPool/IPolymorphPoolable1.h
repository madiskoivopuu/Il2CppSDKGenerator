#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SlotRollObjectPool {

class IPolymorphPoolable1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SlotRollObjectPool", "IPolymorphPoolable`1"));
	}


	template <typename T = int32_t> T get_Key() {
		return ((T (*)(IPolymorphPoolable1*))(Il2CppBase() + 0x0))(this);
	}

};

}
