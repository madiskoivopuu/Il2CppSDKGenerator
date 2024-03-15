#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class CheckUserResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "CheckUserResponse"));
	}

	 static MessageParser1ProtoModels::CheckUserResponse*>*& _parser() {
		return *(MessageParser1ProtoModels::CheckUserResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename R = int32_t> static R& NameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& name_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& BattleTagIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& battleTagID_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& LevelFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& level_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& ExistFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& exist_() {
		return *(R*)((uintptr_t)this + 0x34);
	}
	template <typename R = int32_t> static R& LastLoginFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& lastLogin_() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	 static MessageParser1ProtoModels::CheckUserResponse*>* get_Parser() {
		return ((MessageParser1ProtoModels::CheckUserResponse*>* (*)(void *))(Il2CppBase() + 0x173DFD4))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x173E038))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(CheckUserResponse*))(Il2CppBase() + 0x173E158))(this);
	}
	template <typename R = ProtoModels::CheckUserResponse*> R Clone() {
		return ((R (*)(CheckUserResponse*))(Il2CppBase() + 0x173E2A8))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(CheckUserResponse*))(Il2CppBase() + 0x173E304))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(CheckUserResponse*, int32_t))(Il2CppBase() + 0x173E30C))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(CheckUserResponse*))(Il2CppBase() + 0x173E314))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(CheckUserResponse*, Il2CppString*))(Il2CppBase() + 0x173E31C))(this, value);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(CheckUserResponse*))(Il2CppBase() + 0x173E39C))(this);
	}
	template <typename R = void> R set_Name(Il2CppString* value) {
		return ((R (*)(CheckUserResponse*, Il2CppString*))(Il2CppBase() + 0x173E3A4))(this, value);
	}
	template <typename R = Il2CppString*> R get_BattleTagID() {
		return ((R (*)(CheckUserResponse*))(Il2CppBase() + 0x173E424))(this);
	}
	template <typename R = void> R set_BattleTagID(Il2CppString* value) {
		return ((R (*)(CheckUserResponse*, Il2CppString*))(Il2CppBase() + 0x173E42C))(this, value);
	}
	template <typename R = int32_t> R get_Level() {
		return ((R (*)(CheckUserResponse*))(Il2CppBase() + 0x173E4AC))(this);
	}
	template <typename R = void> R set_Level(int32_t value) {
		return ((R (*)(CheckUserResponse*, int32_t))(Il2CppBase() + 0x173E4B4))(this, value);
	}
	template <typename R = bool> R get_Exist() {
		return ((R (*)(CheckUserResponse*))(Il2CppBase() + 0x173E4BC))(this);
	}
	template <typename R = void> R set_Exist(bool value) {
		return ((R (*)(CheckUserResponse*, bool))(Il2CppBase() + 0x173E4C4))(this, value);
	}
	template <typename R = int64_t> R get_LastLogin() {
		return ((R (*)(CheckUserResponse*))(Il2CppBase() + 0x173E4D0))(this);
	}
	template <typename R = void> R set_LastLogin(int64_t value) {
		return ((R (*)(CheckUserResponse*, int64_t))(Il2CppBase() + 0x173E4D8))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(CheckUserResponse*, Il2CppObject*))(Il2CppBase() + 0x173E4E0))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::CheckUserResponse* other) {
		return ((R (*)(CheckUserResponse*, ProtoModels::CheckUserResponse*))(Il2CppBase() + 0x173E550))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(CheckUserResponse*))(Il2CppBase() + 0x173E618))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(CheckUserResponse*))(Il2CppBase() + 0x173E72C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(CheckUserResponse*, uintptr_t))(Il2CppBase() + 0x173E790))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(CheckUserResponse*))(Il2CppBase() + 0x173E908))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::CheckUserResponse* other) {
		return ((R (*)(CheckUserResponse*, ProtoModels::CheckUserResponse*))(Il2CppBase() + 0x173EAE8))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(CheckUserResponse*, uintptr_t))(Il2CppBase() + 0x173EB88))(this, input);
	}

};

}
