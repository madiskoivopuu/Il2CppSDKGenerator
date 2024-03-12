#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreateMagicData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CreateMagicData"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& TargetId() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& ActorId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& ActorParentId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& ParentId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& SourceId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& ActionId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int64_t> T& OwnerId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& UseCount() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& StartTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& Duration() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& InventoryIndex() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& Blueprint() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& Item() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = void*> T& ClanId() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int64_t> T& GuildId() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& Attractor() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& AutoRotationState() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Triggers() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(CreateMagicData*, uintptr_t))(Il2CppBase() + 0x1BCC30C))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader, bool checkAvailableBytes) {
		return ((T (*)(CreateMagicData*, uintptr_t, bool))(Il2CppBase() + 0x1BCC4B4))(this, reader, checkAvailableBytes);
	}

};

}
