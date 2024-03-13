#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ServerTestSystem {

class TestProductInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ServerTestSystem", "TestProductInfo"));
	}

	template <typename T = Il2CppString*> T& ProductName() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& CoinPrice() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T& Items() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Enable() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
