#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClientSharedContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientSharedContexts"));
	}

	template <typename T = uintptr_t> T& tempBuff() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& serverInfo() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& chat() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& contacts() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& analytics() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& notification() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = uintptr_t> T get_tempBuff() {
		return ((T (*)(ClientSharedContexts*))(Il2CppBase() + 0xE1D558))(this);
	}
	template <typename T = void> T set_tempBuff(uintptr_t value) {
		return ((T (*)(ClientSharedContexts*, uintptr_t))(Il2CppBase() + 0xE1D560))(this, value);
	}
	template <typename T = uintptr_t> T get_serverInfo() {
		return ((T (*)(ClientSharedContexts*))(Il2CppBase() + 0xE1D568))(this);
	}
	template <typename T = void> T set_serverInfo(uintptr_t value) {
		return ((T (*)(ClientSharedContexts*, uintptr_t))(Il2CppBase() + 0xE1D570))(this, value);
	}
	template <typename T = uintptr_t> T get_chat() {
		return ((T (*)(ClientSharedContexts*))(Il2CppBase() + 0xE1D578))(this);
	}
	template <typename T = void> T set_chat(uintptr_t value) {
		return ((T (*)(ClientSharedContexts*, uintptr_t))(Il2CppBase() + 0xE1D580))(this, value);
	}
	template <typename T = uintptr_t> T get_contacts() {
		return ((T (*)(ClientSharedContexts*))(Il2CppBase() + 0xE1D588))(this);
	}
	template <typename T = void> T set_contacts(uintptr_t value) {
		return ((T (*)(ClientSharedContexts*, uintptr_t))(Il2CppBase() + 0xE1D590))(this, value);
	}
	template <typename T = uintptr_t> T get_analytics() {
		return ((T (*)(ClientSharedContexts*))(Il2CppBase() + 0xE1D598))(this);
	}
	template <typename T = void> T set_analytics(uintptr_t value) {
		return ((T (*)(ClientSharedContexts*, uintptr_t))(Il2CppBase() + 0xE1D5A0))(this, value);
	}
	template <typename T = uintptr_t> T get_notification() {
		return ((T (*)(ClientSharedContexts*))(Il2CppBase() + 0xE1D5A8))(this);
	}
	template <typename T = void> T set_notification(uintptr_t value) {
		return ((T (*)(ClientSharedContexts*, uintptr_t))(Il2CppBase() + 0xE1D5B0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_allContexts() {
		return ((T (*)(ClientSharedContexts*))(Il2CppBase() + 0xE1D5B8))(this);
	}
	template <typename T = void> T ClearContexts() {
		return ((T (*)(ClientSharedContexts*))(Il2CppBase() + 0xE1D95C))(this);
	}

};

}
