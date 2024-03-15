#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DestroyMagicData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DestroyMagicData"));
	}

	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(DestroyMagicData*, uintptr_t))(Il2CppBase() + 0xEBEA10))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader, bool checkAvailableBytes) {
		return ((R (*)(DestroyMagicData*, uintptr_t, bool))(Il2CppBase() + 0xEBEA34))(this, reader, checkAvailableBytes);
	}

};

