#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DTDEditor {

class DTDEditorModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "DTDEditor", "DTDEditorModel"));
	}

	template <typename R = DTDEditor::DTDEditorWindow*> R& ActiveWindow() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& IsLogEnabled() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = bool> R& IsAnalyticsEnabled() {
		return *(R*)((uintptr_t)this + 0x15);
	}
	template <typename R = bool> R& IsPushMessagesEnabled() {
		return *(R*)((uintptr_t)this + 0x16);
	}
	template <typename R = DTDEditor::DTDPlatform*> R& ActivePlatform() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 Il2CppList<DTDEditor::DTDCredentials*>*& Credentials() {
		return *(Il2CppList<DTDEditor::DTDCredentials*>**)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& PushGameObjectName() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> R& PushGameObjectScriptIndex() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> R& PushTokenFunctionIndex() {
		return *(R*)((uintptr_t)this + 0x34);
	}
	template <typename R = int32_t> R& PushTokenErrorFunctionIndex() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> R& PushReceivedFunctionIndex() {
		return *(R*)((uintptr_t)this + 0x3C);
	}
	template <typename R = int32_t> R& PushOpenedFunctionIndex() {
		return *(R*)((uintptr_t)this + 0x40);
	}

	template <typename R = DTDEditor::DTDEditorWindow*> R get_ActiveWindow() {
		return ((R (*)(DTDEditorModel*))(Il2CppBase() + 0x1646F68))(this);
	}
	template <typename R = void> R set_ActiveWindow(DTDEditor::DTDEditorWindow* value) {
		return ((R (*)(DTDEditorModel*, DTDEditor::DTDEditorWindow*))(Il2CppBase() + 0x1646F70))(this, value);
	}
	template <typename R = bool> R get_IsLogEnabled() {
		return ((R (*)(DTDEditorModel*))(Il2CppBase() + 0x1646F78))(this);
	}
	template <typename R = void> R set_IsLogEnabled(bool value) {
		return ((R (*)(DTDEditorModel*, bool))(Il2CppBase() + 0x1646F80))(this, value);
	}
	template <typename R = bool> R get_IsAnalyticsEnabled() {
		return ((R (*)(DTDEditorModel*))(Il2CppBase() + 0x1646F8C))(this);
	}
	template <typename R = void> R set_IsAnalyticsEnabled(bool value) {
		return ((R (*)(DTDEditorModel*, bool))(Il2CppBase() + 0x1646F94))(this, value);
	}
	template <typename R = bool> R get_IsPushMessagesEnabled() {
		return ((R (*)(DTDEditorModel*))(Il2CppBase() + 0x1646FA0))(this);
	}
	template <typename R = void> R set_IsPushMessagesEnabled(bool value) {
		return ((R (*)(DTDEditorModel*, bool))(Il2CppBase() + 0x1646FA8))(this, value);
	}
	template <typename R = DTDEditor::DTDPlatform*> R get_ActivePlatform() {
		return ((R (*)(DTDEditorModel*))(Il2CppBase() + 0x1646FB4))(this);
	}
	template <typename R = void> R set_ActivePlatform(DTDEditor::DTDPlatform* value) {
		return ((R (*)(DTDEditorModel*, DTDEditor::DTDPlatform*))(Il2CppBase() + 0x1646FBC))(this, value);
	}
	 Il2CppList<DTDEditor::DTDCredentials*>* get_Credentials() {
		return ((Il2CppList<DTDEditor::DTDCredentials*>* (*)(DTDEditorModel*))(Il2CppBase() + 0x1646FC4))(this);
	}
	template <typename R = void> R set_Credentials(Il2CppList<DTDEditor::DTDCredentials*>* value) {
		return ((R (*)(DTDEditorModel*, Il2CppList<DTDEditor::DTDCredentials*>*))(Il2CppBase() + 0x1646FCC))(this, value);
	}
	template <typename R = Il2CppString*> R get_PushGameObjectName() {
		return ((R (*)(DTDEditorModel*))(Il2CppBase() + 0x1646FD4))(this);
	}
	template <typename R = void> R set_PushGameObjectName(Il2CppString* value) {
		return ((R (*)(DTDEditorModel*, Il2CppString*))(Il2CppBase() + 0x1646FDC))(this, value);
	}
	template <typename R = int32_t> R get_PushGameObjectScriptIndex() {
		return ((R (*)(DTDEditorModel*))(Il2CppBase() + 0x1646FE4))(this);
	}
	template <typename R = void> R set_PushGameObjectScriptIndex(int32_t value) {
		return ((R (*)(DTDEditorModel*, int32_t))(Il2CppBase() + 0x1646FEC))(this, value);
	}
	template <typename R = int32_t> R get_PushTokenFunctionIndex() {
		return ((R (*)(DTDEditorModel*))(Il2CppBase() + 0x1646FF4))(this);
	}
	template <typename R = void> R set_PushTokenFunctionIndex(int32_t value) {
		return ((R (*)(DTDEditorModel*, int32_t))(Il2CppBase() + 0x1646FFC))(this, value);
	}
	template <typename R = int32_t> R get_PushTokenErrorFunctionIndex() {
		return ((R (*)(DTDEditorModel*))(Il2CppBase() + 0x1647004))(this);
	}
	template <typename R = void> R set_PushTokenErrorFunctionIndex(int32_t value) {
		return ((R (*)(DTDEditorModel*, int32_t))(Il2CppBase() + 0x164700C))(this, value);
	}
	template <typename R = int32_t> R get_PushReceivedFunctionIndex() {
		return ((R (*)(DTDEditorModel*))(Il2CppBase() + 0x1647014))(this);
	}
	template <typename R = void> R set_PushReceivedFunctionIndex(int32_t value) {
		return ((R (*)(DTDEditorModel*, int32_t))(Il2CppBase() + 0x164701C))(this, value);
	}
	template <typename R = int32_t> R get_PushOpenedFunctionIndex() {
		return ((R (*)(DTDEditorModel*))(Il2CppBase() + 0x1647024))(this);
	}
	template <typename R = void> R set_PushOpenedFunctionIndex(int32_t value) {
		return ((R (*)(DTDEditorModel*, int32_t))(Il2CppBase() + 0x164702C))(this, value);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(DTDEditorModel*))(Il2CppBase() + 0x1647100))(this);
	}

};

}
