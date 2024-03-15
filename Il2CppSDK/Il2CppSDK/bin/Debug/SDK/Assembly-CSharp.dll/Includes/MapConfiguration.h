#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapConfiguration"));
	}

	 Il2CppDictionary<int64_t, Il2CppString*>*& MapSlot() {
		return *(Il2CppDictionary<int64_t, Il2CppString*>**)((uintptr_t)this + 0x10);
	}
	 Il2CppDictionary<Il2CppString*, int64_t>*& MapSlotRevert() {
		return *(Il2CppDictionary<Il2CppString*, int64_t>**)((uintptr_t)this + 0x18);
	}
	 Il2CppDictionary<int64_t, EntityBlueprint*>*& LocationBlueprintByDatabaseId() {
		return *(Il2CppDictionary<int64_t, EntityBlueprint*>**)((uintptr_t)this + 0x20);
	}
	 Il2CppDictionary<int64_t, int64_t>*& PveDatabaseIdByMapSlotDatabaseId() {
		return *(Il2CppDictionary<int64_t, int64_t>**)((uintptr_t)this + 0x28);
	}
	 Il2CppDictionary<int64_t, int64_t>*& EnterLocIdByLocId() {
		return *(Il2CppDictionary<int64_t, int64_t>**)((uintptr_t)this + 0x30);
	}
	 Il2CppDictionary<int64_t, Il2CppString*>*& EnterLocNameByLocId() {
		return *(Il2CppDictionary<int64_t, Il2CppString*>**)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppArray<int64_t>*> R& MapSlotEnemyID() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = Il2CppArray<int64_t>*> R& MapSlotSpectreID() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = int64_t> R& TutorSpectreMapSlot() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = int64_t> R& TutorEnemyMapSlot() {
		return *(R*)((uintptr_t)this + 0x58);
	}


};

