#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreateEntityData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CreateEntityData"));
	}

	template <typename T = int32_t> T& EntityId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& ViewId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& PosX() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& PosY() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& Rotation() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint8_t> T& Orientation() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int64_t> T& Ticks() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& Blueprint() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Nullable1int64_t>*> T& ClanId() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int64_t> T& GuildId() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Nullable1int64_t>*> T& OwnerId() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Nullable1int64_t>*> T& PlaceOwnerId() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Nullable1int32_t>*> T& MountInventoryId() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Nullable1int32_t>*> T& ParentId() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Nullable1float>*> T& HealthCoef() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Nullable1float>*> T& MaxHealthCoef() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& BonusHealth() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppString*> T& OwnerName() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& New() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Nullable1int32_t>*> T& GroupChildId() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Nullable1EntityId*>*> T& Bind() {
		return *(T*)((uintptr_t)this + 0xAC);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(CreateEntityData*, uintptr_t))(Il2CppBase() + 0x134D144))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(CreateEntityData*, uintptr_t))(Il2CppBase() + 0x134D30C))(this, reader);
	}

};

