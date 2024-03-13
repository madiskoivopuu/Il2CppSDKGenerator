#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DirectionSource
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DirectionSource"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = DirectionSource*> static T& ToTargetDirection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = DirectionSource*> static T& Actor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = DirectionSource*> static T& Target() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = DirectionSource*> static T& Action() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

