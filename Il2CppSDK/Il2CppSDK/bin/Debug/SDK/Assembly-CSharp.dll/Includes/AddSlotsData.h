#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AddSlotsData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AddSlotsData"));
	}

	template <typename R = PlayerInventoryType> R& InventoryType() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& Grade() {
		return *(R*)((uintptr_t)this + 0x4);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(AddSlotsData*, uintptr_t))(Il2CppBase() + 0x18AFBF8))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(AddSlotsData*, uintptr_t))(Il2CppBase() + 0x18AFC4C))(this, reader);
	}

};

