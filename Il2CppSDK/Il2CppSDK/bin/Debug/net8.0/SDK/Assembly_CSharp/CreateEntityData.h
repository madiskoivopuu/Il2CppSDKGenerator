#pragma once

#include "../mscorlib/System/ValueType.h"
#include "EntityId.h"
#include "../mscorlib/System/Nullable1.h"
#include "../mscorlib/System/Int64.h"
#include "../mscorlib/System/Int32.h"
#include "../mscorlib/System/Single.h"


class CreateEntityData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CreateEntityData"));
	}

	int32_t& EntityId() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	Il2CppString*& Name() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

	int32_t& ViewId() {
		return *(int32_t*)((uintptr_t)this + 0x10);
	}

	float& PosX() {
		return *(float*)((uintptr_t)this + 0x14);
	}

	float& PosY() {
		return *(float*)((uintptr_t)this + 0x18);
	}

	float& Rotation() {
		return *(float*)((uintptr_t)this + 0x1C);
	}

	uint8_t& Orientation() {
		return *(uint8_t*)((uintptr_t)this + 0x20);
	}

	int64_t& Ticks() {
		return *(int64_t*)((uintptr_t)this + 0x28);
	}

	Il2CppString*& Blueprint() {
		return *(Il2CppString**)((uintptr_t)this + 0x30);
	}

	System::Nullable1<int64_t>*& ClanId() {
		return *(System::Nullable1<int64_t>**)((uintptr_t)this + 0x38);
	}

	int64_t& GuildId() {
		return *(int64_t*)((uintptr_t)this + 0x48);
	}

	System::Nullable1<int64_t>*& OwnerId() {
		return *(System::Nullable1<int64_t>**)((uintptr_t)this + 0x50);
	}

	System::Nullable1<int64_t>*& PlaceOwnerId() {
		return *(System::Nullable1<int64_t>**)((uintptr_t)this + 0x60);
	}

	System::Nullable1<int32_t>*& MountInventoryId() {
		return *(System::Nullable1<int32_t>**)((uintptr_t)this + 0x70);
	}

	System::Nullable1<int32_t>*& ParentId() {
		return *(System::Nullable1<int32_t>**)((uintptr_t)this + 0x78);
	}

	System::Nullable1<float>*& HealthCoef() {
		return *(System::Nullable1<float>**)((uintptr_t)this + 0x80);
	}

	System::Nullable1<float>*& MaxHealthCoef() {
		return *(System::Nullable1<float>**)((uintptr_t)this + 0x88);
	}

	float& BonusHealth() {
		return *(float*)((uintptr_t)this + 0x90);
	}

	Il2CppString*& OwnerName() {
		return *(Il2CppString**)((uintptr_t)this + 0x98);
	}

	bool& New() {
		return *(bool*)((uintptr_t)this + 0xA0);
	}

	System::Nullable1<int32_t>*& GroupChildId() {
		return *(System::Nullable1<int32_t>**)((uintptr_t)this + 0xA4);
	}

	System::Nullable1<EntityId>*& Bind() {
		return *(System::Nullable1<EntityId>**)((uintptr_t)this + 0xAC);
	}

};};
