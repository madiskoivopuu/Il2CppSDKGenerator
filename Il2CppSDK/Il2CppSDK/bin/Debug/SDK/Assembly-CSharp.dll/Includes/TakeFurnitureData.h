#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TakeFurnitureData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TakeFurnitureData"));
	}

	template <typename T = int32_t> T& EntityId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& Disassemble() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(TakeFurnitureData*, uintptr_t))(Il2CppBase() + 0x16A49B0))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(TakeFurnitureData*, uintptr_t))(Il2CppBase() + 0x16A4A04))(this, reader);
	}

};

