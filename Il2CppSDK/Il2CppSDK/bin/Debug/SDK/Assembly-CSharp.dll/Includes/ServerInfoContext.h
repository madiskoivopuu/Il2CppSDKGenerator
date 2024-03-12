#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "Context`1" 

class ServerInfoContext: Context1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ServerInfoContext"));
	}

	template <typename T = Il2CppString*> static T& SubregionId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& RegionId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T GetEntityWithSubregion(Il2CppString* subregion) {
		return ((T (*)(ServerInfoContext*, Il2CppString*))(Il2CppBase() + 0x161C728))(this, subregion);
	}
	template <typename T = void*> T GetEntitiesRegion(Il2CppString* name) {
		return ((T (*)(ServerInfoContext*, Il2CppString*))(Il2CppBase() + 0x161C804))(this, name);
	}
	template <typename T = uintptr_t> T get_currentServerEntity() {
		return ((T (*)(ServerInfoContext*))(Il2CppBase() + 0x161C8C4))(this);
	}
	template <typename T = bool> T get_isCurrentServer() {
		return ((T (*)(ServerInfoContext*))(Il2CppBase() + 0x161CB38))(this);
	}
	template <typename T = void> T set_isCurrentServer(bool value) {
		return ((T (*)(ServerInfoContext*, bool))(Il2CppBase() + 0x161CB54))(this, value);
	}

};

}
