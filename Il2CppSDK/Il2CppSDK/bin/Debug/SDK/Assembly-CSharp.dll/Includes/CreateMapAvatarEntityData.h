#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreateMapAvatarEntityData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CreateMapAvatarEntityData"));
	}

	template <typename R = Il2CppString*> R& Blueprint() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = int32_t> R& MountInventoryId() {
		return *(R*)((uintptr_t)this + 0xC);
	}
	template <typename R = int32_t> R& RuneInventoryId() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& PetInventoryId() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = int64_t> R& PlayerId() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& PlayerName() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& Level() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& HealthCoef() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = float> R& BonusHealth() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = float> R& Hunger() {
		return *(R*)((uintptr_t)this + 0x34);
	}
	template <typename R = float> R& Thirst() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int64_t> R& ClanId() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int64_t> R& GuildId() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = Gender*> R& Gender() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = int64_t> R& Energy() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = Il2CppString*> R& StartId() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = Il2CppString*> R& EndId() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = float> R& Speed() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = int64_t> R& ArrivalTime() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = bool> R& HideHead() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = bool> R& HidePet() {
		return *(R*)((uintptr_t)this + 0x81);
	}
	template <typename R = bool> R& HideBag() {
		return *(R*)((uintptr_t)this + 0x82);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(CreateMapAvatarEntityData*, uintptr_t))(Il2CppBase() + 0x1BCCA64))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(CreateMapAvatarEntityData*, uintptr_t))(Il2CppBase() + 0x1BCCC08))(this, reader);
	}

};

