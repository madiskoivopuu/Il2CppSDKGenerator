#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AdminGetUserBackupResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AdminGetUserBackupResponse"));
	}

	 static MessageParser1<ProtoModels::AdminGetUserBackupResponse*>*& _parser() {
		return *(MessageParser1<ProtoModels::AdminGetUserBackupResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& CodeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& code_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& CodeMessageFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& codeMessage_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& BackupsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::AdminBackupInfo*>*& _repeated_backups_codec() {
		return *(FieldCodec1<ProtoModels::AdminBackupInfo*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<ProtoModels::AdminBackupInfo*>*& backups_() {
		return *(RepeatedField1<ProtoModels::AdminBackupInfo*>**)((uintptr_t)this + 0x20);
	}

	 static MessageParser1<ProtoModels::AdminGetUserBackupResponse*>* get_Parser() {
		return ((MessageParser1<ProtoModels::AdminGetUserBackupResponse*>* (*)(void *))(Il2CppBase() + 0x18B8BD8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x18B8C3C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(AdminGetUserBackupResponse*))(Il2CppBase() + 0x18B8D5C))(this);
	}
	template <typename R = ProtoModels::AdminGetUserBackupResponse*> R Clone() {
		return ((R (*)(AdminGetUserBackupResponse*))(Il2CppBase() + 0x18B8EF0))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(AdminGetUserBackupResponse*))(Il2CppBase() + 0x18B8F4C))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(AdminGetUserBackupResponse*, int32_t))(Il2CppBase() + 0x18B8F54))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(AdminGetUserBackupResponse*))(Il2CppBase() + 0x18B8F5C))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(AdminGetUserBackupResponse*, Il2CppString*))(Il2CppBase() + 0x18B8F64))(this, value);
	}
	 RepeatedField1<ProtoModels::AdminBackupInfo*>* get_Backups() {
		return ((RepeatedField1<ProtoModels::AdminBackupInfo*>* (*)(AdminGetUserBackupResponse*))(Il2CppBase() + 0x18B8FE4))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(AdminGetUserBackupResponse*, Il2CppObject*))(Il2CppBase() + 0x18B8FEC))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::AdminGetUserBackupResponse* other) {
		return ((R (*)(AdminGetUserBackupResponse*, ProtoModels::AdminGetUserBackupResponse*))(Il2CppBase() + 0x18B905C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(AdminGetUserBackupResponse*))(Il2CppBase() + 0x18B910C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(AdminGetUserBackupResponse*))(Il2CppBase() + 0x18B9194))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(AdminGetUserBackupResponse*, uintptr_t))(Il2CppBase() + 0x18B91F8))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(AdminGetUserBackupResponse*))(Il2CppBase() + 0x18B9308))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::AdminGetUserBackupResponse* other) {
		return ((R (*)(AdminGetUserBackupResponse*, ProtoModels::AdminGetUserBackupResponse*))(Il2CppBase() + 0x18B9438))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(AdminGetUserBackupResponse*, uintptr_t))(Il2CppBase() + 0x18B94D4))(this, input);
	}

};

}
