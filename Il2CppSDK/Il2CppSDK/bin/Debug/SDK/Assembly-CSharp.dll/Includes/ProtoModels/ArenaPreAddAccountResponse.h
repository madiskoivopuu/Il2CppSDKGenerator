#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaPreAddAccountResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaPreAddAccountResponse"));
	}

	template <typename T = MessageParser1ArenaPreAddAccountResponse*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& CodeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& code_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = MessageParser1ArenaPreAddAccountResponse*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E310B4))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E31118))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaPreAddAccountResponse*))(Il2CppBase() + 0x1E31238))(this);
	}
	template <typename T = ArenaPreAddAccountResponse*> T Clone() {
		return ((T (*)(ArenaPreAddAccountResponse*))(Il2CppBase() + 0x1E312E0))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaPreAddAccountResponse*))(Il2CppBase() + 0x1E3133C))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaPreAddAccountResponse*, int64_t))(Il2CppBase() + 0x1E31344))(this, value);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ArenaPreAddAccountResponse*))(Il2CppBase() + 0x1E3134C))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ArenaPreAddAccountResponse*, int64_t))(Il2CppBase() + 0x1E31354))(this, value);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(ArenaPreAddAccountResponse*))(Il2CppBase() + 0x1E3135C))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(ArenaPreAddAccountResponse*, int32_t))(Il2CppBase() + 0x1E31364))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaPreAddAccountResponse*, Il2CppObject*))(Il2CppBase() + 0x1E3136C))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaPreAddAccountResponse* other) {
		return ((T (*)(ArenaPreAddAccountResponse*, ArenaPreAddAccountResponse*))(Il2CppBase() + 0x1E31418))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaPreAddAccountResponse*))(Il2CppBase() + 0x1E31468))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaPreAddAccountResponse*))(Il2CppBase() + 0x1E314F4))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaPreAddAccountResponse*, uintptr_t))(Il2CppBase() + 0x1E31558))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaPreAddAccountResponse*))(Il2CppBase() + 0x1E31608))(this);
	}
	template <typename T = void> T MergeFrom(ArenaPreAddAccountResponse* other) {
		return ((T (*)(ArenaPreAddAccountResponse*, ArenaPreAddAccountResponse*))(Il2CppBase() + 0x1E31700))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaPreAddAccountResponse*, uintptr_t))(Il2CppBase() + 0x1E3172C))(this, input);
	}

};

}
