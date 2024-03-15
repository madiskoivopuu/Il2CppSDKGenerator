#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class InvitesRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "InvitesRequest"));
	}

	 static MessageParser1<ProtoModels::InvitesRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::InvitesRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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

	 static MessageParser1<ProtoModels::InvitesRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::InvitesRequest*>* (*)(void *))(Il2CppBase() + 0x1248334))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1248398))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(InvitesRequest*))(Il2CppBase() + 0x12484B8))(this);
	}
	template <typename R = ProtoModels::InvitesRequest*> R Clone() {
		return ((R (*)(InvitesRequest*))(Il2CppBase() + 0x1248558))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(InvitesRequest*))(Il2CppBase() + 0x12485B4))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(InvitesRequest*, int64_t))(Il2CppBase() + 0x12485BC))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(InvitesRequest*))(Il2CppBase() + 0x12485C4))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(InvitesRequest*, int64_t))(Il2CppBase() + 0x12485CC))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(InvitesRequest*, Il2CppObject*))(Il2CppBase() + 0x12485D4))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::InvitesRequest* other) {
		return ((R (*)(InvitesRequest*, ProtoModels::InvitesRequest*))(Il2CppBase() + 0x1248670))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(InvitesRequest*))(Il2CppBase() + 0x12486B0))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(InvitesRequest*))(Il2CppBase() + 0x124871C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(InvitesRequest*, uintptr_t))(Il2CppBase() + 0x1248780))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(InvitesRequest*))(Il2CppBase() + 0x1248804))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::InvitesRequest* other) {
		return ((R (*)(InvitesRequest*, ProtoModels::InvitesRequest*))(Il2CppBase() + 0x12488B8))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(InvitesRequest*, uintptr_t))(Il2CppBase() + 0x12488D8))(this, input);
	}

};

}
