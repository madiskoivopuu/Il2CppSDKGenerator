#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AdminSaveJsonDataRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AdminSaveJsonDataRequest"));
	}

	 static MessageParser1ProtoModels::AdminSaveJsonDataRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::AdminSaveJsonDataRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& AccountIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& accountID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& BtypeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::BackupType*> R& btype_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& JsonFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& json_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& DungeonIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& dungeonID_() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	 static MessageParser1ProtoModels::AdminSaveJsonDataRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::AdminSaveJsonDataRequest*>* (*)(void *))(Il2CppBase() + 0x129597C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x12959E0))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(AdminSaveJsonDataRequest*))(Il2CppBase() + 0x1295B00))(this);
	}
	template <typename R = ProtoModels::AdminSaveJsonDataRequest*> R Clone() {
		return ((R (*)(AdminSaveJsonDataRequest*))(Il2CppBase() + 0x1295C10))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(AdminSaveJsonDataRequest*))(Il2CppBase() + 0x1295C6C))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(AdminSaveJsonDataRequest*, int64_t))(Il2CppBase() + 0x1295C74))(this, value);
	}
	template <typename R = int64_t> R get_AccountID() {
		return ((R (*)(AdminSaveJsonDataRequest*))(Il2CppBase() + 0x1295C7C))(this);
	}
	template <typename R = void> R set_AccountID(int64_t value) {
		return ((R (*)(AdminSaveJsonDataRequest*, int64_t))(Il2CppBase() + 0x1295C84))(this, value);
	}
	template <typename R = ProtoModels::BackupType*> R get_Btype() {
		return ((R (*)(AdminSaveJsonDataRequest*))(Il2CppBase() + 0x1295C8C))(this);
	}
	template <typename R = void> R set_Btype(ProtoModels::BackupType* value) {
		return ((R (*)(AdminSaveJsonDataRequest*, ProtoModels::BackupType*))(Il2CppBase() + 0x1295C94))(this, value);
	}
	template <typename R = Il2CppString*> R get_Json() {
		return ((R (*)(AdminSaveJsonDataRequest*))(Il2CppBase() + 0x1295C9C))(this);
	}
	template <typename R = void> R set_Json(Il2CppString* value) {
		return ((R (*)(AdminSaveJsonDataRequest*, Il2CppString*))(Il2CppBase() + 0x1295CA4))(this, value);
	}
	template <typename R = int64_t> R get_DungeonID() {
		return ((R (*)(AdminSaveJsonDataRequest*))(Il2CppBase() + 0x1295D24))(this);
	}
	template <typename R = void> R set_DungeonID(int64_t value) {
		return ((R (*)(AdminSaveJsonDataRequest*, int64_t))(Il2CppBase() + 0x1295D2C))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(AdminSaveJsonDataRequest*, Il2CppObject*))(Il2CppBase() + 0x1295D34))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::AdminSaveJsonDataRequest* other) {
		return ((R (*)(AdminSaveJsonDataRequest*, ProtoModels::AdminSaveJsonDataRequest*))(Il2CppBase() + 0x1295DA4))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(AdminSaveJsonDataRequest*))(Il2CppBase() + 0x1295E34))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(AdminSaveJsonDataRequest*))(Il2CppBase() + 0x1295F00))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(AdminSaveJsonDataRequest*, uintptr_t))(Il2CppBase() + 0x1295F64))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(AdminSaveJsonDataRequest*))(Il2CppBase() + 0x1296074))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::AdminSaveJsonDataRequest* other) {
		return ((R (*)(AdminSaveJsonDataRequest*, ProtoModels::AdminSaveJsonDataRequest*))(Il2CppBase() + 0x12961F0))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(AdminSaveJsonDataRequest*, uintptr_t))(Il2CppBase() + 0x1296260))(this, input);
	}

};

}
