#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserGetUserInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserGetUserInfo"));
	}

	template <typename T = MessageParser1UserGetUserInfo*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& EmailFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& email_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& LevelFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& level_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& StatusFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = UserStatus*> T& status_() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> static T& CellIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& cellID_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& OnlineFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& online_() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> static T& InClanFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& inClan_() {
		return *(T*)((uintptr_t)this + 0x2D);
	}

	template <typename T = MessageParser1UserGetUserInfo*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x246A1E0))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x246A244))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(UserGetUserInfo*))(Il2CppBase() + 0x246A364))(this);
	}
	template <typename T = UserGetUserInfo*> T Clone() {
		return ((T (*)(UserGetUserInfo*))(Il2CppBase() + 0x246A484))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(UserGetUserInfo*))(Il2CppBase() + 0x246A4E0))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(UserGetUserInfo*, int64_t))(Il2CppBase() + 0x246A4E8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Email() {
		return ((T (*)(UserGetUserInfo*))(Il2CppBase() + 0x246A4F0))(this);
	}
	template <typename T = void> T set_Email(Il2CppString* value) {
		return ((T (*)(UserGetUserInfo*, Il2CppString*))(Il2CppBase() + 0x246A4F8))(this, value);
	}
	template <typename T = int32_t> T get_Level() {
		return ((T (*)(UserGetUserInfo*))(Il2CppBase() + 0x246A578))(this);
	}
	template <typename T = void> T set_Level(int32_t value) {
		return ((T (*)(UserGetUserInfo*, int32_t))(Il2CppBase() + 0x246A580))(this, value);
	}
	template <typename T = UserStatus*> T get_Status() {
		return ((T (*)(UserGetUserInfo*))(Il2CppBase() + 0x246A588))(this);
	}
	template <typename T = void> T set_Status(UserStatus* value) {
		return ((T (*)(UserGetUserInfo*, UserStatus*))(Il2CppBase() + 0x246A590))(this, value);
	}
	template <typename T = int32_t> T get_CellID() {
		return ((T (*)(UserGetUserInfo*))(Il2CppBase() + 0x246A598))(this);
	}
	template <typename T = void> T set_CellID(int32_t value) {
		return ((T (*)(UserGetUserInfo*, int32_t))(Il2CppBase() + 0x246A5A0))(this, value);
	}
	template <typename T = bool> T get_Online() {
		return ((T (*)(UserGetUserInfo*))(Il2CppBase() + 0x246A5A8))(this);
	}
	template <typename T = void> T set_Online(bool value) {
		return ((T (*)(UserGetUserInfo*, bool))(Il2CppBase() + 0x246A5B0))(this, value);
	}
	template <typename T = bool> T get_InClan() {
		return ((T (*)(UserGetUserInfo*))(Il2CppBase() + 0x246A5BC))(this);
	}
	template <typename T = void> T set_InClan(bool value) {
		return ((T (*)(UserGetUserInfo*, bool))(Il2CppBase() + 0x246A5C4))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(UserGetUserInfo*, Il2CppObject*))(Il2CppBase() + 0x246A5D0))(this, other);
	}
	template <typename T = bool> T Equals_1(UserGetUserInfo* other) {
		return ((T (*)(UserGetUserInfo*, UserGetUserInfo*))(Il2CppBase() + 0x246A640))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(UserGetUserInfo*))(Il2CppBase() + 0x246A70C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(UserGetUserInfo*))(Il2CppBase() + 0x246A818))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(UserGetUserInfo*, uintptr_t))(Il2CppBase() + 0x246A87C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(UserGetUserInfo*))(Il2CppBase() + 0x246A9E4))(this);
	}
	template <typename T = void> T MergeFrom(UserGetUserInfo* other) {
		return ((T (*)(UserGetUserInfo*, UserGetUserInfo*))(Il2CppBase() + 0x246AB84))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(UserGetUserInfo*, uintptr_t))(Il2CppBase() + 0x246AC0C))(this, input);
	}

};

}
