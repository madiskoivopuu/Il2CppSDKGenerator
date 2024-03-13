#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RewardRules
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RewardRules"));
	}

	template <typename T = uint8_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = RewardRules*> static T& ToInventory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = RewardRules*> static T& ToInventoryOrMail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = RewardRules*> static T& ToMail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

