#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ReceiptComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ReceiptComponent"));
	}

	template <typename T = Il2CppString*> T& TransactionId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Payload() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(ReceiptComponent*, uintptr_t))(Il2CppBase() + 0x1394764))(this, targetObject);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ReceiptComponent*, uintptr_t))(Il2CppBase() + 0x139480C))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ReceiptComponent*, uintptr_t))(Il2CppBase() + 0x1394850))(this, reader);
	}

};

}
