#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DTDEditor {

class DTDEditorModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "DTDEditor", "DTDEditorModel"));
	}

	template <typename T = uintptr_t> T& ActiveWindow() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& IsLogEnabled() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& IsAnalyticsEnabled() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = bool> T& IsPushMessagesEnabled() {
		return *(T*)((uintptr_t)this + 0x16);
	}
	template <typename T = uintptr_t> T& ActivePlatform() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& Credentials() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& PushGameObjectName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& PushGameObjectScriptIndex() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& PushTokenFunctionIndex() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& PushTokenErrorFunctionIndex() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& PushReceivedFunctionIndex() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& PushOpenedFunctionIndex() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = uintptr_t> T get_ActiveWindow() {
		return ((T (*)(DTDEditorModel*))(Il2CppBase() + 0x1646F68))(this);
	}
	template <typename T = void> T set_ActiveWindow(uintptr_t value) {
		return ((T (*)(DTDEditorModel*, uintptr_t))(Il2CppBase() + 0x1646F70))(this, value);
	}
	template <typename T = bool> T get_IsLogEnabled() {
		return ((T (*)(DTDEditorModel*))(Il2CppBase() + 0x1646F78))(this);
	}
	template <typename T = void> T set_IsLogEnabled(bool value) {
		return ((T (*)(DTDEditorModel*, bool))(Il2CppBase() + 0x1646F80))(this, value);
	}
	template <typename T = bool> T get_IsAnalyticsEnabled() {
		return ((T (*)(DTDEditorModel*))(Il2CppBase() + 0x1646F8C))(this);
	}
	template <typename T = void> T set_IsAnalyticsEnabled(bool value) {
		return ((T (*)(DTDEditorModel*, bool))(Il2CppBase() + 0x1646F94))(this, value);
	}
	template <typename T = bool> T get_IsPushMessagesEnabled() {
		return ((T (*)(DTDEditorModel*))(Il2CppBase() + 0x1646FA0))(this);
	}
	template <typename T = void> T set_IsPushMessagesEnabled(bool value) {
		return ((T (*)(DTDEditorModel*, bool))(Il2CppBase() + 0x1646FA8))(this, value);
	}
	template <typename T = uintptr_t> T get_ActivePlatform() {
		return ((T (*)(DTDEditorModel*))(Il2CppBase() + 0x1646FB4))(this);
	}
	template <typename T = void> T set_ActivePlatform(uintptr_t value) {
		return ((T (*)(DTDEditorModel*, uintptr_t))(Il2CppBase() + 0x1646FBC))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_Credentials() {
		return ((T (*)(DTDEditorModel*))(Il2CppBase() + 0x1646FC4))(this);
	}
	template <typename T = void> T set_Credentials(Il2CppList<uintptr_t>* value) {
		return ((T (*)(DTDEditorModel*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1646FCC))(this, value);
	}
	template <typename T = Il2CppString*> T get_PushGameObjectName() {
		return ((T (*)(DTDEditorModel*))(Il2CppBase() + 0x1646FD4))(this);
	}
	template <typename T = void> T set_PushGameObjectName(Il2CppString* value) {
		return ((T (*)(DTDEditorModel*, Il2CppString*))(Il2CppBase() + 0x1646FDC))(this, value);
	}
	template <typename T = int32_t> T get_PushGameObjectScriptIndex() {
		return ((T (*)(DTDEditorModel*))(Il2CppBase() + 0x1646FE4))(this);
	}
	template <typename T = void> T set_PushGameObjectScriptIndex(int32_t value) {
		return ((T (*)(DTDEditorModel*, int32_t))(Il2CppBase() + 0x1646FEC))(this, value);
	}
	template <typename T = int32_t> T get_PushTokenFunctionIndex() {
		return ((T (*)(DTDEditorModel*))(Il2CppBase() + 0x1646FF4))(this);
	}
	template <typename T = void> T set_PushTokenFunctionIndex(int32_t value) {
		return ((T (*)(DTDEditorModel*, int32_t))(Il2CppBase() + 0x1646FFC))(this, value);
	}
	template <typename T = int32_t> T get_PushTokenErrorFunctionIndex() {
		return ((T (*)(DTDEditorModel*))(Il2CppBase() + 0x1647004))(this);
	}
	template <typename T = void> T set_PushTokenErrorFunctionIndex(int32_t value) {
		return ((T (*)(DTDEditorModel*, int32_t))(Il2CppBase() + 0x164700C))(this, value);
	}
	template <typename T = int32_t> T get_PushReceivedFunctionIndex() {
		return ((T (*)(DTDEditorModel*))(Il2CppBase() + 0x1647014))(this);
	}
	template <typename T = void> T set_PushReceivedFunctionIndex(int32_t value) {
		return ((T (*)(DTDEditorModel*, int32_t))(Il2CppBase() + 0x164701C))(this, value);
	}
	template <typename T = int32_t> T get_PushOpenedFunctionIndex() {
		return ((T (*)(DTDEditorModel*))(Il2CppBase() + 0x1647024))(this);
	}
	template <typename T = void> T set_PushOpenedFunctionIndex(int32_t value) {
		return ((T (*)(DTDEditorModel*, int32_t))(Il2CppBase() + 0x164702C))(this, value);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(DTDEditorModel*))(Il2CppBase() + 0x1647100))(this);
	}

};

}
