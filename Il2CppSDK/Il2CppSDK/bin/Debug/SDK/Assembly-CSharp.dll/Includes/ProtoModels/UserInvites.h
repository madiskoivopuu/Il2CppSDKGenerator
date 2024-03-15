#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserInvites
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserInvites"));
	}

	 static MessageParser1<ProtoModels::UserInvites*>*& _parser() {
		return *(MessageParser1<ProtoModels::UserInvites*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& InvitesFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::Invite*>*& _repeated_invites_codec() {
		return *(FieldCodec1<ProtoModels::Invite*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<ProtoModels::Invite*>*& invites_() {
		return *(RepeatedField1<ProtoModels::Invite*>**)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& CodeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& code_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& CodeMessageFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& codeMessage_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1<ProtoModels::UserInvites*>* get_Parser() {
		return ((MessageParser1<ProtoModels::UserInvites*>* (*)(void *))(Il2CppBase() + 0x246D420))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x246D484))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(UserInvites*))(Il2CppBase() + 0x246D5A4))(this);
	}
	template <typename R = ProtoModels::UserInvites*> R Clone() {
		return ((R (*)(UserInvites*))(Il2CppBase() + 0x246D738))(this);
	}
	 RepeatedField1<ProtoModels::Invite*>* get_Invites() {
		return ((RepeatedField1<ProtoModels::Invite*>* (*)(UserInvites*))(Il2CppBase() + 0x246D794))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(UserInvites*))(Il2CppBase() + 0x246D79C))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(UserInvites*, int32_t))(Il2CppBase() + 0x246D7A4))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(UserInvites*))(Il2CppBase() + 0x246D7AC))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(UserInvites*, Il2CppString*))(Il2CppBase() + 0x246D7B4))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(UserInvites*, Il2CppObject*))(Il2CppBase() + 0x246D834))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::UserInvites* other) {
		return ((R (*)(UserInvites*, ProtoModels::UserInvites*))(Il2CppBase() + 0x246D8A4))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(UserInvites*))(Il2CppBase() + 0x246D954))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(UserInvites*))(Il2CppBase() + 0x246D9D8))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(UserInvites*, uintptr_t))(Il2CppBase() + 0x246DA3C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(UserInvites*))(Il2CppBase() + 0x246DB4C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::UserInvites* other) {
		return ((R (*)(UserInvites*, ProtoModels::UserInvites*))(Il2CppBase() + 0x246DC7C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(UserInvites*, uintptr_t))(Il2CppBase() + 0x246DD18))(this, input);
	}

};

}
