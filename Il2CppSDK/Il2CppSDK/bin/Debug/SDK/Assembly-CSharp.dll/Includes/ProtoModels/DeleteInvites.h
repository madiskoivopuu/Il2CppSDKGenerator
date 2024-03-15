#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class DeleteInvites
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "DeleteInvites"));
	}

	 static MessageParser1ProtoModels::DeleteInvites*>*& _parser() {
		return *(MessageParser1ProtoModels::DeleteInvites*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& InviteIDsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1int64_t>*& _repeated_inviteIDs_codec() {
		return *(FieldCodec1int64_t>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1int64_t>*& inviteIDs_() {
		return *(RepeatedField1int64_t>**)((uintptr_t)this + 0x10);
	}

	 static MessageParser1ProtoModels::DeleteInvites*>* get_Parser() {
		return ((MessageParser1ProtoModels::DeleteInvites*>* (*)(void *))(Il2CppBase() + 0xEB8E38))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0xEB8E9C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(DeleteInvites*))(Il2CppBase() + 0xEB8FBC))(this);
	}
	template <typename R = ProtoModels::DeleteInvites*> R Clone() {
		return ((R (*)(DeleteInvites*))(Il2CppBase() + 0xEB9114))(this);
	}
	 RepeatedField1int64_t>* get_InviteIDs() {
		return ((RepeatedField1int64_t>* (*)(DeleteInvites*))(Il2CppBase() + 0xEB9170))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(DeleteInvites*, Il2CppObject*))(Il2CppBase() + 0xEB9178))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::DeleteInvites* other) {
		return ((R (*)(DeleteInvites*, ProtoModels::DeleteInvites*))(Il2CppBase() + 0xEB91E8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(DeleteInvites*))(Il2CppBase() + 0xEB9274))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(DeleteInvites*))(Il2CppBase() + 0xEB92A0))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(DeleteInvites*, uintptr_t))(Il2CppBase() + 0xEB9304))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(DeleteInvites*))(Il2CppBase() + 0xEB93A4))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::DeleteInvites* other) {
		return ((R (*)(DeleteInvites*, ProtoModels::DeleteInvites*))(Il2CppBase() + 0xEB9434))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(DeleteInvites*, uintptr_t))(Il2CppBase() + 0xEB94AC))(this, input);
	}

};

}
