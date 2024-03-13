#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InventorySlotState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventorySlotState"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = InventorySlotState*> static T& Disabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = InventorySlotState*> static T& Active() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = InventorySlotState*> static T& Inactive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = InventorySlotState*> static T& Dummy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

