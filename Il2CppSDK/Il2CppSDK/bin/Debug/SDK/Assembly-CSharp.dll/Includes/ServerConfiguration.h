#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ServerConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ServerConfiguration"));
	}

	template <typename R = int64_t> R& ServerId() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<uint8_t>*> R& Token() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& MainServerName() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& LocalIPCoordinator() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = bool> R& UseInternalNetwork() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppString*> R& FcmDataJson() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = AnalyticsServerConfig*> R& Analytics() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = ChatConfig*> R& Chat() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = ArenaProtocolType> R& Protocol() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = Il2CppString*> R& RegionServer() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = bool> R& MatchmakingV2() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = bool> R& IsCyclicServer() {
		return *(R*)((uintptr_t)this + 0x61);
	}
	template <typename R = Il2CppArray<int64_t>*> R& EnableLocationsResetByUser() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = bool> R& LinkKefirIdEnable() {
		return *(R*)((uintptr_t)this + 0x70);
	}

	template <typename R = bool> R get_MatchmakingV2() {
		return ((R (*)(ServerConfiguration*))(Il2CppBase() + 0x1366758))(this);
	}
	template <typename R = void> R set_MatchmakingV2(bool value) {
		return ((R (*)(ServerConfiguration*, bool))(Il2CppBase() + 0x1366760))(this, value);
	}
	template <typename R = bool> R get_IsCyclicServer() {
		return ((R (*)(ServerConfiguration*))(Il2CppBase() + 0x136676C))(this);
	}
	template <typename R = void> R set_IsCyclicServer(bool value) {
		return ((R (*)(ServerConfiguration*, bool))(Il2CppBase() + 0x1366774))(this, value);
	}
	template <typename R = Il2CppArray<int64_t>*> R get_EnableLocationsResetByUser() {
		return ((R (*)(ServerConfiguration*))(Il2CppBase() + 0x1366780))(this);
	}
	template <typename R = void> R set_EnableLocationsResetByUser(Il2CppArray<int64_t>* value) {
		return ((R (*)(ServerConfiguration*, Il2CppArray<int64_t>*))(Il2CppBase() + 0x1366788))(this, value);
	}
	template <typename R = bool> R get_LinkKefirIdEnable() {
		return ((R (*)(ServerConfiguration*))(Il2CppBase() + 0x1366790))(this);
	}
	template <typename R = void> R set_LinkKefirIdEnable(bool value) {
		return ((R (*)(ServerConfiguration*, bool))(Il2CppBase() + 0x1366798))(this, value);
	}

};

