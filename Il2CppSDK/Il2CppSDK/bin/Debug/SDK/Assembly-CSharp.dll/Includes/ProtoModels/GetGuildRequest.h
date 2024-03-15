#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GetGuildRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GetGuildRequest"));
	}

	 static MessageParser1<ProtoModels::GetGuildRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::GetGuildRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& ParamFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& param_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& SearchTypeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::GuildSearchType> R& searchType_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1<ProtoModels::GetGuildRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::GetGuildRequest*>* (*)(void *))(Il2CppBase() + 0x176FB7C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x176FBE0))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(GetGuildRequest*))(Il2CppBase() + 0x176FD00))(this);
	}
	template <typename R = ProtoModels::GetGuildRequest*> R Clone() {
		return ((R (*)(GetGuildRequest*))(Il2CppBase() + 0x176FE08))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(GetGuildRequest*))(Il2CppBase() + 0x176FE64))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(GetGuildRequest*, int64_t))(Il2CppBase() + 0x176FE6C))(this, value);
	}
	template <typename R = Il2CppString*> R get_Param() {
		return ((R (*)(GetGuildRequest*))(Il2CppBase() + 0x176FE74))(this);
	}
	template <typename R = void> R set_Param(Il2CppString* value) {
		return ((R (*)(GetGuildRequest*, Il2CppString*))(Il2CppBase() + 0x176FE7C))(this, value);
	}
	template <typename R = ProtoModels::GuildSearchType> R get_SearchType() {
		return ((R (*)(GetGuildRequest*))(Il2CppBase() + 0x176FEFC))(this);
	}
	template <typename R = void> R set_SearchType(ProtoModels::GuildSearchType value) {
		return ((R (*)(GetGuildRequest*, ProtoModels::GuildSearchType))(Il2CppBase() + 0x176FF04))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(GetGuildRequest*))(Il2CppBase() + 0x176FF0C))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(GetGuildRequest*, int64_t))(Il2CppBase() + 0x176FF14))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(GetGuildRequest*, Il2CppObject*))(Il2CppBase() + 0x176FF1C))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::GetGuildRequest* other) {
		return ((R (*)(GetGuildRequest*, ProtoModels::GetGuildRequest*))(Il2CppBase() + 0x176FF8C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(GetGuildRequest*))(Il2CppBase() + 0x177000C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(GetGuildRequest*))(Il2CppBase() + 0x17700BC))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(GetGuildRequest*, uintptr_t))(Il2CppBase() + 0x1770120))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(GetGuildRequest*))(Il2CppBase() + 0x1770204))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::GetGuildRequest* other) {
		return ((R (*)(GetGuildRequest*, ProtoModels::GetGuildRequest*))(Il2CppBase() + 0x1770344))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(GetGuildRequest*, uintptr_t))(Il2CppBase() + 0x17703A8))(this, input);
	}

};

}
