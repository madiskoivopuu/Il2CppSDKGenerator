#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DTDEditor {

class DevToDevSDK
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "DTDEditor", "DevToDevSDK"));
	}

	template <typename T = bool> T& IsAnalyticsEnabled() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& IsPushMessagesEnabled() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = bool> T& IsLogEnabled() {
		return *(T*)((uintptr_t)this + 0x1A);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Credentials() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& PushListeners() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& OnTokenReceived() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& OnTokenFailed() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& OnPushReceived() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& OnPushOpened() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(DevToDevSDK*))(Il2CppBase() + 0xEC1CCC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(DevToDevSDK*))(Il2CppBase() + 0xEC1D30))(this);
	}
	template <typename T = void> T InitializeAnalytics(uintptr_t platform) {
		return ((T (*)(DevToDevSDK*, uintptr_t))(Il2CppBase() + 0xEC1F08))(this, platform);
	}
	template <typename T = void> T ExecuteDeveloperDelegate(Il2CppString* methodName, Il2CppArray<uintptr_t>* parameters) {
		return ((T (*)(DevToDevSDK*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xEC204C))(this, methodName, parameters);
	}
	template <typename T = void> T Startb__10_0(Il2CppString* token) {
		return ((T (*)(DevToDevSDK*, Il2CppString*))(Il2CppBase() + 0xEC2144))(this, token);
	}
	template <typename T = void> T Startb__10_1(Il2CppString* error) {
		return ((T (*)(DevToDevSDK*, Il2CppString*))(Il2CppBase() + 0xEC2204))(this, error);
	}
	template <typename T = void> T Startb__10_2(void* pushData) {
		return ((T (*)(DevToDevSDK*, void*))(Il2CppBase() + 0xEC22C4))(this, pushData);
	}
	template <typename T = void> T Startb__10_3(uintptr_t pushMessage, uintptr_t actionButton) {
		return ((T (*)(DevToDevSDK*, uintptr_t, uintptr_t))(Il2CppBase() + 0xEC2384))(this, pushMessage, actionButton);
	}

};

}
