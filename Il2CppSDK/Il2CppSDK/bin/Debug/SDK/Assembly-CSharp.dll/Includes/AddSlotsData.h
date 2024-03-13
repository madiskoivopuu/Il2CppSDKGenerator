#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AddSlotsData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AddSlotsData"));
	}

	template <typename T = PlayerInventoryType*> T& InventoryType() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& Grade() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(AddSlotsData*, uintptr_t))(Il2CppBase() + 0x18AFBF8))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(AddSlotsData*, uintptr_t))(Il2CppBase() + 0x18AFC4C))(this, reader);
	}

};

