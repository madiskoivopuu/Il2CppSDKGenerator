#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AdminBackupInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AdminBackupInfo"));
	}

	template <typename T = MessageParser1AdminBackupInfo*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& IDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& iD_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& DateTimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& dateTime_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& DescriptionFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& description_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& JsonFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& json_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& BtypeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = BackupType*> T& btype_() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = MessageParser1AdminBackupInfo*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x18B0FA4))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x18B1008))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(AdminBackupInfo*))(Il2CppBase() + 0x18B1128))(this);
	}
	template <typename T = AdminBackupInfo*> T Clone() {
		return ((T (*)(AdminBackupInfo*))(Il2CppBase() + 0x18B1250))(this);
	}
	template <typename T = int64_t> T get_ID() {
		return ((T (*)(AdminBackupInfo*))(Il2CppBase() + 0x18B12AC))(this);
	}
	template <typename T = void> T set_ID(int64_t value) {
		return ((T (*)(AdminBackupInfo*, int64_t))(Il2CppBase() + 0x18B12B4))(this, value);
	}
	template <typename T = int64_t> T get_DateTime() {
		return ((T (*)(AdminBackupInfo*))(Il2CppBase() + 0x18B12BC))(this);
	}
	template <typename T = void> T set_DateTime(int64_t value) {
		return ((T (*)(AdminBackupInfo*, int64_t))(Il2CppBase() + 0x18B12C4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Description() {
		return ((T (*)(AdminBackupInfo*))(Il2CppBase() + 0x18B12CC))(this);
	}
	template <typename T = void> T set_Description(Il2CppString* value) {
		return ((T (*)(AdminBackupInfo*, Il2CppString*))(Il2CppBase() + 0x18B12D4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Json() {
		return ((T (*)(AdminBackupInfo*))(Il2CppBase() + 0x18B1354))(this);
	}
	template <typename T = void> T set_Json(Il2CppString* value) {
		return ((T (*)(AdminBackupInfo*, Il2CppString*))(Il2CppBase() + 0x18B135C))(this, value);
	}
	template <typename T = BackupType*> T get_Btype() {
		return ((T (*)(AdminBackupInfo*))(Il2CppBase() + 0x18B13DC))(this);
	}
	template <typename T = void> T set_Btype(BackupType* value) {
		return ((T (*)(AdminBackupInfo*, BackupType*))(Il2CppBase() + 0x18B13E4))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(AdminBackupInfo*, Il2CppObject*))(Il2CppBase() + 0x18B13EC))(this, other);
	}
	template <typename T = bool> T Equals_1(AdminBackupInfo* other) {
		return ((T (*)(AdminBackupInfo*, AdminBackupInfo*))(Il2CppBase() + 0x18B145C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(AdminBackupInfo*))(Il2CppBase() + 0x18B14F0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(AdminBackupInfo*))(Il2CppBase() + 0x18B15C0))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(AdminBackupInfo*, uintptr_t))(Il2CppBase() + 0x18B1624))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(AdminBackupInfo*))(Il2CppBase() + 0x18B173C))(this);
	}
	template <typename T = void> T MergeFrom(AdminBackupInfo* other) {
		return ((T (*)(AdminBackupInfo*, AdminBackupInfo*))(Il2CppBase() + 0x18B18C0))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(AdminBackupInfo*, uintptr_t))(Il2CppBase() + 0x18B193C))(this, input);
	}

};

}
