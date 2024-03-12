#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildFindPlayerItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildFindPlayerItem"));
	}

	template <typename T = uintptr_t> T& PlayerNameText() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& PlayerLevelText() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& CityLevelText() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& TimerText() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& OnlineIndicator() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Init(int64_t playerId) {
		return ((T (*)(GuildFindPlayerItem*, int64_t))(Il2CppBase() + 0x1B24D38))(this, playerId);
	}

};

}
