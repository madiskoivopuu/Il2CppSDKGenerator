#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "Transition.h" 

class WorldTransition : public Transition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WorldTransition"));
	}

	template <typename R = UdpClientConfig*> R& ListenerUdpConfig() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int64_t> R& AccountId() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int64_t> R& SessionId() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int64_t> R& WorldId() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = Il2CppString*> R& SceneName() {
		return *(R*)((uintptr_t)this + 0x48);
	}

	template <typename R = UdpClientConfig*> R get_ListenerUdpConfig() {
		return ((R (*)(WorldTransition*))(Il2CppBase() + 0x1131410))(this);
	}
	template <typename R = void> R set_ListenerUdpConfig(UdpClientConfig* value) {
		return ((R (*)(WorldTransition*, UdpClientConfig*))(Il2CppBase() + 0x1131418))(this, value);
	}
	template <typename R = int64_t> R get_AccountId() {
		return ((R (*)(WorldTransition*))(Il2CppBase() + 0x1131420))(this);
	}
	template <typename R = void> R set_AccountId(int64_t value) {
		return ((R (*)(WorldTransition*, int64_t))(Il2CppBase() + 0x1131428))(this, value);
	}
	template <typename R = int64_t> R get_SessionId() {
		return ((R (*)(WorldTransition*))(Il2CppBase() + 0x1131430))(this);
	}
	template <typename R = void> R set_SessionId(int64_t value) {
		return ((R (*)(WorldTransition*, int64_t))(Il2CppBase() + 0x1131438))(this, value);
	}
	template <typename R = int64_t> R get_WorldId() {
		return ((R (*)(WorldTransition*))(Il2CppBase() + 0x1131440))(this);
	}
	template <typename R = void> R set_WorldId(int64_t value) {
		return ((R (*)(WorldTransition*, int64_t))(Il2CppBase() + 0x1131448))(this, value);
	}
	template <typename R = Il2CppString*> R get_SceneName() {
		return ((R (*)(WorldTransition*))(Il2CppBase() + 0x1131450))(this);
	}
	template <typename R = void> R set_SceneName(Il2CppString* value) {
		return ((R (*)(WorldTransition*, Il2CppString*))(Il2CppBase() + 0x1131458))(this, value);
	}

};

