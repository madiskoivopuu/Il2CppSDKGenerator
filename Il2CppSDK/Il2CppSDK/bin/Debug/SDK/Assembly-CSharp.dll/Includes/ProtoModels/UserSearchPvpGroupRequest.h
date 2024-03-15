#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserSearchPvpGroupRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserSearchPvpGroupRequest"));
	}

	 static MessageParser1<ProtoModels::UserSearchPvpGroupRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::UserSearchPvpGroupRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& StartFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& start_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& ActualLevelFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& actualLevel_() {
		return *(R*)((uintptr_t)this + 0x24);
	}

	 static MessageParser1<ProtoModels::UserSearchPvpGroupRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::UserSearchPvpGroupRequest*>* (*)(void *))(Il2CppBase() + 0x15B8D10))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x15B8D74))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(UserSearchPvpGroupRequest*))(Il2CppBase() + 0x15B8E94))(this);
	}
	template <typename R = ProtoModels::UserSearchPvpGroupRequest*> R Clone() {
		return ((R (*)(UserSearchPvpGroupRequest*))(Il2CppBase() + 0x15B8F44))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(UserSearchPvpGroupRequest*))(Il2CppBase() + 0x15B8FA0))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(UserSearchPvpGroupRequest*, int64_t))(Il2CppBase() + 0x15B8FA8))(this, value);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(UserSearchPvpGroupRequest*))(Il2CppBase() + 0x15B8FB0))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(UserSearchPvpGroupRequest*, int64_t))(Il2CppBase() + 0x15B8FB8))(this, value);
	}
	template <typename R = bool> R get_Start() {
		return ((R (*)(UserSearchPvpGroupRequest*))(Il2CppBase() + 0x15B8FC0))(this);
	}
	template <typename R = void> R set_Start(bool value) {
		return ((R (*)(UserSearchPvpGroupRequest*, bool))(Il2CppBase() + 0x15B8FC8))(this, value);
	}
	template <typename R = int32_t> R get_ActualLevel() {
		return ((R (*)(UserSearchPvpGroupRequest*))(Il2CppBase() + 0x15B8FD4))(this);
	}
	template <typename R = void> R set_ActualLevel(int32_t value) {
		return ((R (*)(UserSearchPvpGroupRequest*, int32_t))(Il2CppBase() + 0x15B8FDC))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(UserSearchPvpGroupRequest*, Il2CppObject*))(Il2CppBase() + 0x15B8FE4))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::UserSearchPvpGroupRequest* other) {
		return ((R (*)(UserSearchPvpGroupRequest*, ProtoModels::UserSearchPvpGroupRequest*))(Il2CppBase() + 0x15B9054))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(UserSearchPvpGroupRequest*))(Il2CppBase() + 0x15B90C4))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(UserSearchPvpGroupRequest*))(Il2CppBase() + 0x15B9174))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(UserSearchPvpGroupRequest*, uintptr_t))(Il2CppBase() + 0x15B91D8))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(UserSearchPvpGroupRequest*))(Il2CppBase() + 0x15B92B4))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::UserSearchPvpGroupRequest* other) {
		return ((R (*)(UserSearchPvpGroupRequest*, ProtoModels::UserSearchPvpGroupRequest*))(Il2CppBase() + 0x15B93C4))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(UserSearchPvpGroupRequest*, uintptr_t))(Il2CppBase() + 0x15B93FC))(this, input);
	}

};

}
