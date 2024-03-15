#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimatorConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnimatorConfig"));
	}

	template <typename R = int32_t> static R& Tier() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& isActive() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename R = int32_t> static R& isAttention() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = int32_t> static R& ButtonError() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename R = int32_t> static R& Show() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename R = int32_t> static R& isHidden() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename R = int32_t> static R& IsPreview() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename R = int32_t> static R& IsUpgrade() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename R = int32_t> static R& IsSameTierUpgrade() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename R = int32_t> static R& IsSpawn() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename R = int32_t> static R& Damage() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename R = int32_t> static R& AttackDelay() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename R = int32_t> static R& ActionSpeed() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename R = int32_t> static R& Speed() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename R = int32_t> static R& Stealth() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename R = int32_t> static R& EmojiInt() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename R = int32_t> static R& IsNewbie() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename R = int32_t> static R& SpawnTrigger() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename R = int32_t> static R& IsPatrolling() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename R = int32_t> static R& IsSelected() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename R = int32_t> static R& IsInventory() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename R = int32_t> static R& InventoryParam() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename R = int32_t> static R& AnimsRandomizer() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename R = int32_t> static R& IsMount() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename R = int32_t> static R& MountInt() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename R = int32_t> static R& DropActionTrigger() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename R = int32_t> static R& isUnlock() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename R = int32_t> static R& isRandom() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename R = int32_t> static R& Reset() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename R = int32_t> static R& Phase() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename R = int32_t> static R& Delay() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename R = int32_t> static R& Slot() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename R = int32_t> static R& SpeedCoef() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename R = int32_t> static R& Armed() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename R = int32_t> static R& IsAction() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename R = int32_t> static R& ActionParam() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}


};

