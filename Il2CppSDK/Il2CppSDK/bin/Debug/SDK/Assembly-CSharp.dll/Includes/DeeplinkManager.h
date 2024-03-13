#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DeeplinkManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DeeplinkManager"));
	}

	template <typename T = DeeplinkManager*> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = KefirIdDeeplinkData*> T& ToSendData() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> static T& TOKEN_KEY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& STATE_KEY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = DeeplinkManager*> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0xEB664C))(0);
	}
	template <typename T = void> static T set_Instance(DeeplinkManager* value) {
		return ((T (*)(void *, DeeplinkManager*))(Il2CppBase() + 0xEB6698))(0, value);
	}
	template <typename T = KefirIdDeeplinkData*> T get_ToSendData() {
		return ((T (*)(DeeplinkManager*))(Il2CppBase() + 0xEB66EC))(this);
	}
	template <typename T = void> T set_ToSendData(KefirIdDeeplinkData* value) {
		return ((T (*)(DeeplinkManager*, KefirIdDeeplinkData*))(Il2CppBase() + 0xEB66F4))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(DeeplinkManager*))(Il2CppBase() + 0xEB66FC))(this);
	}
	template <typename T = void> T OnDeeplinkReceived(Il2CppString* url) {
		return ((T (*)(DeeplinkManager*, Il2CppString*))(Il2CppBase() + 0xEB69AC))(this, url);
	}
	template <typename T = void> T Save(KefirIdDeeplinkData* data) {
		return ((T (*)(DeeplinkManager*, KefirIdDeeplinkData*))(Il2CppBase() + 0xEB6FD0))(this, data);
	}
	template <typename T = bool> T TryLoad(uintptr_t* data) {
		return ((T (*)(DeeplinkManager*, uintptr_t*))(Il2CppBase() + 0xEB6A88))(this, data);
	}
	template <typename T = bool> T TrySendKefirIdLinkRequest() {
		return ((T (*)(DeeplinkManager*))(Il2CppBase() + 0xEB6BFC))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(DeeplinkManager*))(Il2CppBase() + 0xEB710C))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(DeeplinkManager*))(Il2CppBase() + 0xEB719C))(this);
	}

};

