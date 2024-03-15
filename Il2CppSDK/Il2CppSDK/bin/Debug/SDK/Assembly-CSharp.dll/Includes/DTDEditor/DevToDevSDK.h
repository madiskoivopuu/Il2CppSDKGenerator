#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DTDEditor {

class DevToDevSDK
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "DTDEditor", "DevToDevSDK"));
	}

	template <typename R = bool> R& IsAnalyticsEnabled() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& IsPushMessagesEnabled() {
		return *(R*)((uintptr_t)this + 0x19);
	}
	template <typename R = bool> R& IsLogEnabled() {
		return *(R*)((uintptr_t)this + 0x1A);
	}
	template <typename R = Il2CppArray<DTDEditor::DTDCredentials*>*> R& Credentials() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& PushListeners() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& OnTokenReceived() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppString*> R& OnTokenFailed() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppString*> R& OnPushReceived() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = Il2CppString*> R& OnPushOpened() {
		return *(R*)((uintptr_t)this + 0x48);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(DevToDevSDK*))(Il2CppBase() + 0xEC1CCC))(this);
	}
	template <typename R = void> R Start() {
		return ((R (*)(DevToDevSDK*))(Il2CppBase() + 0xEC1D30))(this);
	}
	template <typename R = void> R InitializeAnalytics(DTDEditor::DTDPlatform platform) {
		return ((R (*)(DevToDevSDK*, DTDEditor::DTDPlatform))(Il2CppBase() + 0xEC1F08))(this, platform);
	}
	template <typename R = void> R ExecuteDeveloperDelegate(Il2CppString* methodName, Il2CppArray<Il2CppObject*>* parameters) {
		return ((R (*)(DevToDevSDK*, Il2CppString*, Il2CppArray<Il2CppObject*>*))(Il2CppBase() + 0xEC204C))(this, methodName, parameters);
	}
	template <typename R = void> R Startb__10_0(Il2CppString* token) {
		return ((R (*)(DevToDevSDK*, Il2CppString*))(Il2CppBase() + 0xEC2144))(this, token);
	}
	template <typename R = void> R Startb__10_1(Il2CppString* error) {
		return ((R (*)(DevToDevSDK*, Il2CppString*))(Il2CppBase() + 0xEC2204))(this, error);
	}
	template <typename R = void> R Startb__10_2(IDictionary2<Il2CppString*, Il2CppString*>* pushData) {
		return ((R (*)(DevToDevSDK*, IDictionary2<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0xEC22C4))(this, pushData);
	}
	template <typename R = void> R Startb__10_3(uintptr_t pushMessage, uintptr_t actionButton) {
		return ((R (*)(DevToDevSDK*, uintptr_t, uintptr_t))(Il2CppBase() + 0xEC2384))(this, pushMessage, actionButton);
	}

};

}
