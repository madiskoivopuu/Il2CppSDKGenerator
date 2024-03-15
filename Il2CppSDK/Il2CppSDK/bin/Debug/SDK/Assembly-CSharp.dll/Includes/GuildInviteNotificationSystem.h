#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildInviteNotificationSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildInviteNotificationSystem"));
	}

	template <typename R = Il2CppString*> static R& _guildInviteNotificationKey() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ICommonUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& _lastCount() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 HashSet1<int64_t>*& _notifiedIds() {
		return *(HashSet1<int64_t>**)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R Execute() {
		return ((R (*)(GuildInviteNotificationSystem*))(Il2CppBase() + 0x1B30810))(this);
	}

};

