#pragma once

#include "../mscorlib/System/ValueType.h"
#include "../mscorlib/System/Nullable1.h"
#include "../mscorlib/System/Int64.h"
#include "../mscorlib/System/Single.h"
#include "../mscorlib/System/Int32.h"

class AutoRotationStateComponent*;

class CreateMagicData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CreateMagicData"));
	}

	int32_t& Id() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	int32_t& TargetId() {
		return *(int32_t*)((uintptr_t)this + 0x4);
	}

	int32_t& ActorId() {
		return *(int32_t*)((uintptr_t)this + 0x8);
	}

	int32_t& ActorParentId() {
		return *(int32_t*)((uintptr_t)this + 0xC);
	}

	int32_t& ParentId() {
		return *(int32_t*)((uintptr_t)this + 0x10);
	}

	int32_t& SourceId() {
		return *(int32_t*)((uintptr_t)this + 0x14);
	}

	int32_t& ActionId() {
		return *(int32_t*)((uintptr_t)this + 0x18);
	}

	int64_t& OwnerId() {
		return *(int64_t*)((uintptr_t)this + 0x20);
	}

	int32_t& Count() {
		return *(int32_t*)((uintptr_t)this + 0x28);
	}

	int32_t& UseCount() {
		return *(int32_t*)((uintptr_t)this + 0x2C);
	}

	System::Nullable1<int64_t>*& StartTime() {
		return *(System::Nullable1<int64_t>**)((uintptr_t)this + 0x30);
	}

	System::Nullable1<float>*& Duration() {
		return *(System::Nullable1<float>**)((uintptr_t)this + 0x40);
	}

	System::Nullable1<int32_t>*& InventoryIndex() {
		return *(System::Nullable1<int32_t>**)((uintptr_t)this + 0x48);
	}

	Il2CppString*& Blueprint() {
		return *(Il2CppString**)((uintptr_t)this + 0x50);
	}

	Il2CppString*& Item() {
		return *(Il2CppString**)((uintptr_t)this + 0x58);
	}

	System::Nullable1<int64_t>*& ClanId() {
		return *(System::Nullable1<int64_t>**)((uintptr_t)this + 0x60);
	}

	int64_t& GuildId() {
		return *(int64_t*)((uintptr_t)this + 0x70);
	}

	bool& Attractor() {
		return *(bool*)((uintptr_t)this + 0x78);
	}

	AutoRotationStateComponent*& AutoRotationState() {
		return *(AutoRotationStateComponent**)((uintptr_t)this + 0x80);
	}

	Il2CppArray<CreateMagicTriggerData>*& Triggers() {
		return *(Il2CppArray<CreateMagicTriggerData>**)((uintptr_t)this + 0x88);
	}

};};
