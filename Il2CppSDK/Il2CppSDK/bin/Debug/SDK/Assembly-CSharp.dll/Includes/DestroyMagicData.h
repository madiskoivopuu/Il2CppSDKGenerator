#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DestroyMagicData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DestroyMagicData"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(DestroyMagicData*, uintptr_t))(Il2CppBase() + 0xEBEA10))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader, bool checkAvailableBytes) {
		return ((T (*)(DestroyMagicData*, uintptr_t, bool))(Il2CppBase() + 0xEBEA34))(this, reader, checkAvailableBytes);
	}

};

