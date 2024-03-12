#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FullReceipt
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FullReceipt"));
	}

	template <typename T = Il2CppString*> T& Store() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& TransactionID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Payload() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
