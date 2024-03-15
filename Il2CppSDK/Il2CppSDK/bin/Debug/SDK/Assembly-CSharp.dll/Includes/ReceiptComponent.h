#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ReceiptComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ReceiptComponent"));
	}

	template <typename R = Il2CppString*> R& TransactionId() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Payload() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(ReceiptComponent*, Il2CppObject*))(Il2CppBase() + 0x1394764))(this, targetObject);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ReceiptComponent*, uintptr_t))(Il2CppBase() + 0x139480C))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ReceiptComponent*, uintptr_t))(Il2CppBase() + 0x1394850))(this, reader);
	}

};

