#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILootStatusEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILootStatusEntity"));
	}


	template <typename T = uintptr_t> T get_lootStatus() {
		return ((T (*)(ILootStatusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasLootStatus() {
		return ((T (*)(ILootStatusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddLootStatus(Il2CppString* newTag, int32_t newWeight) {
		return ((T (*)(ILootStatusEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0x0))(this, newTag, newWeight);
	}
	template <typename T = void> T ReplaceLootStatus(Il2CppString* newTag, int32_t newWeight) {
		return ((T (*)(ILootStatusEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0x0))(this, newTag, newWeight);
	}
	template <typename T = void> T RemoveLootStatus() {
		return ((T (*)(ILootStatusEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
