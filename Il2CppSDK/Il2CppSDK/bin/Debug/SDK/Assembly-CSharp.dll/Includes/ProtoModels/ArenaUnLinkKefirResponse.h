#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUnLinkKefirResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUnLinkKefirResponse"));
	}

	 static MessageParser1<ProtoModels::ArenaUnLinkKefirResponse*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaUnLinkKefirResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& SuccessFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& success_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& UsersFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::LinkKefirList*> R& users_() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	 static MessageParser1<ProtoModels::ArenaUnLinkKefirResponse*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaUnLinkKefirResponse*>* (*)(void *))(Il2CppBase() + 0xF46F60))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0xF46FC4))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaUnLinkKefirResponse*))(Il2CppBase() + 0xF470E4))(this);
	}
	template <typename R = ProtoModels::ArenaUnLinkKefirResponse*> R Clone() {
		return ((R (*)(ArenaUnLinkKefirResponse*))(Il2CppBase() + 0xF47210))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(ArenaUnLinkKefirResponse*))(Il2CppBase() + 0xF4726C))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(ArenaUnLinkKefirResponse*, int32_t))(Il2CppBase() + 0xF47274))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(ArenaUnLinkKefirResponse*))(Il2CppBase() + 0xF4727C))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(ArenaUnLinkKefirResponse*, Il2CppString*))(Il2CppBase() + 0xF47284))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ArenaUnLinkKefirResponse*))(Il2CppBase() + 0xF47304))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ArenaUnLinkKefirResponse*, int64_t))(Il2CppBase() + 0xF4730C))(this, value);
	}
	template <typename R = bool> R get_Success() {
		return ((R (*)(ArenaUnLinkKefirResponse*))(Il2CppBase() + 0xF47314))(this);
	}
	template <typename R = void> R set_Success(bool value) {
		return ((R (*)(ArenaUnLinkKefirResponse*, bool))(Il2CppBase() + 0xF4731C))(this, value);
	}
	template <typename R = ProtoModels::LinkKefirList*> R get_Users() {
		return ((R (*)(ArenaUnLinkKefirResponse*))(Il2CppBase() + 0xF47328))(this);
	}
	template <typename R = void> R set_Users(ProtoModels::LinkKefirList* value) {
		return ((R (*)(ArenaUnLinkKefirResponse*, ProtoModels::LinkKefirList*))(Il2CppBase() + 0xF47330))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaUnLinkKefirResponse*, Il2CppObject*))(Il2CppBase() + 0xF47338))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaUnLinkKefirResponse* other) {
		return ((R (*)(ArenaUnLinkKefirResponse*, ProtoModels::ArenaUnLinkKefirResponse*))(Il2CppBase() + 0xF473A8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaUnLinkKefirResponse*))(Il2CppBase() + 0xF4744C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaUnLinkKefirResponse*))(Il2CppBase() + 0xF4751C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaUnLinkKefirResponse*, uintptr_t))(Il2CppBase() + 0xF47580))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaUnLinkKefirResponse*))(Il2CppBase() + 0xF47690))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaUnLinkKefirResponse* other) {
		return ((R (*)(ArenaUnLinkKefirResponse*, ProtoModels::ArenaUnLinkKefirResponse*))(Il2CppBase() + 0xF477E8))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaUnLinkKefirResponse*, uintptr_t))(Il2CppBase() + 0xF478D0))(this, input);
	}

};

}
