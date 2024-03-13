#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapConfiguration"));
	}

	template <typename T = Il2CppDictionary<int64_t, Il2CppString*>*> T& MapSlot() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int64_t>*> T& MapSlotRevert() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<int64_t, EntityBlueprint*>*> T& LocationBlueprintByDatabaseId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppDictionary<int64_t, int64_t>*> T& PveDatabaseIdByMapSlotDatabaseId() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppDictionary<int64_t, int64_t>*> T& EnterLocIdByLocId() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppDictionary<int64_t, Il2CppString*>*> T& EnterLocNameByLocId() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MapSlotEnemyID() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MapSlotSpectreID() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int64_t> T& TutorSpectreMapSlot() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int64_t> T& TutorEnemyMapSlot() {
		return *(T*)((uintptr_t)this + 0x58);
	}


};

