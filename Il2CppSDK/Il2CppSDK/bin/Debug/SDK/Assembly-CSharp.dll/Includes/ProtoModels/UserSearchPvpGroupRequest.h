#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserSearchPvpGroupRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserSearchPvpGroupRequest"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& StartFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& start_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& ActualLevelFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& actualLevel_() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x15B8D10))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x15B8D74))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(UserSearchPvpGroupRequest*))(Il2CppBase() + 0x15B8E94))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(UserSearchPvpGroupRequest*))(Il2CppBase() + 0x15B8F44))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(UserSearchPvpGroupRequest*))(Il2CppBase() + 0x15B8FA0))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(UserSearchPvpGroupRequest*, int64_t))(Il2CppBase() + 0x15B8FA8))(this, value);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(UserSearchPvpGroupRequest*))(Il2CppBase() + 0x15B8FB0))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(UserSearchPvpGroupRequest*, int64_t))(Il2CppBase() + 0x15B8FB8))(this, value);
	}
	template <typename T = bool> T get_Start() {
		return ((T (*)(UserSearchPvpGroupRequest*))(Il2CppBase() + 0x15B8FC0))(this);
	}
	template <typename T = void> T set_Start(bool value) {
		return ((T (*)(UserSearchPvpGroupRequest*, bool))(Il2CppBase() + 0x15B8FC8))(this, value);
	}
	template <typename T = int32_t> T get_ActualLevel() {
		return ((T (*)(UserSearchPvpGroupRequest*))(Il2CppBase() + 0x15B8FD4))(this);
	}
	template <typename T = void> T set_ActualLevel(int32_t value) {
		return ((T (*)(UserSearchPvpGroupRequest*, int32_t))(Il2CppBase() + 0x15B8FDC))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(UserSearchPvpGroupRequest*, uintptr_t))(Il2CppBase() + 0x15B8FE4))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(UserSearchPvpGroupRequest*, uintptr_t))(Il2CppBase() + 0x15B9054))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(UserSearchPvpGroupRequest*))(Il2CppBase() + 0x15B90C4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(UserSearchPvpGroupRequest*))(Il2CppBase() + 0x15B9174))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(UserSearchPvpGroupRequest*, uintptr_t))(Il2CppBase() + 0x15B91D8))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(UserSearchPvpGroupRequest*))(Il2CppBase() + 0x15B92B4))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(UserSearchPvpGroupRequest*, uintptr_t))(Il2CppBase() + 0x15B93C4))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(UserSearchPvpGroupRequest*, uintptr_t))(Il2CppBase() + 0x15B93FC))(this, input);
	}

};

}
