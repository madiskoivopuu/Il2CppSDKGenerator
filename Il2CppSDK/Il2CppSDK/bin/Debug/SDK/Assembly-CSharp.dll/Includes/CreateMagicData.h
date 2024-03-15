#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreateMagicData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CreateMagicData"));
	}

	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& TargetId() {
		return *(R*)((uintptr_t)this + 0x4);
	}
	template <typename R = int32_t> R& ActorId() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = int32_t> R& ActorParentId() {
		return *(R*)((uintptr_t)this + 0xC);
	}
	template <typename R = int32_t> R& ParentId() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& SourceId() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = int32_t> R& ActionId() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int64_t> R& OwnerId() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> R& Count() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> R& UseCount() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	 Nullable1int64_t>*& StartTime() {
		return *(Nullable1int64_t>**)((uintptr_t)this + 0x30);
	}
	 Nullable1float>*& Duration() {
		return *(Nullable1float>**)((uintptr_t)this + 0x40);
	}
	 Nullable1int32_t>*& InventoryIndex() {
		return *(Nullable1int32_t>**)((uintptr_t)this + 0x48);
	}
	template <typename R = Il2CppString*> R& Blueprint() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = Il2CppString*> R& Item() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	 Nullable1int64_t>*& ClanId() {
		return *(Nullable1int64_t>**)((uintptr_t)this + 0x60);
	}
	template <typename R = int64_t> R& GuildId() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = bool> R& Attractor() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = AutoRotationStateComponent*> R& AutoRotationState() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = Il2CppArray<CreateMagicTriggerData*>*> R& Triggers() {
		return *(R*)((uintptr_t)this + 0x88);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(CreateMagicData*, uintptr_t))(Il2CppBase() + 0x1BCC30C))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader, bool checkAvailableBytes) {
		return ((R (*)(CreateMagicData*, uintptr_t, bool))(Il2CppBase() + 0x1BCC4B4))(this, reader, checkAvailableBytes);
	}

};

