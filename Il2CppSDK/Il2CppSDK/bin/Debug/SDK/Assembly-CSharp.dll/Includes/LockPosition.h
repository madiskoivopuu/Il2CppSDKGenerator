#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LockPosition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LockPosition"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = LockPosition*> static T& Left() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = LockPosition*> static T& Center() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = LockPosition*> static T& Right() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

