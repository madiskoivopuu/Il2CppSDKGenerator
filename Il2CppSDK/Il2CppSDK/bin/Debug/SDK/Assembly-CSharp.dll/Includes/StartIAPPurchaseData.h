#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StartIAPPurchaseData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StartIAPPurchaseData"));
	}

	template <typename R = Il2CppString*> R& ProductName() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& ProductId() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(StartIAPPurchaseData*, uintptr_t))(Il2CppBase() + 0x148CD74))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(StartIAPPurchaseData*, uintptr_t))(Il2CppBase() + 0x148CDC0))(this, reader);
	}

};
