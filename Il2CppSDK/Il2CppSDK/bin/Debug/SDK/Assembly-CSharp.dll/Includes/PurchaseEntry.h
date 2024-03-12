#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PurchaseEntry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PurchaseEntry"));
	}

	template <typename T = Il2CppString*> T& ProductName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& ProductId() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
