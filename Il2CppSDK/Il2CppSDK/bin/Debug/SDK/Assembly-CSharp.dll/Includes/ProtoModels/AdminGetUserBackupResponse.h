#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AdminGetUserBackupResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AdminGetUserBackupResponse"));
	}

	template <typename T = MessageParser1AdminGetUserBackupResponse*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CodeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& code_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& CodeMessageFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& codeMessage_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& BackupsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1AdminBackupInfo*>*> static T& _repeated_backups_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1AdminBackupInfo*>*> T& backups_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = MessageParser1AdminGetUserBackupResponse*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x18B8BD8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x18B8C3C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(AdminGetUserBackupResponse*))(Il2CppBase() + 0x18B8D5C))(this);
	}
	template <typename T = AdminGetUserBackupResponse*> T Clone() {
		return ((T (*)(AdminGetUserBackupResponse*))(Il2CppBase() + 0x18B8EF0))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(AdminGetUserBackupResponse*))(Il2CppBase() + 0x18B8F4C))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(AdminGetUserBackupResponse*, int32_t))(Il2CppBase() + 0x18B8F54))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(AdminGetUserBackupResponse*))(Il2CppBase() + 0x18B8F5C))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(AdminGetUserBackupResponse*, Il2CppString*))(Il2CppBase() + 0x18B8F64))(this, value);
	}
	template <typename T = RepeatedField1AdminBackupInfo*>*> T get_Backups() {
		return ((T (*)(AdminGetUserBackupResponse*))(Il2CppBase() + 0x18B8FE4))(this);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(AdminGetUserBackupResponse*, Il2CppObject*))(Il2CppBase() + 0x18B8FEC))(this, other);
	}
	template <typename T = bool> T Equals_1(AdminGetUserBackupResponse* other) {
		return ((T (*)(AdminGetUserBackupResponse*, AdminGetUserBackupResponse*))(Il2CppBase() + 0x18B905C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(AdminGetUserBackupResponse*))(Il2CppBase() + 0x18B910C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(AdminGetUserBackupResponse*))(Il2CppBase() + 0x18B9194))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(AdminGetUserBackupResponse*, uintptr_t))(Il2CppBase() + 0x18B91F8))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(AdminGetUserBackupResponse*))(Il2CppBase() + 0x18B9308))(this);
	}
	template <typename T = void> T MergeFrom(AdminGetUserBackupResponse* other) {
		return ((T (*)(AdminGetUserBackupResponse*, AdminGetUserBackupResponse*))(Il2CppBase() + 0x18B9438))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(AdminGetUserBackupResponse*, uintptr_t))(Il2CppBase() + 0x18B94D4))(this, input);
	}

};

}
