#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreateArenaAvatarEntityData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CreateArenaAvatarEntityData"));
	}

	template <typename T = Il2CppString*> T& Blueprint() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& MountInventoryId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& RuneInventoryId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& PetInventoryId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int64_t> T& PlayerId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& PlayerName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& Level() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& HealthCoef() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& BonusHealth() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& Hunger() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& Thirst() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int64_t> T& ClanId() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int64_t> T& GuildId() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Gender*> T& Gender() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int64_t> T& Ticks() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& PosX() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& PosY() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& PlayerKill() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& HideHead() {
		return *(T*)((uintptr_t)this + 0x69);
	}
	template <typename T = bool> T& HidePet() {
		return *(T*)((uintptr_t)this + 0x6A);
	}
	template <typename T = bool> T& HideBag() {
		return *(T*)((uintptr_t)this + 0x6B);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(CreateArenaAvatarEntityData*, uintptr_t))(Il2CppBase() + 0x134A3B0))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(CreateArenaAvatarEntityData*, uintptr_t))(Il2CppBase() + 0x134A544))(this, reader);
	}

};

