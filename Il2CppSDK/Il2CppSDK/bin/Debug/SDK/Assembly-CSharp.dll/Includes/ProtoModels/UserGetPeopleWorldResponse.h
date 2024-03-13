#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserGetPeopleWorldResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserGetPeopleWorldResponse"));
	}

	template <typename T = MessageParser1UserGetPeopleWorldResponse*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& InfoFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1UserGetPeopleWorldInfo*>*> static T& _repeated_info_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1UserGetPeopleWorldInfo*>*> T& info_() {
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

	template <typename T = MessageParser1UserGetPeopleWorldResponse*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x2468FA0))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x2469004))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(UserGetPeopleWorldResponse*))(Il2CppBase() + 0x2469124))(this);
	}
	template <typename T = UserGetPeopleWorldResponse*> T Clone() {
		return ((T (*)(UserGetPeopleWorldResponse*))(Il2CppBase() + 0x24692B8))(this);
	}
	template <typename T = RepeatedField1UserGetPeopleWorldInfo*>*> T get_Info() {
		return ((T (*)(UserGetPeopleWorldResponse*))(Il2CppBase() + 0x2469314))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(UserGetPeopleWorldResponse*))(Il2CppBase() + 0x246931C))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(UserGetPeopleWorldResponse*, int32_t))(Il2CppBase() + 0x2469324))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(UserGetPeopleWorldResponse*))(Il2CppBase() + 0x246932C))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(UserGetPeopleWorldResponse*, Il2CppString*))(Il2CppBase() + 0x2469334))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(UserGetPeopleWorldResponse*, Il2CppObject*))(Il2CppBase() + 0x24693B4))(this, other);
	}
	template <typename T = bool> T Equals_1(UserGetPeopleWorldResponse* other) {
		return ((T (*)(UserGetPeopleWorldResponse*, UserGetPeopleWorldResponse*))(Il2CppBase() + 0x2469424))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(UserGetPeopleWorldResponse*))(Il2CppBase() + 0x24694D4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(UserGetPeopleWorldResponse*))(Il2CppBase() + 0x2469558))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(UserGetPeopleWorldResponse*, uintptr_t))(Il2CppBase() + 0x24695BC))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(UserGetPeopleWorldResponse*))(Il2CppBase() + 0x24696BC))(this);
	}
	template <typename T = void> T MergeFrom(UserGetPeopleWorldResponse* other) {
		return ((T (*)(UserGetPeopleWorldResponse*, UserGetPeopleWorldResponse*))(Il2CppBase() + 0x24697EC))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(UserGetPeopleWorldResponse*, uintptr_t))(Il2CppBase() + 0x2469888))(this, input);
	}

};

}
