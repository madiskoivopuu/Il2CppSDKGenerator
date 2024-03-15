#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CallbackComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CallbackComponent"));
	}

	 Action2TransactionEntity*, bool>*& Method() {
		return *(Action2TransactionEntity*, bool>**)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R Clear() {
		return ((R (*)(CallbackComponent*))(Il2CppBase() + 0x15B276C))(this);
	}

};

