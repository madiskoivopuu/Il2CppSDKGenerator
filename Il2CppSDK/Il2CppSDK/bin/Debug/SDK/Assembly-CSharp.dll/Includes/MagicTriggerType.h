#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicTriggerType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicTriggerType"));
	}

	template <typename T = int64_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = MagicTriggerType*> static T& None() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = MagicTriggerType*> static T& BeforeSelfHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = MagicTriggerType*> static T& BeforeTargetHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = MagicTriggerType*> static T& AfterSelfHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = MagicTriggerType*> static T& AfterTargetHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = MagicTriggerType*> static T& OnDeadlyHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = MagicTriggerType*> static T& OnTargetKill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = MagicTriggerType*> static T& OnItemUse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = MagicTriggerType*> static T& OnTargetCast() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = MagicTriggerType*> static T& OnSelfCast() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = MagicTriggerType*> static T& OnDismount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = MagicTriggerType*> static T& ChildOnTargetCast() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = MagicTriggerType*> static T& OnPlace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = MagicTriggerType*> static T& ChestOnDeath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = MagicTriggerType*> static T& Unlock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = MagicTriggerType*> static T& OnTargetPickup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = MagicTriggerType*> static T& OnSelfPickup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = MagicTriggerType*> static T& BeforeSelfHeal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = MagicTriggerType*> static T& BeforeTargetHeal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = MagicTriggerType*> static T& AfterSelfHeal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

