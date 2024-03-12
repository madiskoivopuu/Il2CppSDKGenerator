#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BugreportUrlRequestData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BugreportUrlRequestData"));
	}

	template <typename T = Il2CppString*> T& Url() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(BugreportUrlRequestData*, uintptr_t))(Il2CppBase() + 0x15A4064))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(BugreportUrlRequestData*, uintptr_t))(Il2CppBase() + 0x15A40A8))(this, reader);
	}

};

}
