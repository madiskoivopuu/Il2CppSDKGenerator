#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RandomGroupType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RandomGroupType"));
	}

	template <typename T = uint8_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = RandomGroupType*> static T& One() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = RandomGroupType*> static T& Set() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = RandomGroupType*> static T& Gacha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = RandomGroupType*> static T& Slots() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

