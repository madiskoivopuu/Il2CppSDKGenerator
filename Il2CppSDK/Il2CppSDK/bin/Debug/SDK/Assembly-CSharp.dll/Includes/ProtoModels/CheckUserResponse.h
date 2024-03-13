#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class CheckUserResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "CheckUserResponse"));
	}

	template <typename T = MessageParser1CheckUserResponse*>*> static T& _parser() {
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
	template <typename T = int32_t> static T& NameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& name_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& BattleTagIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& battleTagID_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& LevelFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& level_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& ExistFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& exist_() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> static T& LastLoginFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& lastLogin_() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = MessageParser1CheckUserResponse*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x173DFD4))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x173E038))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(CheckUserResponse*))(Il2CppBase() + 0x173E158))(this);
	}
	template <typename T = CheckUserResponse*> T Clone() {
		return ((T (*)(CheckUserResponse*))(Il2CppBase() + 0x173E2A8))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(CheckUserResponse*))(Il2CppBase() + 0x173E304))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(CheckUserResponse*, int32_t))(Il2CppBase() + 0x173E30C))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(CheckUserResponse*))(Il2CppBase() + 0x173E314))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(CheckUserResponse*, Il2CppString*))(Il2CppBase() + 0x173E31C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(CheckUserResponse*))(Il2CppBase() + 0x173E39C))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(CheckUserResponse*, Il2CppString*))(Il2CppBase() + 0x173E3A4))(this, value);
	}
	template <typename T = Il2CppString*> T get_BattleTagID() {
		return ((T (*)(CheckUserResponse*))(Il2CppBase() + 0x173E424))(this);
	}
	template <typename T = void> T set_BattleTagID(Il2CppString* value) {
		return ((T (*)(CheckUserResponse*, Il2CppString*))(Il2CppBase() + 0x173E42C))(this, value);
	}
	template <typename T = int32_t> T get_Level() {
		return ((T (*)(CheckUserResponse*))(Il2CppBase() + 0x173E4AC))(this);
	}
	template <typename T = void> T set_Level(int32_t value) {
		return ((T (*)(CheckUserResponse*, int32_t))(Il2CppBase() + 0x173E4B4))(this, value);
	}
	template <typename T = bool> T get_Exist() {
		return ((T (*)(CheckUserResponse*))(Il2CppBase() + 0x173E4BC))(this);
	}
	template <typename T = void> T set_Exist(bool value) {
		return ((T (*)(CheckUserResponse*, bool))(Il2CppBase() + 0x173E4C4))(this, value);
	}
	template <typename T = int64_t> T get_LastLogin() {
		return ((T (*)(CheckUserResponse*))(Il2CppBase() + 0x173E4D0))(this);
	}
	template <typename T = void> T set_LastLogin(int64_t value) {
		return ((T (*)(CheckUserResponse*, int64_t))(Il2CppBase() + 0x173E4D8))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(CheckUserResponse*, Il2CppObject*))(Il2CppBase() + 0x173E4E0))(this, other);
	}
	template <typename T = bool> T Equals_1(CheckUserResponse* other) {
		return ((T (*)(CheckUserResponse*, CheckUserResponse*))(Il2CppBase() + 0x173E550))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(CheckUserResponse*))(Il2CppBase() + 0x173E618))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(CheckUserResponse*))(Il2CppBase() + 0x173E72C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(CheckUserResponse*, uintptr_t))(Il2CppBase() + 0x173E790))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(CheckUserResponse*))(Il2CppBase() + 0x173E908))(this);
	}
	template <typename T = void> T MergeFrom(CheckUserResponse* other) {
		return ((T (*)(CheckUserResponse*, CheckUserResponse*))(Il2CppBase() + 0x173EAE8))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(CheckUserResponse*, uintptr_t))(Il2CppBase() + 0x173EB88))(this, input);
	}

};

}
