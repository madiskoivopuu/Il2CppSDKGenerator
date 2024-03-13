#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicIconViewerType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicIconViewerType"));
	}

	template <typename T = uint8_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = MagicIconViewerType*> static T& All() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = MagicIconViewerType*> static T& Actor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = MagicIconViewerType*> static T& Target() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = MagicIconViewerType*> static T& ActorOrTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

