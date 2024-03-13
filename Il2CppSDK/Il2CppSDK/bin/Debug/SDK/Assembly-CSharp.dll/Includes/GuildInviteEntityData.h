#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildInviteEntityData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildInviteEntityData"));
	}

	template <typename T = int64_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& ClanId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int64_t> T& FromPlayerId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int64_t> T& ToPlayerId() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint8_t> T& CellId() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int64_t> T& ExpiredTick() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& Message() {
		return *(T*)((uintptr_t)this + 0x40);
	}


};

