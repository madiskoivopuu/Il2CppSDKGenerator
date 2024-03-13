#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MoveRuneToFromClassData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MoveRuneToFromClassData"));
	}

	template <typename T = int32_t> T& SlotId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = PlayerClassType*> T& ClassType() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& FromClassSlotIndex() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& ToClassSlotIndex() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& ToClass() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& AllowMerge() {
		return *(T*)((uintptr_t)this + 0x11);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(MoveRuneToFromClassData*, uintptr_t))(Il2CppBase() + 0x1557224))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(MoveRuneToFromClassData*, uintptr_t))(Il2CppBase() + 0x15572B8))(this, reader);
	}

};

