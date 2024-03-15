#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildFindPlayerItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildFindPlayerItem"));
	}

	template <typename R = uintptr_t> R& PlayerNameText() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& PlayerLevelText() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& CityLevelText() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& TimerText() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& OnlineIndicator() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R Init(int64_t playerId) {
		return ((R (*)(GuildFindPlayerItem*, int64_t))(Il2CppBase() + 0x1B24D38))(this, playerId);
	}

};

