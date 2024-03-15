#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserGetPeopleWorldResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserGetPeopleWorldResponse"));
	}

	 static MessageParser1<ProtoModels::UserGetPeopleWorldResponse*>*& _parser() {
		return *(MessageParser1<ProtoModels::UserGetPeopleWorldResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& InfoFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::UserGetPeopleWorldInfo*>*& _repeated_info_codec() {
		return *(FieldCodec1<ProtoModels::UserGetPeopleWorldInfo*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<ProtoModels::UserGetPeopleWorldInfo*>*& info_() {
		return *(RepeatedField1<ProtoModels::UserGetPeopleWorldInfo*>**)((uintptr_t)this + 0x10);
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

	 static MessageParser1<ProtoModels::UserGetPeopleWorldResponse*>* get_Parser() {
		return ((MessageParser1<ProtoModels::UserGetPeopleWorldResponse*>* (*)(void *))(Il2CppBase() + 0x2468FA0))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x2469004))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(UserGetPeopleWorldResponse*))(Il2CppBase() + 0x2469124))(this);
	}
	template <typename R = ProtoModels::UserGetPeopleWorldResponse*> R Clone() {
		return ((R (*)(UserGetPeopleWorldResponse*))(Il2CppBase() + 0x24692B8))(this);
	}
	 RepeatedField1<ProtoModels::UserGetPeopleWorldInfo*>* get_Info() {
		return ((RepeatedField1<ProtoModels::UserGetPeopleWorldInfo*>* (*)(UserGetPeopleWorldResponse*))(Il2CppBase() + 0x2469314))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(UserGetPeopleWorldResponse*))(Il2CppBase() + 0x246931C))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(UserGetPeopleWorldResponse*, int32_t))(Il2CppBase() + 0x2469324))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(UserGetPeopleWorldResponse*))(Il2CppBase() + 0x246932C))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(UserGetPeopleWorldResponse*, Il2CppString*))(Il2CppBase() + 0x2469334))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(UserGetPeopleWorldResponse*, Il2CppObject*))(Il2CppBase() + 0x24693B4))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::UserGetPeopleWorldResponse* other) {
		return ((R (*)(UserGetPeopleWorldResponse*, ProtoModels::UserGetPeopleWorldResponse*))(Il2CppBase() + 0x2469424))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(UserGetPeopleWorldResponse*))(Il2CppBase() + 0x24694D4))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(UserGetPeopleWorldResponse*))(Il2CppBase() + 0x2469558))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(UserGetPeopleWorldResponse*, uintptr_t))(Il2CppBase() + 0x24695BC))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(UserGetPeopleWorldResponse*))(Il2CppBase() + 0x24696BC))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::UserGetPeopleWorldResponse* other) {
		return ((R (*)(UserGetPeopleWorldResponse*, ProtoModels::UserGetPeopleWorldResponse*))(Il2CppBase() + 0x24697EC))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(UserGetPeopleWorldResponse*, uintptr_t))(Il2CppBase() + 0x2469888))(this, input);
	}

};

}
