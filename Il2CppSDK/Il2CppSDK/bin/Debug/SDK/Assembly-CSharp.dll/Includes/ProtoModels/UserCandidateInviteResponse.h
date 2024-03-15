#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserCandidateInviteResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserCandidateInviteResponse"));
	}

	 static MessageParser1ProtoModels::UserCandidateInviteResponse*>*& _parser() {
		return *(MessageParser1ProtoModels::UserCandidateInviteResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& CodeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& code_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& CodeMessageFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& codeMessage_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& PretendersFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1ProtoModels::InvitablePlayer*>*& _repeated_pretenders_codec() {
		return *(FieldCodec1ProtoModels::InvitablePlayer*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1ProtoModels::InvitablePlayer*>*& pretenders_() {
		return *(RepeatedField1ProtoModels::InvitablePlayer*>**)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::UserCandidateInviteResponse*>* get_Parser() {
		return ((MessageParser1ProtoModels::UserCandidateInviteResponse*>* (*)(void *))(Il2CppBase() + 0x24638C8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x246392C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(UserCandidateInviteResponse*))(Il2CppBase() + 0x2463A4C))(this);
	}
	template <typename R = ProtoModels::UserCandidateInviteResponse*> R Clone() {
		return ((R (*)(UserCandidateInviteResponse*))(Il2CppBase() + 0x2463BE0))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(UserCandidateInviteResponse*))(Il2CppBase() + 0x2463C3C))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(UserCandidateInviteResponse*, int32_t))(Il2CppBase() + 0x2463C44))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(UserCandidateInviteResponse*))(Il2CppBase() + 0x2463C4C))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(UserCandidateInviteResponse*, Il2CppString*))(Il2CppBase() + 0x2463C54))(this, value);
	}
	 RepeatedField1ProtoModels::InvitablePlayer*>* get_Pretenders() {
		return ((RepeatedField1ProtoModels::InvitablePlayer*>* (*)(UserCandidateInviteResponse*))(Il2CppBase() + 0x2463CD4))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(UserCandidateInviteResponse*, Il2CppObject*))(Il2CppBase() + 0x2463CDC))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::UserCandidateInviteResponse* other) {
		return ((R (*)(UserCandidateInviteResponse*, ProtoModels::UserCandidateInviteResponse*))(Il2CppBase() + 0x2463D4C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(UserCandidateInviteResponse*))(Il2CppBase() + 0x2463DFC))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(UserCandidateInviteResponse*))(Il2CppBase() + 0x2463E84))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(UserCandidateInviteResponse*, uintptr_t))(Il2CppBase() + 0x2463EE8))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(UserCandidateInviteResponse*))(Il2CppBase() + 0x2463FE8))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::UserCandidateInviteResponse* other) {
		return ((R (*)(UserCandidateInviteResponse*, ProtoModels::UserCandidateInviteResponse*))(Il2CppBase() + 0x2464118))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(UserCandidateInviteResponse*, uintptr_t))(Il2CppBase() + 0x24641B4))(this, input);
	}

};

}
