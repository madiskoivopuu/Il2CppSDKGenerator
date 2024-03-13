#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerInventoryType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerInventoryType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = PlayerInventoryType*> static T& Common() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = PlayerInventoryType*> static T& Mounts() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = PlayerInventoryType*> static T& Runes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = PlayerInventoryType*> static T& Pets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

