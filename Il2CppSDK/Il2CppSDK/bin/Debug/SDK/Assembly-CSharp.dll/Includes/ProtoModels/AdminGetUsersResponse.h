#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AdminGetUsersResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AdminGetUsersResponse"));
	}

	 static MessageParser1ProtoModels::AdminGetUsersResponse*>*& _parser() {
		return *(MessageParser1ProtoModels::AdminGetUsersResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename R = int32_t> static R& UsersFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1ProtoModels::MonitorUser*>*& _repeated_users_codec() {
		return *(FieldCodec1ProtoModels::MonitorUser*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1ProtoModels::MonitorUser*>*& users_() {
		return *(RepeatedField1ProtoModels::MonitorUser*>**)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::AdminGetUsersResponse*>* get_Parser() {
		return ((MessageParser1ProtoModels::AdminGetUsersResponse*>* (*)(void *))(Il2CppBase() + 0x18B9E2C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x18B9E90))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(AdminGetUsersResponse*))(Il2CppBase() + 0x18B9FB0))(this);
	}
	template <typename R = ProtoModels::AdminGetUsersResponse*> R Clone() {
		return ((R (*)(AdminGetUsersResponse*))(Il2CppBase() + 0x18BA144))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(AdminGetUsersResponse*))(Il2CppBase() + 0x18BA1A0))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(AdminGetUsersResponse*, int32_t))(Il2CppBase() + 0x18BA1A8))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(AdminGetUsersResponse*))(Il2CppBase() + 0x18BA1B0))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(AdminGetUsersResponse*, Il2CppString*))(Il2CppBase() + 0x18BA1B8))(this, value);
	}
	 RepeatedField1ProtoModels::MonitorUser*>* get_Users() {
		return ((RepeatedField1ProtoModels::MonitorUser*>* (*)(AdminGetUsersResponse*))(Il2CppBase() + 0x18BA238))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(AdminGetUsersResponse*, Il2CppObject*))(Il2CppBase() + 0x18BA240))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::AdminGetUsersResponse* other) {
		return ((R (*)(AdminGetUsersResponse*, ProtoModels::AdminGetUsersResponse*))(Il2CppBase() + 0x18BA2B0))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(AdminGetUsersResponse*))(Il2CppBase() + 0x18BA360))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(AdminGetUsersResponse*))(Il2CppBase() + 0x18BA3E8))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(AdminGetUsersResponse*, uintptr_t))(Il2CppBase() + 0x18BA44C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(AdminGetUsersResponse*))(Il2CppBase() + 0x18BA55C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::AdminGetUsersResponse* other) {
		return ((R (*)(AdminGetUsersResponse*, ProtoModels::AdminGetUsersResponse*))(Il2CppBase() + 0x18BA68C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(AdminGetUsersResponse*, uintptr_t))(Il2CppBase() + 0x18BA728))(this, input);
	}

};

}
