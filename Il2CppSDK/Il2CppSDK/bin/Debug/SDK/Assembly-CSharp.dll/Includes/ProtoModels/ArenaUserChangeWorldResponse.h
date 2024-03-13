#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUserChangeWorldResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUserChangeWorldResponse"));
	}

	template <typename T = MessageParser1ArenaUserChangeWorldResponse*>*> static T& _parser() {
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
	template <typename T = int32_t> static T& LocationIdFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& locationId_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = MessageParser1ArenaUserChangeWorldResponse*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x285A4E8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x285A54C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaUserChangeWorldResponse*))(Il2CppBase() + 0x285A66C))(this);
	}
	template <typename T = ArenaUserChangeWorldResponse*> T Clone() {
		return ((T (*)(ArenaUserChangeWorldResponse*))(Il2CppBase() + 0x285A774))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(ArenaUserChangeWorldResponse*))(Il2CppBase() + 0x285A7D0))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(ArenaUserChangeWorldResponse*, int32_t))(Il2CppBase() + 0x285A7D8))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(ArenaUserChangeWorldResponse*))(Il2CppBase() + 0x285A7E0))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(ArenaUserChangeWorldResponse*, Il2CppString*))(Il2CppBase() + 0x285A7E8))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaUserChangeWorldResponse*))(Il2CppBase() + 0x285A868))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaUserChangeWorldResponse*, int64_t))(Il2CppBase() + 0x285A870))(this, value);
	}
	template <typename T = int32_t> T get_LocationId() {
		return ((T (*)(ArenaUserChangeWorldResponse*))(Il2CppBase() + 0x285A878))(this);
	}
	template <typename T = void> T set_LocationId(int32_t value) {
		return ((T (*)(ArenaUserChangeWorldResponse*, int32_t))(Il2CppBase() + 0x285A880))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaUserChangeWorldResponse*, Il2CppObject*))(Il2CppBase() + 0x285A888))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaUserChangeWorldResponse* other) {
		return ((T (*)(ArenaUserChangeWorldResponse*, ArenaUserChangeWorldResponse*))(Il2CppBase() + 0x285A8F8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaUserChangeWorldResponse*))(Il2CppBase() + 0x285A978))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaUserChangeWorldResponse*))(Il2CppBase() + 0x285AA28))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaUserChangeWorldResponse*, uintptr_t))(Il2CppBase() + 0x285AA8C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaUserChangeWorldResponse*))(Il2CppBase() + 0x285AB70))(this);
	}
	template <typename T = void> T MergeFrom(ArenaUserChangeWorldResponse* other) {
		return ((T (*)(ArenaUserChangeWorldResponse*, ArenaUserChangeWorldResponse*))(Il2CppBase() + 0x285ACB0))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaUserChangeWorldResponse*, uintptr_t))(Il2CppBase() + 0x285AD14))(this, input);
	}

};

}
