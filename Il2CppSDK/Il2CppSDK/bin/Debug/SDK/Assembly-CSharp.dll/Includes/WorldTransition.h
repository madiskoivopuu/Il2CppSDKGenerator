#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "Transition.h" 

class WorldTransition : public Transition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WorldTransition"));
	}

	template <typename T = UdpClientConfig*> T& ListenerUdpConfig() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int64_t> T& AccountId() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int64_t> T& SessionId() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int64_t> T& WorldId() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& SceneName() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = UdpClientConfig*> T get_ListenerUdpConfig() {
		return ((T (*)(WorldTransition*))(Il2CppBase() + 0x1131410))(this);
	}
	template <typename T = void> T set_ListenerUdpConfig(UdpClientConfig* value) {
		return ((T (*)(WorldTransition*, UdpClientConfig*))(Il2CppBase() + 0x1131418))(this, value);
	}
	template <typename T = int64_t> T get_AccountId() {
		return ((T (*)(WorldTransition*))(Il2CppBase() + 0x1131420))(this);
	}
	template <typename T = void> T set_AccountId(int64_t value) {
		return ((T (*)(WorldTransition*, int64_t))(Il2CppBase() + 0x1131428))(this, value);
	}
	template <typename T = int64_t> T get_SessionId() {
		return ((T (*)(WorldTransition*))(Il2CppBase() + 0x1131430))(this);
	}
	template <typename T = void> T set_SessionId(int64_t value) {
		return ((T (*)(WorldTransition*, int64_t))(Il2CppBase() + 0x1131438))(this, value);
	}
	template <typename T = int64_t> T get_WorldId() {
		return ((T (*)(WorldTransition*))(Il2CppBase() + 0x1131440))(this);
	}
	template <typename T = void> T set_WorldId(int64_t value) {
		return ((T (*)(WorldTransition*, int64_t))(Il2CppBase() + 0x1131448))(this, value);
	}
	template <typename T = Il2CppString*> T get_SceneName() {
		return ((T (*)(WorldTransition*))(Il2CppBase() + 0x1131450))(this);
	}
	template <typename T = void> T set_SceneName(Il2CppString* value) {
		return ((T (*)(WorldTransition*, Il2CppString*))(Il2CppBase() + 0x1131458))(this, value);
	}

};

