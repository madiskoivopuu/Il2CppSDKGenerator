#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserCandidateInviteRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserCandidateInviteRequest"));
	}

	template <typename T = MessageParser1UserCandidateInviteRequest*>*> static T& _parser() {
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

	template <typename T = MessageParser1UserCandidateInviteRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x2463184))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x24631E8))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(UserCandidateInviteRequest*))(Il2CppBase() + 0x2463308))(this);
	}
	template <typename T = UserCandidateInviteRequest*> T Clone() {
		return ((T (*)(UserCandidateInviteRequest*))(Il2CppBase() + 0x24633A8))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(UserCandidateInviteRequest*))(Il2CppBase() + 0x2463404))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(UserCandidateInviteRequest*, int64_t))(Il2CppBase() + 0x246340C))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(UserCandidateInviteRequest*))(Il2CppBase() + 0x2463414))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(UserCandidateInviteRequest*, int64_t))(Il2CppBase() + 0x246341C))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(UserCandidateInviteRequest*, Il2CppObject*))(Il2CppBase() + 0x2463424))(this, other);
	}
	template <typename T = bool> T Equals_1(UserCandidateInviteRequest* other) {
		return ((T (*)(UserCandidateInviteRequest*, UserCandidateInviteRequest*))(Il2CppBase() + 0x24634C0))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(UserCandidateInviteRequest*))(Il2CppBase() + 0x2463500))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(UserCandidateInviteRequest*))(Il2CppBase() + 0x246356C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(UserCandidateInviteRequest*, uintptr_t))(Il2CppBase() + 0x24635D0))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(UserCandidateInviteRequest*))(Il2CppBase() + 0x2463654))(this);
	}
	template <typename T = void> T MergeFrom(UserCandidateInviteRequest* other) {
		return ((T (*)(UserCandidateInviteRequest*, UserCandidateInviteRequest*))(Il2CppBase() + 0x2463708))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(UserCandidateInviteRequest*, uintptr_t))(Il2CppBase() + 0x2463728))(this, input);
	}

};

}
