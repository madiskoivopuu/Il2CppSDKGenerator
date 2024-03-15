#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BugreportUrlRequestData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BugreportUrlRequestData"));
	}

	template <typename R = Il2CppString*> R& Url() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(BugreportUrlRequestData*, uintptr_t))(Il2CppBase() + 0x15A4064))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(BugreportUrlRequestData*, uintptr_t))(Il2CppBase() + 0x15A40A8))(this, reader);
	}

};

