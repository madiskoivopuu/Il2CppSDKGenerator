#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatConfig"));
	}

	template <typename R = bool> R& LoginV2() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& RegistrationV2() {
		return *(R*)((uintptr_t)this + 0x11);
	}
	template <typename R = bool> R& ReloginV2() {
		return *(R*)((uintptr_t)this + 0x12);
	}
	template <typename R = int32_t> R& ContactsFavouriteMax() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = int32_t> R& ContactsRecentMax() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& ServerIP() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& ServerFQDN() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = bool> R get_LoginV2() {
		return ((R (*)(ChatConfig*))(Il2CppBase() + 0x13F17A8))(this);
	}
	template <typename R = void> R set_LoginV2(bool value) {
		return ((R (*)(ChatConfig*, bool))(Il2CppBase() + 0x13F17B0))(this, value);
	}
	template <typename R = bool> R get_RegistrationV2() {
		return ((R (*)(ChatConfig*))(Il2CppBase() + 0x13F17BC))(this);
	}
	template <typename R = void> R set_RegistrationV2(bool value) {
		return ((R (*)(ChatConfig*, bool))(Il2CppBase() + 0x13F17C4))(this, value);
	}
	template <typename R = bool> R get_ReloginV2() {
		return ((R (*)(ChatConfig*))(Il2CppBase() + 0x13F17D0))(this);
	}
	template <typename R = void> R set_ReloginV2(bool value) {
		return ((R (*)(ChatConfig*, bool))(Il2CppBase() + 0x13F17D8))(this, value);
	}
	template <typename R = int32_t> R get_ContactsFavouriteMax() {
		return ((R (*)(ChatConfig*))(Il2CppBase() + 0x13F17E4))(this);
	}
	template <typename R = void> R set_ContactsFavouriteMax(int32_t value) {
		return ((R (*)(ChatConfig*, int32_t))(Il2CppBase() + 0x13F17EC))(this, value);
	}
	template <typename R = int32_t> R get_ContactsRecentMax() {
		return ((R (*)(ChatConfig*))(Il2CppBase() + 0x13F17F4))(this);
	}
	template <typename R = void> R set_ContactsRecentMax(int32_t value) {
		return ((R (*)(ChatConfig*, int32_t))(Il2CppBase() + 0x13F17FC))(this, value);
	}
	template <typename R = Il2CppString*> R get_ServerIP() {
		return ((R (*)(ChatConfig*))(Il2CppBase() + 0x13F1804))(this);
	}
	template <typename R = void> R set_ServerIP(Il2CppString* value) {
		return ((R (*)(ChatConfig*, Il2CppString*))(Il2CppBase() + 0x13F180C))(this, value);
	}
	template <typename R = Il2CppString*> R get_ServerFQDN() {
		return ((R (*)(ChatConfig*))(Il2CppBase() + 0x13F1814))(this);
	}
	template <typename R = void> R set_ServerFQDN(Il2CppString* value) {
		return ((R (*)(ChatConfig*, Il2CppString*))(Il2CppBase() + 0x13F181C))(this, value);
	}

};

