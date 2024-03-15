#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DeeplinkManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DeeplinkManager"));
	}

	template <typename R = DeeplinkManager*> static R& Instance() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = KefirIdDeeplinkData*> R& ToSendData() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> static R& TOKEN_KEY() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& STATE_KEY() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = DeeplinkManager*> static R get_Instance() {
		return ((R (*)(void *))(Il2CppBase() + 0xEB664C))(0);
	}
	template <typename R = void> static R set_Instance(DeeplinkManager* value) {
		return ((R (*)(void *, DeeplinkManager*))(Il2CppBase() + 0xEB6698))(0, value);
	}
	template <typename R = KefirIdDeeplinkData*> R get_ToSendData() {
		return ((R (*)(DeeplinkManager*))(Il2CppBase() + 0xEB66EC))(this);
	}
	template <typename R = void> R set_ToSendData(KefirIdDeeplinkData* value) {
		return ((R (*)(DeeplinkManager*, KefirIdDeeplinkData*))(Il2CppBase() + 0xEB66F4))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(DeeplinkManager*))(Il2CppBase() + 0xEB66FC))(this);
	}
	template <typename R = void> R OnDeeplinkReceived(Il2CppString* url) {
		return ((R (*)(DeeplinkManager*, Il2CppString*))(Il2CppBase() + 0xEB69AC))(this, url);
	}
	template <typename R = void> R Save(KefirIdDeeplinkData* data) {
		return ((R (*)(DeeplinkManager*, KefirIdDeeplinkData*))(Il2CppBase() + 0xEB6FD0))(this, data);
	}
	template <typename R = bool> R TryLoad(uintptr_t* data) {
		return ((R (*)(DeeplinkManager*, uintptr_t*))(Il2CppBase() + 0xEB6A88))(this, data);
	}
	template <typename R = bool> R TrySendKefirIdLinkRequest() {
		return ((R (*)(DeeplinkManager*))(Il2CppBase() + 0xEB6BFC))(this);
	}
	template <typename R = void> R Clear() {
		return ((R (*)(DeeplinkManager*))(Il2CppBase() + 0xEB710C))(this);
	}
	template <typename R = void> R OnDestroy() {
		return ((R (*)(DeeplinkManager*))(Il2CppBase() + 0xEB719C))(this);
	}

};

