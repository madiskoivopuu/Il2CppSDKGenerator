#pragma once

#include "../mscorlib/System/ValueType.h"
#include "Gender.h"


class CreateArenaAvatarEntityData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CreateArenaAvatarEntityData"));
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

	int64_t& Ticks() {
		return *(int64_t*)((uintptr_t)this + 0x58);
	}

	float& PosX() {
		return *(float*)((uintptr_t)this + 0x60);
	}

	float& PosY() {
		return *(float*)((uintptr_t)this + 0x64);
	}

	bool& PlayerKill() {
		return *(bool*)((uintptr_t)this + 0x68);
	}

	bool& HideHead() {
		return *(bool*)((uintptr_t)this + 0x69);
	}

	bool& HidePet() {
		return *(bool*)((uintptr_t)this + 0x6A);
	}

	bool& HideBag() {
		return *(bool*)((uintptr_t)this + 0x6B);
	}

};};
