#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class PlayerFindByName
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "PlayerFindByName"));
	}

	 static MessageParser1<ProtoModels::PlayerFindByName*>*& _parser() {
		return *(MessageParser1<ProtoModels::PlayerFindByName*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& NameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& name_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& SearchTypeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::PlayerSearchType> R& searchType_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1<ProtoModels::PlayerFindByName*>* get_Parser() {
		return ((MessageParser1<ProtoModels::PlayerFindByName*>* (*)(void *))(Il2CppBase() + 0x1567DD0))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1567E34))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(PlayerFindByName*))(Il2CppBase() + 0x1567F54))(this);
	}
	template <typename R = ProtoModels::PlayerFindByName*> R Clone() {
		return ((R (*)(PlayerFindByName*))(Il2CppBase() + 0x1568054))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(PlayerFindByName*))(Il2CppBase() + 0x15680B0))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(PlayerFindByName*, int64_t))(Il2CppBase() + 0x15680B8))(this, value);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(PlayerFindByName*))(Il2CppBase() + 0x15680C0))(this);
	}
	template <typename R = void> R set_Name(Il2CppString* value) {
		return ((R (*)(PlayerFindByName*, Il2CppString*))(Il2CppBase() + 0x15680C8))(this, value);
	}
	template <typename R = ProtoModels::PlayerSearchType> R get_SearchType() {
		return ((R (*)(PlayerFindByName*))(Il2CppBase() + 0x1568148))(this);
	}
	template <typename R = void> R set_SearchType(ProtoModels::PlayerSearchType value) {
		return ((R (*)(PlayerFindByName*, ProtoModels::PlayerSearchType))(Il2CppBase() + 0x1568150))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(PlayerFindByName*, Il2CppObject*))(Il2CppBase() + 0x1568158))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::PlayerFindByName* other) {
		return ((R (*)(PlayerFindByName*, ProtoModels::PlayerFindByName*))(Il2CppBase() + 0x15681C8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(PlayerFindByName*))(Il2CppBase() + 0x1568238))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(PlayerFindByName*))(Il2CppBase() + 0x15682CC))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(PlayerFindByName*, uintptr_t))(Il2CppBase() + 0x1568330))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(PlayerFindByName*))(Il2CppBase() + 0x15683E8))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::PlayerFindByName* other) {
		return ((R (*)(PlayerFindByName*, ProtoModels::PlayerFindByName*))(Il2CppBase() + 0x15684EC))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(PlayerFindByName*, uintptr_t))(Il2CppBase() + 0x1568544))(this, input);
	}

};

}
