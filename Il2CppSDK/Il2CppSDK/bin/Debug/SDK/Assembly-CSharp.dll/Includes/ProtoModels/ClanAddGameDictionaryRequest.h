#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ClanAddGameDictionaryRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ClanAddGameDictionaryRequest"));
	}

	 static MessageParser1ProtoModels::ClanAddGameDictionaryRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::ClanAddGameDictionaryRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& ClanIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& clanID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& KeyFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& key_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& ValueFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& value_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1ProtoModels::ClanAddGameDictionaryRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::ClanAddGameDictionaryRequest*>* (*)(void *))(Il2CppBase() + 0x17499CC))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1749A30))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ClanAddGameDictionaryRequest*))(Il2CppBase() + 0x1749B50))(this);
	}
	template <typename R = ProtoModels::ClanAddGameDictionaryRequest*> R Clone() {
		return ((R (*)(ClanAddGameDictionaryRequest*))(Il2CppBase() + 0x1749C6C))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(ClanAddGameDictionaryRequest*))(Il2CppBase() + 0x1749CC8))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(ClanAddGameDictionaryRequest*, int64_t))(Il2CppBase() + 0x1749CD0))(this, value);
	}
	template <typename R = int64_t> R get_ClanID() {
		return ((R (*)(ClanAddGameDictionaryRequest*))(Il2CppBase() + 0x1749CD8))(this);
	}
	template <typename R = void> R set_ClanID(int64_t value) {
		return ((R (*)(ClanAddGameDictionaryRequest*, int64_t))(Il2CppBase() + 0x1749CE0))(this, value);
	}
	template <typename R = Il2CppString*> R get_Key() {
		return ((R (*)(ClanAddGameDictionaryRequest*))(Il2CppBase() + 0x1749CE8))(this);
	}
	template <typename R = void> R set_Key(Il2CppString* value) {
		return ((R (*)(ClanAddGameDictionaryRequest*, Il2CppString*))(Il2CppBase() + 0x1749CF0))(this, value);
	}
	template <typename R = Il2CppString*> R get_Value() {
		return ((R (*)(ClanAddGameDictionaryRequest*))(Il2CppBase() + 0x1749D70))(this);
	}
	template <typename R = void> R set_Value(Il2CppString* value) {
		return ((R (*)(ClanAddGameDictionaryRequest*, Il2CppString*))(Il2CppBase() + 0x1749D78))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ClanAddGameDictionaryRequest*, Il2CppObject*))(Il2CppBase() + 0x1749DF8))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ClanAddGameDictionaryRequest* other) {
		return ((R (*)(ClanAddGameDictionaryRequest*, ProtoModels::ClanAddGameDictionaryRequest*))(Il2CppBase() + 0x1749E68))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ClanAddGameDictionaryRequest*))(Il2CppBase() + 0x1749EF0))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ClanAddGameDictionaryRequest*))(Il2CppBase() + 0x1749FA0))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ClanAddGameDictionaryRequest*, uintptr_t))(Il2CppBase() + 0x174A004))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ClanAddGameDictionaryRequest*))(Il2CppBase() + 0x174A0F0))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ClanAddGameDictionaryRequest* other) {
		return ((R (*)(ClanAddGameDictionaryRequest*, ProtoModels::ClanAddGameDictionaryRequest*))(Il2CppBase() + 0x174A238))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ClanAddGameDictionaryRequest*, uintptr_t))(Il2CppBase() + 0x174A2B0))(this, input);
	}

};

}
