#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AdminBackupInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AdminBackupInfo"));
	}

	 static MessageParser1<ProtoModels::AdminBackupInfo*>*& _parser() {
		return *(MessageParser1<ProtoModels::AdminBackupInfo*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& IDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& iD_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& DateTimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& dateTime_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& DescriptionFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& description_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& JsonFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& json_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& BtypeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::BackupType> R& btype_() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	 static MessageParser1<ProtoModels::AdminBackupInfo*>* get_Parser() {
		return ((MessageParser1<ProtoModels::AdminBackupInfo*>* (*)(void *))(Il2CppBase() + 0x18B0FA4))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x18B1008))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(AdminBackupInfo*))(Il2CppBase() + 0x18B1128))(this);
	}
	template <typename R = ProtoModels::AdminBackupInfo*> R Clone() {
		return ((R (*)(AdminBackupInfo*))(Il2CppBase() + 0x18B1250))(this);
	}
	template <typename R = int64_t> R get_ID() {
		return ((R (*)(AdminBackupInfo*))(Il2CppBase() + 0x18B12AC))(this);
	}
	template <typename R = void> R set_ID(int64_t value) {
		return ((R (*)(AdminBackupInfo*, int64_t))(Il2CppBase() + 0x18B12B4))(this, value);
	}
	template <typename R = int64_t> R get_DateTime() {
		return ((R (*)(AdminBackupInfo*))(Il2CppBase() + 0x18B12BC))(this);
	}
	template <typename R = void> R set_DateTime(int64_t value) {
		return ((R (*)(AdminBackupInfo*, int64_t))(Il2CppBase() + 0x18B12C4))(this, value);
	}
	template <typename R = Il2CppString*> R get_Description() {
		return ((R (*)(AdminBackupInfo*))(Il2CppBase() + 0x18B12CC))(this);
	}
	template <typename R = void> R set_Description(Il2CppString* value) {
		return ((R (*)(AdminBackupInfo*, Il2CppString*))(Il2CppBase() + 0x18B12D4))(this, value);
	}
	template <typename R = Il2CppString*> R get_Json() {
		return ((R (*)(AdminBackupInfo*))(Il2CppBase() + 0x18B1354))(this);
	}
	template <typename R = void> R set_Json(Il2CppString* value) {
		return ((R (*)(AdminBackupInfo*, Il2CppString*))(Il2CppBase() + 0x18B135C))(this, value);
	}
	template <typename R = ProtoModels::BackupType> R get_Btype() {
		return ((R (*)(AdminBackupInfo*))(Il2CppBase() + 0x18B13DC))(this);
	}
	template <typename R = void> R set_Btype(ProtoModels::BackupType value) {
		return ((R (*)(AdminBackupInfo*, ProtoModels::BackupType))(Il2CppBase() + 0x18B13E4))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(AdminBackupInfo*, Il2CppObject*))(Il2CppBase() + 0x18B13EC))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::AdminBackupInfo* other) {
		return ((R (*)(AdminBackupInfo*, ProtoModels::AdminBackupInfo*))(Il2CppBase() + 0x18B145C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(AdminBackupInfo*))(Il2CppBase() + 0x18B14F0))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(AdminBackupInfo*))(Il2CppBase() + 0x18B15C0))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(AdminBackupInfo*, uintptr_t))(Il2CppBase() + 0x18B1624))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(AdminBackupInfo*))(Il2CppBase() + 0x18B173C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::AdminBackupInfo* other) {
		return ((R (*)(AdminBackupInfo*, ProtoModels::AdminBackupInfo*))(Il2CppBase() + 0x18B18C0))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(AdminBackupInfo*, uintptr_t))(Il2CppBase() + 0x18B193C))(this, input);
	}

};

}
