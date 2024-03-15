#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "Context1.h" 

class ServerInfoContext : public Context1<ServerInfoEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ServerInfoContext"));
	}

	template <typename R = Il2CppString*> static R& SubregionId() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& RegionId() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = ServerInfoEntity*> R GetEntityWithSubregion(Il2CppString* subregion) {
		return ((R (*)(ServerInfoContext*, Il2CppString*))(Il2CppBase() + 0x161C728))(this, subregion);
	}
	 HashSet1ServerInfoEntity*>* GetEntitiesRegion(Il2CppString* name) {
		return ((HashSet1ServerInfoEntity*>* (*)(ServerInfoContext*, Il2CppString*))(Il2CppBase() + 0x161C804))(this, name);
	}
	template <typename R = ServerInfoEntity*> R get_currentServerEntity() {
		return ((R (*)(ServerInfoContext*))(Il2CppBase() + 0x161C8C4))(this);
	}
	template <typename R = bool> R get_isCurrentServer() {
		return ((R (*)(ServerInfoContext*))(Il2CppBase() + 0x161CB38))(this);
	}
	template <typename R = void> R set_isCurrentServer(bool value) {
		return ((R (*)(ServerInfoContext*, bool))(Il2CppBase() + 0x161CB54))(this, value);
	}

};

