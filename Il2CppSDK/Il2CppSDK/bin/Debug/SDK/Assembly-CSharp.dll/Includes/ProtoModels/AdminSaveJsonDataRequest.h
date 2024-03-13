#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AdminSaveJsonDataRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AdminSaveJsonDataRequest"));
	}

	template <typename T = MessageParser1AdminSaveJsonDataRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& AccountIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& accountID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& BtypeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = BackupType*> T& btype_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& JsonFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& json_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& DungeonIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& dungeonID_() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = MessageParser1AdminSaveJsonDataRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x129597C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x12959E0))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(AdminSaveJsonDataRequest*))(Il2CppBase() + 0x1295B00))(this);
	}
	template <typename T = AdminSaveJsonDataRequest*> T Clone() {
		return ((T (*)(AdminSaveJsonDataRequest*))(Il2CppBase() + 0x1295C10))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(AdminSaveJsonDataRequest*))(Il2CppBase() + 0x1295C6C))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(AdminSaveJsonDataRequest*, int64_t))(Il2CppBase() + 0x1295C74))(this, value);
	}
	template <typename T = int64_t> T get_AccountID() {
		return ((T (*)(AdminSaveJsonDataRequest*))(Il2CppBase() + 0x1295C7C))(this);
	}
	template <typename T = void> T set_AccountID(int64_t value) {
		return ((T (*)(AdminSaveJsonDataRequest*, int64_t))(Il2CppBase() + 0x1295C84))(this, value);
	}
	template <typename T = BackupType*> T get_Btype() {
		return ((T (*)(AdminSaveJsonDataRequest*))(Il2CppBase() + 0x1295C8C))(this);
	}
	template <typename T = void> T set_Btype(BackupType* value) {
		return ((T (*)(AdminSaveJsonDataRequest*, BackupType*))(Il2CppBase() + 0x1295C94))(this, value);
	}
	template <typename T = Il2CppString*> T get_Json() {
		return ((T (*)(AdminSaveJsonDataRequest*))(Il2CppBase() + 0x1295C9C))(this);
	}
	template <typename T = void> T set_Json(Il2CppString* value) {
		return ((T (*)(AdminSaveJsonDataRequest*, Il2CppString*))(Il2CppBase() + 0x1295CA4))(this, value);
	}
	template <typename T = int64_t> T get_DungeonID() {
		return ((T (*)(AdminSaveJsonDataRequest*))(Il2CppBase() + 0x1295D24))(this);
	}
	template <typename T = void> T set_DungeonID(int64_t value) {
		return ((T (*)(AdminSaveJsonDataRequest*, int64_t))(Il2CppBase() + 0x1295D2C))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(AdminSaveJsonDataRequest*, Il2CppObject*))(Il2CppBase() + 0x1295D34))(this, other);
	}
	template <typename T = bool> T Equals_1(AdminSaveJsonDataRequest* other) {
		return ((T (*)(AdminSaveJsonDataRequest*, AdminSaveJsonDataRequest*))(Il2CppBase() + 0x1295DA4))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(AdminSaveJsonDataRequest*))(Il2CppBase() + 0x1295E34))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(AdminSaveJsonDataRequest*))(Il2CppBase() + 0x1295F00))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(AdminSaveJsonDataRequest*, uintptr_t))(Il2CppBase() + 0x1295F64))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(AdminSaveJsonDataRequest*))(Il2CppBase() + 0x1296074))(this);
	}
	template <typename T = void> T MergeFrom(AdminSaveJsonDataRequest* other) {
		return ((T (*)(AdminSaveJsonDataRequest*, AdminSaveJsonDataRequest*))(Il2CppBase() + 0x12961F0))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(AdminSaveJsonDataRequest*, uintptr_t))(Il2CppBase() + 0x1296260))(this, input);
	}

};

}
