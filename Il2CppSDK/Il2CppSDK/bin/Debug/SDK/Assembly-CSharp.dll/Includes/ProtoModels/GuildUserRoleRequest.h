#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildUserRoleRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildUserRoleRequest"));
	}

	 static MessageParser1<ProtoModels::GuildUserRoleRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::GuildUserRoleRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& TargetUserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& targetUserID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& RoleFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::GuildRole> R& role_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1<ProtoModels::GuildUserRoleRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::GuildUserRoleRequest*>* (*)(void *))(Il2CppBase() + 0x1947248))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x19472AC))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(GuildUserRoleRequest*))(Il2CppBase() + 0x19473CC))(this);
	}
	template <typename R = ProtoModels::GuildUserRoleRequest*> R Clone() {
		return ((R (*)(GuildUserRoleRequest*))(Il2CppBase() + 0x194747C))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(GuildUserRoleRequest*))(Il2CppBase() + 0x19474D8))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(GuildUserRoleRequest*, int64_t))(Il2CppBase() + 0x19474E0))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(GuildUserRoleRequest*))(Il2CppBase() + 0x19474E8))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(GuildUserRoleRequest*, int64_t))(Il2CppBase() + 0x19474F0))(this, value);
	}
	template <typename R = int64_t> R get_TargetUserID() {
		return ((R (*)(GuildUserRoleRequest*))(Il2CppBase() + 0x19474F8))(this);
	}
	template <typename R = void> R set_TargetUserID(int64_t value) {
		return ((R (*)(GuildUserRoleRequest*, int64_t))(Il2CppBase() + 0x1947500))(this, value);
	}
	template <typename R = ProtoModels::GuildRole> R get_Role() {
		return ((R (*)(GuildUserRoleRequest*))(Il2CppBase() + 0x1947508))(this);
	}
	template <typename R = void> R set_Role(ProtoModels::GuildRole value) {
		return ((R (*)(GuildUserRoleRequest*, ProtoModels::GuildRole))(Il2CppBase() + 0x1947510))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(GuildUserRoleRequest*, Il2CppObject*))(Il2CppBase() + 0x1947518))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::GuildUserRoleRequest* other) {
		return ((R (*)(GuildUserRoleRequest*, ProtoModels::GuildUserRoleRequest*))(Il2CppBase() + 0x1947588))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(GuildUserRoleRequest*))(Il2CppBase() + 0x19475E8))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(GuildUserRoleRequest*))(Il2CppBase() + 0x1947690))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(GuildUserRoleRequest*, uintptr_t))(Il2CppBase() + 0x19476F4))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(GuildUserRoleRequest*))(Il2CppBase() + 0x19477D0))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::GuildUserRoleRequest* other) {
		return ((R (*)(GuildUserRoleRequest*, ProtoModels::GuildUserRoleRequest*))(Il2CppBase() + 0x1947904))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(GuildUserRoleRequest*, uintptr_t))(Il2CppBase() + 0x194793C))(this, input);
	}

};

}
