#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserCandidateInviteRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserCandidateInviteRequest"));
	}

	 static MessageParser1<ProtoModels::UserCandidateInviteRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::UserCandidateInviteRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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

	 static MessageParser1<ProtoModels::UserCandidateInviteRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::UserCandidateInviteRequest*>* (*)(void *))(Il2CppBase() + 0x2463184))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x24631E8))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(UserCandidateInviteRequest*))(Il2CppBase() + 0x2463308))(this);
	}
	template <typename R = ProtoModels::UserCandidateInviteRequest*> R Clone() {
		return ((R (*)(UserCandidateInviteRequest*))(Il2CppBase() + 0x24633A8))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(UserCandidateInviteRequest*))(Il2CppBase() + 0x2463404))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(UserCandidateInviteRequest*, int64_t))(Il2CppBase() + 0x246340C))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(UserCandidateInviteRequest*))(Il2CppBase() + 0x2463414))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(UserCandidateInviteRequest*, int64_t))(Il2CppBase() + 0x246341C))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(UserCandidateInviteRequest*, Il2CppObject*))(Il2CppBase() + 0x2463424))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::UserCandidateInviteRequest* other) {
		return ((R (*)(UserCandidateInviteRequest*, ProtoModels::UserCandidateInviteRequest*))(Il2CppBase() + 0x24634C0))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(UserCandidateInviteRequest*))(Il2CppBase() + 0x2463500))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(UserCandidateInviteRequest*))(Il2CppBase() + 0x246356C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(UserCandidateInviteRequest*, uintptr_t))(Il2CppBase() + 0x24635D0))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(UserCandidateInviteRequest*))(Il2CppBase() + 0x2463654))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::UserCandidateInviteRequest* other) {
		return ((R (*)(UserCandidateInviteRequest*, ProtoModels::UserCandidateInviteRequest*))(Il2CppBase() + 0x2463708))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(UserCandidateInviteRequest*, uintptr_t))(Il2CppBase() + 0x2463728))(this, input);
	}

};

}
