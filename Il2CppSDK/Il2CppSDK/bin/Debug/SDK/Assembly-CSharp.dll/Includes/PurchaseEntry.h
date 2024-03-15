#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PurchaseEntry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PurchaseEntry"));
	}

	template <typename R = Il2CppString*> R& ProductName() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& ProductId() {
		return *(R*)((uintptr_t)this + 0x18);
	}


};

