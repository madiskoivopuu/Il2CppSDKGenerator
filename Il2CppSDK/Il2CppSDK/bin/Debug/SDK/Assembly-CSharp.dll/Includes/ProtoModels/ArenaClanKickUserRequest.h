#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaClanKickUserRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaClanKickUserRequest"));
	}

	 static MessageParser1<ProtoModels::ArenaClanKickUserRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaClanKickUserRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename R = int32_t> static R& KickUserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& kickUserID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1<ProtoModels::ArenaClanKickUserRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaClanKickUserRequest*>* (*)(void *))(Il2CppBase() + 0x1A1C468))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1A1C4CC))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaClanKickUserRequest*))(Il2CppBase() + 0x1A1C5EC))(this);
	}
	template <typename R = ProtoModels::ArenaClanKickUserRequest*> R Clone() {
		return ((R (*)(ArenaClanKickUserRequest*))(Il2CppBase() + 0x1A1C694))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ArenaClanKickUserRequest*))(Il2CppBase() + 0x1A1C6F0))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ArenaClanKickUserRequest*, int64_t))(Il2CppBase() + 0x1A1C6F8))(this, value);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(ArenaClanKickUserRequest*))(Il2CppBase() + 0x1A1C700))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(ArenaClanKickUserRequest*, int64_t))(Il2CppBase() + 0x1A1C708))(this, value);
	}
	template <typename R = int64_t> R get_KickUserID() {
		return ((R (*)(ArenaClanKickUserRequest*))(Il2CppBase() + 0x1A1C710))(this);
	}
	template <typename R = void> R set_KickUserID(int64_t value) {
		return ((R (*)(ArenaClanKickUserRequest*, int64_t))(Il2CppBase() + 0x1A1C718))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaClanKickUserRequest*, Il2CppObject*))(Il2CppBase() + 0x1A1C720))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaClanKickUserRequest* other) {
		return ((R (*)(ArenaClanKickUserRequest*, ProtoModels::ArenaClanKickUserRequest*))(Il2CppBase() + 0x1A1C7CC))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaClanKickUserRequest*))(Il2CppBase() + 0x1A1C81C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaClanKickUserRequest*))(Il2CppBase() + 0x1A1C8A4))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaClanKickUserRequest*, uintptr_t))(Il2CppBase() + 0x1A1C908))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaClanKickUserRequest*))(Il2CppBase() + 0x1A1C9B8))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaClanKickUserRequest* other) {
		return ((R (*)(ArenaClanKickUserRequest*, ProtoModels::ArenaClanKickUserRequest*))(Il2CppBase() + 0x1A1CAB0))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaClanKickUserRequest*, uintptr_t))(Il2CppBase() + 0x1A1CADC))(this, input);
	}

};

}
