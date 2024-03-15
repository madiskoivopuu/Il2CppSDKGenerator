#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserGetUserInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserGetUserInfo"));
	}

	 static MessageParser1<ProtoModels::UserGetUserInfo*>*& _parser() {
		return *(MessageParser1<ProtoModels::UserGetUserInfo*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& EmailFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& email_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& LevelFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& level_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& StatusFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::UserStatus> R& status_() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = int32_t> static R& CellIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& cellID_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& OnlineFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& online_() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = int32_t> static R& InClanFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& inClan_() {
		return *(R*)((uintptr_t)this + 0x2D);
	}

	 static MessageParser1<ProtoModels::UserGetUserInfo*>* get_Parser() {
		return ((MessageParser1<ProtoModels::UserGetUserInfo*>* (*)(void *))(Il2CppBase() + 0x246A1E0))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x246A244))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(UserGetUserInfo*))(Il2CppBase() + 0x246A364))(this);
	}
	template <typename R = ProtoModels::UserGetUserInfo*> R Clone() {
		return ((R (*)(UserGetUserInfo*))(Il2CppBase() + 0x246A484))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(UserGetUserInfo*))(Il2CppBase() + 0x246A4E0))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(UserGetUserInfo*, int64_t))(Il2CppBase() + 0x246A4E8))(this, value);
	}
	template <typename R = Il2CppString*> R get_Email() {
		return ((R (*)(UserGetUserInfo*))(Il2CppBase() + 0x246A4F0))(this);
	}
	template <typename R = void> R set_Email(Il2CppString* value) {
		return ((R (*)(UserGetUserInfo*, Il2CppString*))(Il2CppBase() + 0x246A4F8))(this, value);
	}
	template <typename R = int32_t> R get_Level() {
		return ((R (*)(UserGetUserInfo*))(Il2CppBase() + 0x246A578))(this);
	}
	template <typename R = void> R set_Level(int32_t value) {
		return ((R (*)(UserGetUserInfo*, int32_t))(Il2CppBase() + 0x246A580))(this, value);
	}
	template <typename R = ProtoModels::UserStatus> R get_Status() {
		return ((R (*)(UserGetUserInfo*))(Il2CppBase() + 0x246A588))(this);
	}
	template <typename R = void> R set_Status(ProtoModels::UserStatus value) {
		return ((R (*)(UserGetUserInfo*, ProtoModels::UserStatus))(Il2CppBase() + 0x246A590))(this, value);
	}
	template <typename R = int32_t> R get_CellID() {
		return ((R (*)(UserGetUserInfo*))(Il2CppBase() + 0x246A598))(this);
	}
	template <typename R = void> R set_CellID(int32_t value) {
		return ((R (*)(UserGetUserInfo*, int32_t))(Il2CppBase() + 0x246A5A0))(this, value);
	}
	template <typename R = bool> R get_Online() {
		return ((R (*)(UserGetUserInfo*))(Il2CppBase() + 0x246A5A8))(this);
	}
	template <typename R = void> R set_Online(bool value) {
		return ((R (*)(UserGetUserInfo*, bool))(Il2CppBase() + 0x246A5B0))(this, value);
	}
	template <typename R = bool> R get_InClan() {
		return ((R (*)(UserGetUserInfo*))(Il2CppBase() + 0x246A5BC))(this);
	}
	template <typename R = void> R set_InClan(bool value) {
		return ((R (*)(UserGetUserInfo*, bool))(Il2CppBase() + 0x246A5C4))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(UserGetUserInfo*, Il2CppObject*))(Il2CppBase() + 0x246A5D0))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::UserGetUserInfo* other) {
		return ((R (*)(UserGetUserInfo*, ProtoModels::UserGetUserInfo*))(Il2CppBase() + 0x246A640))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(UserGetUserInfo*))(Il2CppBase() + 0x246A70C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(UserGetUserInfo*))(Il2CppBase() + 0x246A818))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(UserGetUserInfo*, uintptr_t))(Il2CppBase() + 0x246A87C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(UserGetUserInfo*))(Il2CppBase() + 0x246A9E4))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::UserGetUserInfo* other) {
		return ((R (*)(UserGetUserInfo*, ProtoModels::UserGetUserInfo*))(Il2CppBase() + 0x246AB84))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(UserGetUserInfo*, uintptr_t))(Il2CppBase() + 0x246AC0C))(this, input);
	}

};

}
