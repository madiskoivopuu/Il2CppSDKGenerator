#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StatusNameShow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StatusNameShow"));
	}

	template <typename T = uint8_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = StatusNameShow*> static T& All() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = StatusNameShow*> static T& IgnoreGuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = StatusNameShow*> static T& IgnoreClan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = StatusNameShow*> static T& IgnorePower() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = StatusNameShow*> static T& IgnoreName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = StatusNameShow*> static T& IgnoreGuildAndClan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = StatusNameShow*> static T& IgnoreGuildAndClanAndPower() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

