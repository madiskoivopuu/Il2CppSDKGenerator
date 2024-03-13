#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RatingGuildType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RatingGuildType"));
	}

	template <typename T = uint8_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = RatingGuildType*> static T& None() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = RatingGuildType*> static T& Recommended() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = RatingGuildType*> static T& Global() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = RatingGuildType*> static T& Main() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = RatingGuildType*> static T& GlobalLastWeek() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = RatingGuildType*> static T& MainLastWeek() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

