#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaPreAddAccountResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaPreAddAccountResponse"));
	}

	 static MessageParser1<ProtoModels::ArenaPreAddAccountResponse*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaPreAddAccountResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& CodeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& code_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1<ProtoModels::ArenaPreAddAccountResponse*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaPreAddAccountResponse*>* (*)(void *))(Il2CppBase() + 0x1E310B4))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1E31118))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaPreAddAccountResponse*))(Il2CppBase() + 0x1E31238))(this);
	}
	template <typename R = ProtoModels::ArenaPreAddAccountResponse*> R Clone() {
		return ((R (*)(ArenaPreAddAccountResponse*))(Il2CppBase() + 0x1E312E0))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ArenaPreAddAccountResponse*))(Il2CppBase() + 0x1E3133C))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ArenaPreAddAccountResponse*, int64_t))(Il2CppBase() + 0x1E31344))(this, value);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(ArenaPreAddAccountResponse*))(Il2CppBase() + 0x1E3134C))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(ArenaPreAddAccountResponse*, int64_t))(Il2CppBase() + 0x1E31354))(this, value);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(ArenaPreAddAccountResponse*))(Il2CppBase() + 0x1E3135C))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(ArenaPreAddAccountResponse*, int32_t))(Il2CppBase() + 0x1E31364))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaPreAddAccountResponse*, Il2CppObject*))(Il2CppBase() + 0x1E3136C))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaPreAddAccountResponse* other) {
		return ((R (*)(ArenaPreAddAccountResponse*, ProtoModels::ArenaPreAddAccountResponse*))(Il2CppBase() + 0x1E31418))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaPreAddAccountResponse*))(Il2CppBase() + 0x1E31468))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaPreAddAccountResponse*))(Il2CppBase() + 0x1E314F4))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaPreAddAccountResponse*, uintptr_t))(Il2CppBase() + 0x1E31558))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaPreAddAccountResponse*))(Il2CppBase() + 0x1E31608))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaPreAddAccountResponse* other) {
		return ((R (*)(ArenaPreAddAccountResponse*, ProtoModels::ArenaPreAddAccountResponse*))(Il2CppBase() + 0x1E31700))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaPreAddAccountResponse*, uintptr_t))(Il2CppBase() + 0x1E3172C))(this, input);
	}

};

}
