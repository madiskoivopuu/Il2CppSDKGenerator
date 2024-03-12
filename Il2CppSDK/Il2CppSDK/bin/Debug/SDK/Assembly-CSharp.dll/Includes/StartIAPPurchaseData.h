#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StartIAPPurchaseData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StartIAPPurchaseData"));
	}

	template <typename T = Il2CppString*> T& ProductName() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& ProductId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(StartIAPPurchaseData*, uintptr_t))(Il2CppBase() + 0x148CD74))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(StartIAPPurchaseData*, uintptr_t))(Il2CppBase() + 0x148CDC0))(this, reader);
	}

};

}
