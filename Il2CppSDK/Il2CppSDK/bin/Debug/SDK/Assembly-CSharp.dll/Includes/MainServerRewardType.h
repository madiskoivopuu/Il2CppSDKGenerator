#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MainServerRewardType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MainServerRewardType"));
	}

	template <typename T = uint8_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = MainServerRewardType*> static T& None() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = MainServerRewardType*> static T& RewardAndVisual() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = MainServerRewardType*> static T& VisualOnly() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = MainServerRewardType*> static T& RewardOnly() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = MainServerRewardType*> static T& RewardMainOnlyAndVisual() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

