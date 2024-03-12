#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class BugReportWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BugReportWindow"));
	}

	template <typename T = uintptr_t> T& closeButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& priorityDropdown() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& bugTypeDropdown() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& bugCaptionInputField() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& bugDescriptionInputField() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& bugDescriptionPlaceholderText() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& sendButton() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& timerRoot() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& reasonRoot() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& tipsRoot() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& timerText() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& _processing() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = bool> T& isBugReportSending() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppString*> T& _url() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = bool> T& hasReportWithoutResponce() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& _onSendButtonClickCoroutine() {
		return *(T*)((uintptr_t)this + 0xF0);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(BugReportWindow*))(Il2CppBase() + 0x15A0BD4))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(BugReportWindow*, float))(Il2CppBase() + 0x15A1F74))(this, deltaTime);
	}
	template <typename T = bool> T HaveAvailableBugReport(uintptr_t account) {
		return ((T (*)(BugReportWindow*, uintptr_t))(Il2CppBase() + 0x15A21DC))(this, account);
	}
	template <typename T = Il2CppString*> T GetButtonTime(uintptr_t account) {
		return ((T (*)(BugReportWindow*, uintptr_t))(Il2CppBase() + 0x15A23AC))(this, account);
	}
	template <typename T = Il2CppString*> T GetFileName() {
		return ((T (*)(BugReportWindow*))(Il2CppBase() + 0x15A2638))(this);
	}
	template <typename T = uintptr_t> T GetReportData(Il2CppString* fileName) {
		return ((T (*)(BugReportWindow*, Il2CppString*))(Il2CppBase() + 0x15A26D4))(this, fileName);
	}
	template <typename T = uintptr_t> T CreateRequestFromBody(Il2CppString* url, Il2CppArray<uintptr_t>* body, Il2CppString* contentType) {
		return ((T (*)(BugReportWindow*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x15A3348))(this, url, body, contentType);
	}
	template <typename T = void> T OnSendButtonClick() {
		return ((T (*)(BugReportWindow*))(Il2CppBase() + 0x15A3478))(this);
	}
	template <typename T = uintptr_t> T OnSendButtonClickCoroutine() {
		return ((T (*)(BugReportWindow*))(Il2CppBase() + 0x15A34CC))(this);
	}
	template <typename T = uintptr_t> T GetUrlFromLocalResource() {
		return ((T (*)(BugReportWindow*))(Il2CppBase() + 0x15A3544))(this);
	}
	template <typename T = void> T ShowReportSentWindow(Il2CppString* id) {
		return ((T (*)(BugReportWindow*, Il2CppString*))(Il2CppBase() + 0x15A35BC))(this, id);
	}
	template <typename T = void> T ShowReportSentErrorWindow() {
		return ((T (*)(BugReportWindow*))(Il2CppBase() + 0x15A38FC))(this);
	}
	template <typename T = void> T SendJson(Il2CppString* url, Il2CppString* json, uintptr_t logger) {
		return ((T (*)(BugReportWindow*, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x15A3D2C))(this, url, json, logger);
	}
	template <typename T = void> T SendData(Il2CppString* url, Il2CppString* json, Il2CppArray<uintptr_t>* logData, Il2CppString* fileName, uintptr_t logger) {
		return ((T (*)(BugReportWindow*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x15A3E54))(this, url, json, logData, fileName, logger);
	}
	template <typename T = void> T GetUrlFromLocalResourceb__26_0(Il2CppString* url) {
		return ((T (*)(BugReportWindow*, Il2CppString*))(Il2CppBase() + 0x15A3FFC))(this, url);
	}
	template <typename T = void> T ShowReportSentWindowb__27_0(int32_t b) {
		return ((T (*)(BugReportWindow*, int32_t))(Il2CppBase() + 0x15A4004))(this, b);
	}

};

}
