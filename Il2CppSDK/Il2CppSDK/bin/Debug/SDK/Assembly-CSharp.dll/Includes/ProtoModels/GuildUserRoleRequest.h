#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildUserRoleRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildUserRoleRequest"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& TargetUserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& targetUserID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& RoleFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& role_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1947248))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x19472AC))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(GuildUserRoleRequest*))(Il2CppBase() + 0x19473CC))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(GuildUserRoleRequest*))(Il2CppBase() + 0x194747C))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(GuildUserRoleRequest*))(Il2CppBase() + 0x19474D8))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(GuildUserRoleRequest*, int64_t))(Il2CppBase() + 0x19474E0))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(GuildUserRoleRequest*))(Il2CppBase() + 0x19474E8))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(GuildUserRoleRequest*, int64_t))(Il2CppBase() + 0x19474F0))(this, value);
	}
	template <typename T = int64_t> T get_TargetUserID() {
		return ((T (*)(GuildUserRoleRequest*))(Il2CppBase() + 0x19474F8))(this);
	}
	template <typename T = void> T set_TargetUserID(int64_t value) {
		return ((T (*)(GuildUserRoleRequest*, int64_t))(Il2CppBase() + 0x1947500))(this, value);
	}
	template <typename T = uintptr_t> T get_Role() {
		return ((T (*)(GuildUserRoleRequest*))(Il2CppBase() + 0x1947508))(this);
	}
	template <typename T = void> T set_Role(uintptr_t value) {
		return ((T (*)(GuildUserRoleRequest*, uintptr_t))(Il2CppBase() + 0x1947510))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(GuildUserRoleRequest*, uintptr_t))(Il2CppBase() + 0x1947518))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(GuildUserRoleRequest*, uintptr_t))(Il2CppBase() + 0x1947588))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(GuildUserRoleRequest*))(Il2CppBase() + 0x19475E8))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(GuildUserRoleRequest*))(Il2CppBase() + 0x1947690))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(GuildUserRoleRequest*, uintptr_t))(Il2CppBase() + 0x19476F4))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(GuildUserRoleRequest*))(Il2CppBase() + 0x19477D0))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(GuildUserRoleRequest*, uintptr_t))(Il2CppBase() + 0x1947904))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(GuildUserRoleRequest*, uintptr_t))(Il2CppBase() + 0x194793C))(this, input);
	}

};

}
