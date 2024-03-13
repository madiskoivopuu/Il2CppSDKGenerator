#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ServerConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ServerConfiguration"));
	}

	template <typename T = int64_t> T& ServerId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Token() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& MainServerName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& LocalIPCoordinator() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& UseInternalNetwork() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& FcmDataJson() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = AnalyticsServerConfig*> T& Analytics() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = ChatConfig*> T& Chat() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = ArenaProtocolType*> T& Protocol() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& RegionServer() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& MatchmakingV2() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& IsCyclicServer() {
		return *(T*)((uintptr_t)this + 0x61);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& EnableLocationsResetByUser() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& LinkKefirIdEnable() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = bool> T get_MatchmakingV2() {
		return ((T (*)(ServerConfiguration*))(Il2CppBase() + 0x1366758))(this);
	}
	template <typename T = void> T set_MatchmakingV2(bool value) {
		return ((T (*)(ServerConfiguration*, bool))(Il2CppBase() + 0x1366760))(this, value);
	}
	template <typename T = bool> T get_IsCyclicServer() {
		return ((T (*)(ServerConfiguration*))(Il2CppBase() + 0x136676C))(this);
	}
	template <typename T = void> T set_IsCyclicServer(bool value) {
		return ((T (*)(ServerConfiguration*, bool))(Il2CppBase() + 0x1366774))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_EnableLocationsResetByUser() {
		return ((T (*)(ServerConfiguration*))(Il2CppBase() + 0x1366780))(this);
	}
	template <typename T = void> T set_EnableLocationsResetByUser(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ServerConfiguration*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1366788))(this, value);
	}
	template <typename T = bool> T get_LinkKefirIdEnable() {
		return ((T (*)(ServerConfiguration*))(Il2CppBase() + 0x1366790))(this);
	}
	template <typename T = void> T set_LinkKefirIdEnable(bool value) {
		return ((T (*)(ServerConfiguration*, bool))(Il2CppBase() + 0x1366798))(this, value);
	}

};

