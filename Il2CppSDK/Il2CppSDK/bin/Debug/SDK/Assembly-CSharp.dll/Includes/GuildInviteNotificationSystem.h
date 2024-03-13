#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildInviteNotificationSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildInviteNotificationSystem"));
	}

	template <typename T = Il2CppString*> static T& _guildInviteNotificationKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ICommonUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _lastCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = HashSet1int64_t>*> T& _notifiedIds() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Execute() {
		return ((T (*)(GuildInviteNotificationSystem*))(Il2CppBase() + 0x1B30810))(this);
	}

};

