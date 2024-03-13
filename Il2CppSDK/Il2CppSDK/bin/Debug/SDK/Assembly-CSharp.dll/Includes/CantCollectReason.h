#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CantCollectReason
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CantCollectReason"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = CantCollectReason*> static T& None() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = CantCollectReason*> static T& NoGatheringTools() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = CantCollectReason*> static T& InventoryIsFull() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = CantCollectReason*> static T& NoResources() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = CantCollectReason*> static T& CantFindPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

