#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TakeFurnitureData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TakeFurnitureData"));
	}

	template <typename R = int32_t> R& EntityId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = bool> R& Disassemble() {
		return *(R*)((uintptr_t)this + 0x4);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(TakeFurnitureData*, uintptr_t))(Il2CppBase() + 0x16A49B0))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(TakeFurnitureData*, uintptr_t))(Il2CppBase() + 0x16A4A04))(this, reader);
	}

};

