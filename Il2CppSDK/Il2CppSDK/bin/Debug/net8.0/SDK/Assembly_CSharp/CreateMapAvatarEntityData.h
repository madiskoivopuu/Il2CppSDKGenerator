#pragma once

#include "../mscorlib/System/ValueType.h"
#include "Gender.h"


class CreateMapAvatarEntityData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CreateMapAvatarEntityData"));
	}

	Il2CppString*& Blueprint() {
		return *(Il2CppString**)((uintptr_t)this + 0x0);
	}

	int32_t& Id() {
		return *(int32_t*)((uintptr_t)this + 0x8);
	}

	int32_t& MountInventoryId() {
		return *(int32_t*)((uintptr_t)this + 0xC);
	}

	int32_t& RuneInventoryId() {
		return *(int32_t*)((uintptr_t)this + 0x10);
	}

	int32_t& PetInventoryId() {
		return *(int32_t*)((uintptr_t)this + 0x14);
	}

	int64_t& PlayerId() {
		return *(int64_t*)((uintptr_t)this + 0x18);
	}

	Il2CppString*& PlayerName() {
		return *(Il2CppString**)((uintptr_t)this + 0x20);
	}

	float& Level() {
		return *(float*)((uintptr_t)this + 0x28);
	}

	float& HealthCoef() {
		return *(float*)((uintptr_t)this + 0x2C);
	}

	float& BonusHealth() {
		return *(float*)((uintptr_t)this + 0x30);
	}

	float& Hunger() {
		return *(float*)((uintptr_t)this + 0x34);
	}

	float& Thirst() {
		return *(float*)((uintptr_t)this + 0x38);
	}

	int64_t& ClanId() {
		return *(int64_t*)((uintptr_t)this + 0x40);
	}

	int64_t& GuildId() {
		return *(int64_t*)((uintptr_t)this + 0x48);
	}

	Gender& Gender() {
		return *(Gender*)((uintptr_t)this + 0x50);
	}

	int64_t& Energy() {
		return *(int64_t*)((uintptr_t)this + 0x58);
	}

	Il2CppString*& StartId() {
		return *(Il2CppString**)((uintptr_t)this + 0x60);
	}

	Il2CppString*& EndId() {
		return *(Il2CppString**)((uintptr_t)this + 0x68);
	}

	float& Speed() {
		return *(float*)((uintptr_t)this + 0x70);
	}

	int64_t& ArrivalTime() {
		return *(int64_t*)((uintptr_t)this + 0x78);
	}

	bool& HideHead() {
		return *(bool*)((uintptr_t)this + 0x80);
	}

	bool& HidePet() {
		return *(bool*)((uintptr_t)this + 0x81);
	}

	bool& HideBag() {
		return *(bool*)((uintptr_t)this + 0x82);
	}

};};
