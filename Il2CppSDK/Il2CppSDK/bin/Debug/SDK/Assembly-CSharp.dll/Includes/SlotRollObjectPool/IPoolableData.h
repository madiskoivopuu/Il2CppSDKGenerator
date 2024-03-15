#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SlotRollObjectPool {

class IPoolableData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SlotRollObjectPool", "IPoolableData"));
	}


	template <typename R = int32_t> R get_Key() {
		return ((R (*)(IPoolableData*))(Il2CppBase() + 0x0))(this);
	}

};

}
