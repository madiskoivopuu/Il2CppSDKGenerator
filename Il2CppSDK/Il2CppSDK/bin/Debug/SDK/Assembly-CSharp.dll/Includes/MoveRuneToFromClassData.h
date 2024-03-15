#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MoveRuneToFromClassData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MoveRuneToFromClassData"));
	}

	template <typename R = int32_t> R& SlotId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = PlayerClassType*> R& ClassType() {
		return *(R*)((uintptr_t)this + 0x4);
	}
	template <typename R = int32_t> R& FromClassSlotIndex() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = int32_t> R& ToClassSlotIndex() {
		return *(R*)((uintptr_t)this + 0xC);
	}
	template <typename R = bool> R& ToClass() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& AllowMerge() {
		return *(R*)((uintptr_t)this + 0x11);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(MoveRuneToFromClassData*, uintptr_t))(Il2CppBase() + 0x1557224))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(MoveRuneToFromClassData*, uintptr_t))(Il2CppBase() + 0x15572B8))(this, reader);
	}

};

