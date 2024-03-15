#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class BugReportWindow : public UIWindow1<WindowContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BugReportWindow"));
	}

	template <typename R = uintptr_t> R& closeButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& priorityDropdown() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = UnityEngineUI::ExtendedDropdown*> R& bugTypeDropdown() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& bugCaptionInputField() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& bugDescriptionInputField() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& bugDescriptionPlaceholderText() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& sendButton() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& timerRoot() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& reasonRoot() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& tipsRoot() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& timerText() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& _processing() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = bool> R& isBugReportSending() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = Il2CppString*> R& _url() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = bool> R& hasReportWithoutResponce() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = uintptr_t> R& _onSendButtonClickCoroutine() {
		return *(R*)((uintptr_t)this + 0xF0);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(BugReportWindow*))(Il2CppBase() + 0x15A0BD4))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(BugReportWindow*, float))(Il2CppBase() + 0x15A1F74))(this, deltaTime);
	}
	template <typename R = bool> R HaveAvailableBugReport(AccountEntity* account) {
		return ((R (*)(BugReportWindow*, AccountEntity*))(Il2CppBase() + 0x15A21DC))(this, account);
	}
	template <typename R = Il2CppString*> R GetButtonTime(AccountEntity* account) {
		return ((R (*)(BugReportWindow*, AccountEntity*))(Il2CppBase() + 0x15A23AC))(this, account);
	}
	template <typename R = Il2CppString*> R GetFileName() {
		return ((R (*)(BugReportWindow*))(Il2CppBase() + 0x15A2638))(this);
	}
	template <typename R = BugReport*> R GetReportData(Il2CppString* fileName) {
		return ((R (*)(BugReportWindow*, Il2CppString*))(Il2CppBase() + 0x15A26D4))(this, fileName);
	}
	template <typename R = uintptr_t> R CreateRequestFromBody(Il2CppString* url, Il2CppArray<uint8_t>* body, Il2CppString* contentType) {
		return ((R (*)(BugReportWindow*, Il2CppString*, Il2CppArray<uint8_t>*, Il2CppString*))(Il2CppBase() + 0x15A3348))(this, url, body, contentType);
	}
	template <typename R = void> R OnSendButtonClick() {
		return ((R (*)(BugReportWindow*))(Il2CppBase() + 0x15A3478))(this);
	}
	template <typename R = uintptr_t> R OnSendButtonClickCoroutine() {
		return ((R (*)(BugReportWindow*))(Il2CppBase() + 0x15A34CC))(this);
	}
	template <typename R = uintptr_t> R GetUrlFromLocalResource() {
		return ((R (*)(BugReportWindow*))(Il2CppBase() + 0x15A3544))(this);
	}
	template <typename R = void> R ShowReportSentWindow(Il2CppString* id) {
		return ((R (*)(BugReportWindow*, Il2CppString*))(Il2CppBase() + 0x15A35BC))(this, id);
	}
	template <typename R = void> R ShowReportSentErrorWindow() {
		return ((R (*)(BugReportWindow*))(Il2CppBase() + 0x15A38FC))(this);
	}
	template <typename R = void> R SendJson(Il2CppString* url, Il2CppString* json, UnityCommonLogger* logger) {
		return ((R (*)(BugReportWindow*, Il2CppString*, Il2CppString*, UnityCommonLogger*))(Il2CppBase() + 0x15A3D2C))(this, url, json, logger);
	}
	template <typename R = void> R SendData(Il2CppString* url, Il2CppString* json, Il2CppArray<uint8_t>* logData, Il2CppString* fileName, UnityCommonLogger* logger) {
		return ((R (*)(BugReportWindow*, Il2CppString*, Il2CppString*, Il2CppArray<uint8_t>*, Il2CppString*, UnityCommonLogger*))(Il2CppBase() + 0x15A3E54))(this, url, json, logData, fileName, logger);
	}
	template <typename R = void> R GetUrlFromLocalResourceb__26_0(Il2CppString* url) {
		return ((R (*)(BugReportWindow*, Il2CppString*))(Il2CppBase() + 0x15A3FFC))(this, url);
	}
	template <typename R = void> R ShowReportSentWindowb__27_0(int32_t b) {
		return ((R (*)(BugReportWindow*, int32_t))(Il2CppBase() + 0x15A4004))(this, b);
	}

};

