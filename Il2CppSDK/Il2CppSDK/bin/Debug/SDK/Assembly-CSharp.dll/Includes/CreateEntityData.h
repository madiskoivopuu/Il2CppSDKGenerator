#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreateEntityData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CreateEntityData"));
	}

	template <typename R = int32_t> R& EntityId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = int32_t> R& ViewId() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& PosX() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = float> R& PosY() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& Rotation() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = uint8_t> R& Orientation() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int64_t> R& Ticks() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& Blueprint() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	 Nullable1<int64_t>*& ClanId() {
		return *(Nullable1<int64_t>**)((uintptr_t)this + 0x38);
	}
	template <typename R = int64_t> R& GuildId() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	 Nullable1<int64_t>*& OwnerId() {
		return *(Nullable1<int64_t>**)((uintptr_t)this + 0x50);
	}
	 Nullable1<int64_t>*& PlaceOwnerId() {
		return *(Nullable1<int64_t>**)((uintptr_t)this + 0x60);
	}
	 Nullable1<int32_t>*& MountInventoryId() {
		return *(Nullable1<int32_t>**)((uintptr_t)this + 0x70);
	}
	 Nullable1<int32_t>*& ParentId() {
		return *(Nullable1<int32_t>**)((uintptr_t)this + 0x78);
	}
	 Nullable1<float>*& HealthCoef() {
		return *(Nullable1<float>**)((uintptr_t)this + 0x80);
	}
	 Nullable1<float>*& MaxHealthCoef() {
		return *(Nullable1<float>**)((uintptr_t)this + 0x88);
	}
	template <typename R = float> R& BonusHealth() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = Il2CppString*> R& OwnerName() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = bool> R& New() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	 Nullable1<int32_t>*& GroupChildId() {
		return *(Nullable1<int32_t>**)((uintptr_t)this + 0xA4);
	}
	 Nullable1<EntityId>*& Bind() {
		return *(Nullable1<EntityId>**)((uintptr_t)this + 0xAC);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(CreateEntityData*, uintptr_t))(Il2CppBase() + 0x134D144))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(CreateEntityData*, uintptr_t))(Il2CppBase() + 0x134D30C))(this, reader);
	}

};

