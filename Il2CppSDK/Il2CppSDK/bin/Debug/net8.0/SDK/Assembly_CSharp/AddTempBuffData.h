#pragma once

#include "../mscorlib/System/ValueType.h"
#include "Icon.h"
#include "TemporaryComponent/CyclicTime.h"
#include "EaseManager/Ease.h"
#include "../mscorlib/System/Nullable1.h"
#include "../mscorlib/System/Int32.h"

class ToolTipValue*;
class ApplyTargetMagicComponent*;

class AddTempBuffData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AddTempBuffData"));
	}

	Il2CppString*& BlueprintName() {
		return *(Il2CppString**)((uintptr_t)this + 0x0);
	}

	Il2CppString*& PrefabName() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

	Il2CppString*& DescriptionCaption() {
		return *(Il2CppString**)((uintptr_t)this + 0x10);
	}

	Il2CppString*& DescriptionText() {
		return *(Il2CppString**)((uintptr_t)this + 0x18);
	}

	System::Nullable1<Icon>*& Icon() {
		return *(System::Nullable1<Icon>**)((uintptr_t)this + 0x20);
	}

	Il2CppString*& UniqueLookup() {
		return *(Il2CppString**)((uintptr_t)this + 0x48);
	}

	bool& IsActive() {
		return *(bool*)((uintptr_t)this + 0x50);
	}

	bool& IsTemporary() {
		return *(bool*)((uintptr_t)this + 0x51);
	}

	int64_t& StartTime() {
		return *(int64_t*)((uintptr_t)this + 0x58);
	}

	int64_t& EndTime() {
		return *(int64_t*)((uintptr_t)this + 0x60);
	}

	int64_t& OBTStartTime() {
		return *(int64_t*)((uintptr_t)this + 0x68);
	}

	int64_t& OBTEndTime() {
		return *(int64_t*)((uintptr_t)this + 0x70);
	}

	int64_t& QAStartTime() {
		return *(int64_t*)((uintptr_t)this + 0x78);
	}

	int64_t& QAEndTime() {
		return *(int64_t*)((uintptr_t)this + 0x80);
	}

	TemporaryComponent::CyclicTime& CyclicTime() {
		return *(TemporaryComponent::CyclicTime*)((uintptr_t)this + 0x88);
	}

	Il2CppString*& InfoDialogue() {
		return *(Il2CppString**)((uintptr_t)this + 0xB8);
	}

	bool& HasToolTip() {
		return *(bool*)((uintptr_t)this + 0xC0);
	}

	ToolTipValue*& ToolTipValue() {
		return *(ToolTipValue**)((uintptr_t)this + 0xC8);
	}

	Il2CppArray<Il2CppString*>*& Quests() {
		return *(Il2CppArray<Il2CppString*>**)((uintptr_t)this + 0xD0);
	}

	ApplyTargetMagicComponent*& Magics() {
		return *(ApplyTargetMagicComponent**)((uintptr_t)this + 0xD8);
	}

	Il2CppString*& Point() {
		return *(Il2CppString**)((uintptr_t)this + 0xE0);
	}

	System::Nullable1<int32_t>*& Version() {
		return *(System::Nullable1<int32_t>**)((uintptr_t)this + 0xE8);
	}

	float& TransactionDuration() {
		return *(float*)((uintptr_t)this + 0xF0);
	}

	EaseManager::Ease& TransactionEase() {
		return *(EaseManager::Ease*)((uintptr_t)this + 0xF4);
	}

	Il2CppArray<ResourcesComponent::Resource>*& Resources() {
		return *(Il2CppArray<ResourcesComponent::Resource>**)((uintptr_t)this + 0xF8);
	}

	bool& ServerLifeTime() {
		return *(bool*)((uintptr_t)this + 0x100);
	}

};};
