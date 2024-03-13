#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class BadFpsStatsEnum
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "BadFpsStatsEnum"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = BadFpsStatsEnum*> static T& BadFpsSummary() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = BadFpsStatsEnum*> static T& BadFpsTimeManager() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = BadFpsStatsEnum*> static T& BadFpsSystems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = BadFpsStatsEnum*> static T& BadFpsChat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = BadFpsStatsEnum*> static T& BadFpsAllWorlds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = BadFpsStatsEnum*> static T& BadFpsAllGlobals() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = BadFpsStatsEnum*> static T& BadFpsWorld() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = BadFpsStatsEnum*> static T& BadFpsGlobal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = BadFpsStatsEnum*> static T& BadFpsSystem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = BadFpsStatsEnum*> static T& BadFpsUdpListener() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = BadFpsStatsEnum*> static T& BadFpsUdpCommand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = BadFpsStatsEnum*> static T& BadFpsGc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = BadFpsStatsEnum*> static T& BadFpsScheduler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = BadFpsStatsEnum*> static T& BadFpsCallTask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = BadFpsStatsEnum*> static T& BadFpsCallMethod() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
