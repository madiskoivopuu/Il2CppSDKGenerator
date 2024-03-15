#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ServerTestSystem {

class TestProductInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ServerTestSystem", "TestProductInfo"));
	}

	template <typename R = Il2CppString*> R& ProductName() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& CoinPrice() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	 Il2CppDictionary<Il2CppString*, int32_t>*& Items() {
		return *(Il2CppDictionary<Il2CppString*, int32_t>**)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& Enable() {
		return *(R*)((uintptr_t)this + 0x18);
	}


};

}
