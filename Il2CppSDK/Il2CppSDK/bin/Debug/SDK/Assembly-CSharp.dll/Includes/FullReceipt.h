#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FullReceipt
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FullReceipt"));
	}

	template <typename R = Il2CppString*> R& Store() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& TransactionID() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& Payload() {
		return *(R*)((uintptr_t)this + 0x20);
	}


};

