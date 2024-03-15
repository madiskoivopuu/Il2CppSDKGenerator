#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FailIAPPurchaseData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FailIAPPurchaseData"));
	}

	template <typename R = Il2CppString*> R& ProductName() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& ProductId() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = Il2CppString*> R& FailReason() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(FailIAPPurchaseData*, uintptr_t))(Il2CppBase() + 0x1692558))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(FailIAPPurchaseData*, uintptr_t))(Il2CppBase() + 0x16925B4))(this, reader);
	}

};

