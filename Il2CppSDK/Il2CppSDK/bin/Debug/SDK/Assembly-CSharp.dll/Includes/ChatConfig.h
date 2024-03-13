#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatConfig"));
	}

	template <typename T = bool> T& LoginV2() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& RegistrationV2() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = bool> T& ReloginV2() {
		return *(T*)((uintptr_t)this + 0x12);
	}
	template <typename T = int32_t> T& ContactsFavouriteMax() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& ContactsRecentMax() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& ServerIP() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& ServerFQDN() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = bool> T get_LoginV2() {
		return ((T (*)(ChatConfig*))(Il2CppBase() + 0x13F17A8))(this);
	}
	template <typename T = void> T set_LoginV2(bool value) {
		return ((T (*)(ChatConfig*, bool))(Il2CppBase() + 0x13F17B0))(this, value);
	}
	template <typename T = bool> T get_RegistrationV2() {
		return ((T (*)(ChatConfig*))(Il2CppBase() + 0x13F17BC))(this);
	}
	template <typename T = void> T set_RegistrationV2(bool value) {
		return ((T (*)(ChatConfig*, bool))(Il2CppBase() + 0x13F17C4))(this, value);
	}
	template <typename T = bool> T get_ReloginV2() {
		return ((T (*)(ChatConfig*))(Il2CppBase() + 0x13F17D0))(this);
	}
	template <typename T = void> T set_ReloginV2(bool value) {
		return ((T (*)(ChatConfig*, bool))(Il2CppBase() + 0x13F17D8))(this, value);
	}
	template <typename T = int32_t> T get_ContactsFavouriteMax() {
		return ((T (*)(ChatConfig*))(Il2CppBase() + 0x13F17E4))(this);
	}
	template <typename T = void> T set_ContactsFavouriteMax(int32_t value) {
		return ((T (*)(ChatConfig*, int32_t))(Il2CppBase() + 0x13F17EC))(this, value);
	}
	template <typename T = int32_t> T get_ContactsRecentMax() {
		return ((T (*)(ChatConfig*))(Il2CppBase() + 0x13F17F4))(this);
	}
	template <typename T = void> T set_ContactsRecentMax(int32_t value) {
		return ((T (*)(ChatConfig*, int32_t))(Il2CppBase() + 0x13F17FC))(this, value);
	}
	template <typename T = Il2CppString*> T get_ServerIP() {
		return ((T (*)(ChatConfig*))(Il2CppBase() + 0x13F1804))(this);
	}
	template <typename T = void> T set_ServerIP(Il2CppString* value) {
		return ((T (*)(ChatConfig*, Il2CppString*))(Il2CppBase() + 0x13F180C))(this, value);
	}
	template <typename T = Il2CppString*> T get_ServerFQDN() {
		return ((T (*)(ChatConfig*))(Il2CppBase() + 0x13F1814))(this);
	}
	template <typename T = void> T set_ServerFQDN(Il2CppString* value) {
		return ((T (*)(ChatConfig*, Il2CppString*))(Il2CppBase() + 0x13F181C))(this, value);
	}

};

