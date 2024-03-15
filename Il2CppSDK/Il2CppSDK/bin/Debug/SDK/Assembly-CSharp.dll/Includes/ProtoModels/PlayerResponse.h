#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class PlayerResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "PlayerResponse"));
	}

	 static MessageParser1<ProtoModels::PlayerResponse*>*& _parser() {
		return *(MessageParser1<ProtoModels::PlayerResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename R = int32_t> static R& ClanFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::Clan*> R& clan_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1<ProtoModels::PlayerResponse*>* get_Parser() {
		return ((MessageParser1<ProtoModels::PlayerResponse*>* (*)(void *))(Il2CppBase() + 0x156D7A8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x156D80C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(PlayerResponse*))(Il2CppBase() + 0x156D92C))(this);
	}
	template <typename R = ProtoModels::PlayerResponse*> R Clone() {
		return ((R (*)(PlayerResponse*))(Il2CppBase() + 0x156DA48))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(PlayerResponse*))(Il2CppBase() + 0x156DAA4))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(PlayerResponse*, int32_t))(Il2CppBase() + 0x156DAAC))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(PlayerResponse*))(Il2CppBase() + 0x156DAB4))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(PlayerResponse*, Il2CppString*))(Il2CppBase() + 0x156DABC))(this, value);
	}
	template <typename R = ProtoModels::Clan*> R get_Clan() {
		return ((R (*)(PlayerResponse*))(Il2CppBase() + 0x156DB3C))(this);
	}
	template <typename R = void> R set_Clan(ProtoModels::Clan* value) {
		return ((R (*)(PlayerResponse*, ProtoModels::Clan*))(Il2CppBase() + 0x156DB44))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(PlayerResponse*, Il2CppObject*))(Il2CppBase() + 0x156DB4C))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::PlayerResponse* other) {
		return ((R (*)(PlayerResponse*, ProtoModels::PlayerResponse*))(Il2CppBase() + 0x156DBBC))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(PlayerResponse*))(Il2CppBase() + 0x156DC30))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(PlayerResponse*))(Il2CppBase() + 0x156DCBC))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(PlayerResponse*, uintptr_t))(Il2CppBase() + 0x156DD20))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(PlayerResponse*))(Il2CppBase() + 0x156DDD8))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::PlayerResponse* other) {
		return ((R (*)(PlayerResponse*, ProtoModels::PlayerResponse*))(Il2CppBase() + 0x156DEDC))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(PlayerResponse*, uintptr_t))(Il2CppBase() + 0x156DFAC))(this, input);
	}

};

}
