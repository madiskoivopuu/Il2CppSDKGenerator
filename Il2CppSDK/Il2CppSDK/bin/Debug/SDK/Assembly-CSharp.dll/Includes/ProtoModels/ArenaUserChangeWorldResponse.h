#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUserChangeWorldResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUserChangeWorldResponse"));
	}

	 static MessageParser1<ProtoModels::ArenaUserChangeWorldResponse*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaUserChangeWorldResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename R = int32_t> static R& LocationIdFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& locationId_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1<ProtoModels::ArenaUserChangeWorldResponse*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaUserChangeWorldResponse*>* (*)(void *))(Il2CppBase() + 0x285A4E8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x285A54C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaUserChangeWorldResponse*))(Il2CppBase() + 0x285A66C))(this);
	}
	template <typename R = ProtoModels::ArenaUserChangeWorldResponse*> R Clone() {
		return ((R (*)(ArenaUserChangeWorldResponse*))(Il2CppBase() + 0x285A774))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(ArenaUserChangeWorldResponse*))(Il2CppBase() + 0x285A7D0))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(ArenaUserChangeWorldResponse*, int32_t))(Il2CppBase() + 0x285A7D8))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(ArenaUserChangeWorldResponse*))(Il2CppBase() + 0x285A7E0))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(ArenaUserChangeWorldResponse*, Il2CppString*))(Il2CppBase() + 0x285A7E8))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ArenaUserChangeWorldResponse*))(Il2CppBase() + 0x285A868))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ArenaUserChangeWorldResponse*, int64_t))(Il2CppBase() + 0x285A870))(this, value);
	}
	template <typename R = int32_t> R get_LocationId() {
		return ((R (*)(ArenaUserChangeWorldResponse*))(Il2CppBase() + 0x285A878))(this);
	}
	template <typename R = void> R set_LocationId(int32_t value) {
		return ((R (*)(ArenaUserChangeWorldResponse*, int32_t))(Il2CppBase() + 0x285A880))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaUserChangeWorldResponse*, Il2CppObject*))(Il2CppBase() + 0x285A888))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaUserChangeWorldResponse* other) {
		return ((R (*)(ArenaUserChangeWorldResponse*, ProtoModels::ArenaUserChangeWorldResponse*))(Il2CppBase() + 0x285A8F8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaUserChangeWorldResponse*))(Il2CppBase() + 0x285A978))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaUserChangeWorldResponse*))(Il2CppBase() + 0x285AA28))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaUserChangeWorldResponse*, uintptr_t))(Il2CppBase() + 0x285AA8C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaUserChangeWorldResponse*))(Il2CppBase() + 0x285AB70))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaUserChangeWorldResponse* other) {
		return ((R (*)(ArenaUserChangeWorldResponse*, ProtoModels::ArenaUserChangeWorldResponse*))(Il2CppBase() + 0x285ACB0))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaUserChangeWorldResponse*, uintptr_t))(Il2CppBase() + 0x285AD14))(this, input);
	}

};

}
