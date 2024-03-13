#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUnLinkKefirResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUnLinkKefirResponse"));
	}

	template <typename T = MessageParser1ArenaUnLinkKefirResponse*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CodeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& code_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& CodeMessageFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& codeMessage_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& SuccessFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& success_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& UsersFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = LinkKefirList*> T& users_() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = MessageParser1ArenaUnLinkKefirResponse*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0xF46F60))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0xF46FC4))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaUnLinkKefirResponse*))(Il2CppBase() + 0xF470E4))(this);
	}
	template <typename T = ArenaUnLinkKefirResponse*> T Clone() {
		return ((T (*)(ArenaUnLinkKefirResponse*))(Il2CppBase() + 0xF47210))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(ArenaUnLinkKefirResponse*))(Il2CppBase() + 0xF4726C))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(ArenaUnLinkKefirResponse*, int32_t))(Il2CppBase() + 0xF47274))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(ArenaUnLinkKefirResponse*))(Il2CppBase() + 0xF4727C))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(ArenaUnLinkKefirResponse*, Il2CppString*))(Il2CppBase() + 0xF47284))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaUnLinkKefirResponse*))(Il2CppBase() + 0xF47304))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaUnLinkKefirResponse*, int64_t))(Il2CppBase() + 0xF4730C))(this, value);
	}
	template <typename T = bool> T get_Success() {
		return ((T (*)(ArenaUnLinkKefirResponse*))(Il2CppBase() + 0xF47314))(this);
	}
	template <typename T = void> T set_Success(bool value) {
		return ((T (*)(ArenaUnLinkKefirResponse*, bool))(Il2CppBase() + 0xF4731C))(this, value);
	}
	template <typename T = LinkKefirList*> T get_Users() {
		return ((T (*)(ArenaUnLinkKefirResponse*))(Il2CppBase() + 0xF47328))(this);
	}
	template <typename T = void> T set_Users(LinkKefirList* value) {
		return ((T (*)(ArenaUnLinkKefirResponse*, LinkKefirList*))(Il2CppBase() + 0xF47330))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaUnLinkKefirResponse*, Il2CppObject*))(Il2CppBase() + 0xF47338))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaUnLinkKefirResponse* other) {
		return ((T (*)(ArenaUnLinkKefirResponse*, ArenaUnLinkKefirResponse*))(Il2CppBase() + 0xF473A8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaUnLinkKefirResponse*))(Il2CppBase() + 0xF4744C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaUnLinkKefirResponse*))(Il2CppBase() + 0xF4751C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaUnLinkKefirResponse*, uintptr_t))(Il2CppBase() + 0xF47580))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaUnLinkKefirResponse*))(Il2CppBase() + 0xF47690))(this);
	}
	template <typename T = void> T MergeFrom(ArenaUnLinkKefirResponse* other) {
		return ((T (*)(ArenaUnLinkKefirResponse*, ArenaUnLinkKefirResponse*))(Il2CppBase() + 0xF477E8))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaUnLinkKefirResponse*, uintptr_t))(Il2CppBase() + 0xF478D0))(this, input);
	}

};

}
