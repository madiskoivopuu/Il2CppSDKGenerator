#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserLogoutFromArenaResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserLogoutFromArenaResponse"));
	}

	 static MessageParser1ProtoModels::UserLogoutFromArenaResponse*>*& _parser() {
		return *(MessageParser1ProtoModels::UserLogoutFromArenaResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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

	 static MessageParser1ProtoModels::UserLogoutFromArenaResponse*>* get_Parser() {
		return ((MessageParser1ProtoModels::UserLogoutFromArenaResponse*>* (*)(void *))(Il2CppBase() + 0x246F4F4))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x246F558))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(UserLogoutFromArenaResponse*))(Il2CppBase() + 0x246F678))(this);
	}
	template <typename R = ProtoModels::UserLogoutFromArenaResponse*> R Clone() {
		return ((R (*)(UserLogoutFromArenaResponse*))(Il2CppBase() + 0x246F76C))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(UserLogoutFromArenaResponse*))(Il2CppBase() + 0x246F7C8))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(UserLogoutFromArenaResponse*, int32_t))(Il2CppBase() + 0x246F7D0))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(UserLogoutFromArenaResponse*))(Il2CppBase() + 0x246F7D8))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(UserLogoutFromArenaResponse*, Il2CppString*))(Il2CppBase() + 0x246F7E0))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(UserLogoutFromArenaResponse*, Il2CppObject*))(Il2CppBase() + 0x246F860))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::UserLogoutFromArenaResponse* other) {
		return ((R (*)(UserLogoutFromArenaResponse*, ProtoModels::UserLogoutFromArenaResponse*))(Il2CppBase() + 0x246F8D0))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(UserLogoutFromArenaResponse*))(Il2CppBase() + 0x246F924))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(UserLogoutFromArenaResponse*))(Il2CppBase() + 0x246F998))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(UserLogoutFromArenaResponse*, uintptr_t))(Il2CppBase() + 0x246F9FC))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(UserLogoutFromArenaResponse*))(Il2CppBase() + 0x246FA88))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::UserLogoutFromArenaResponse* other) {
		return ((R (*)(UserLogoutFromArenaResponse*, ProtoModels::UserLogoutFromArenaResponse*))(Il2CppBase() + 0x246FB48))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(UserLogoutFromArenaResponse*, uintptr_t))(Il2CppBase() + 0x246FB7C))(this, input);
	}

};

}
