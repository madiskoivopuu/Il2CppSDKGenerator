#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InviteEntityData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InviteEntityData"));
	}

	template <typename R = int64_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int64_t> R& ClanId() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int64_t> R& FromPlayerId() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int64_t> R& ToPlayerId() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uint8_t> R& CellId() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int64_t> R& ExpiredTick() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppString*> R& Message() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uint8_t> R& PlayersCount() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = Il2CppString*> R& ClanLeaderName() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = int32_t> R& ClanLeaderLevel() {
		return *(R*)((uintptr_t)this + 0x58);
	}


};

