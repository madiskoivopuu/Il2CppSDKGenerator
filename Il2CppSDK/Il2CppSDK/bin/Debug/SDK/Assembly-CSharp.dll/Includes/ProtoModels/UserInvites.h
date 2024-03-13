#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserInvites
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserInvites"));
	}

	template <typename T = MessageParser1UserInvites*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& InvitesFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1Invite*>*> static T& _repeated_invites_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1Invite*>*> T& invites_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& CodeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& code_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& CodeMessageFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& codeMessage_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = MessageParser1UserInvites*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x246D420))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x246D484))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(UserInvites*))(Il2CppBase() + 0x246D5A4))(this);
	}
	template <typename T = UserInvites*> T Clone() {
		return ((T (*)(UserInvites*))(Il2CppBase() + 0x246D738))(this);
	}
	template <typename T = RepeatedField1Invite*>*> T get_Invites() {
		return ((T (*)(UserInvites*))(Il2CppBase() + 0x246D794))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(UserInvites*))(Il2CppBase() + 0x246D79C))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(UserInvites*, int32_t))(Il2CppBase() + 0x246D7A4))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(UserInvites*))(Il2CppBase() + 0x246D7AC))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(UserInvites*, Il2CppString*))(Il2CppBase() + 0x246D7B4))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(UserInvites*, Il2CppObject*))(Il2CppBase() + 0x246D834))(this, other);
	}
	template <typename T = bool> T Equals_1(UserInvites* other) {
		return ((T (*)(UserInvites*, UserInvites*))(Il2CppBase() + 0x246D8A4))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(UserInvites*))(Il2CppBase() + 0x246D954))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(UserInvites*))(Il2CppBase() + 0x246D9D8))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(UserInvites*, uintptr_t))(Il2CppBase() + 0x246DA3C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(UserInvites*))(Il2CppBase() + 0x246DB4C))(this);
	}
	template <typename T = void> T MergeFrom(UserInvites* other) {
		return ((T (*)(UserInvites*, UserInvites*))(Il2CppBase() + 0x246DC7C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(UserInvites*, uintptr_t))(Il2CppBase() + 0x246DD18))(this, input);
	}

};

}
