#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UpdateGuildRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UpdateGuildRequest"));
	}

	 static MessageParser1<ProtoModels::UpdateGuildRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::UpdateGuildRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename R = int32_t> static R& GuildFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::GuildMessageType*> R& guild_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& PriceFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::Currencies*> R& price_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1<ProtoModels::UpdateGuildRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::UpdateGuildRequest*>* (*)(void *))(Il2CppBase() + 0x153D6BC))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x153D720))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(UpdateGuildRequest*))(Il2CppBase() + 0x153D840))(this);
	}
	template <typename R = ProtoModels::UpdateGuildRequest*> R Clone() {
		return ((R (*)(UpdateGuildRequest*))(Il2CppBase() + 0x153D92C))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(UpdateGuildRequest*))(Il2CppBase() + 0x153D988))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(UpdateGuildRequest*, int64_t))(Il2CppBase() + 0x153D990))(this, value);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(UpdateGuildRequest*))(Il2CppBase() + 0x153D998))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(UpdateGuildRequest*, int64_t))(Il2CppBase() + 0x153D9A0))(this, value);
	}
	template <typename R = ProtoModels::GuildMessageType*> R get_Guild() {
		return ((R (*)(UpdateGuildRequest*))(Il2CppBase() + 0x153D9A8))(this);
	}
	template <typename R = void> R set_Guild(ProtoModels::GuildMessageType* value) {
		return ((R (*)(UpdateGuildRequest*, ProtoModels::GuildMessageType*))(Il2CppBase() + 0x153D9B0))(this, value);
	}
	template <typename R = ProtoModels::Currencies*> R get_Price() {
		return ((R (*)(UpdateGuildRequest*))(Il2CppBase() + 0x153D9B8))(this);
	}
	template <typename R = void> R set_Price(ProtoModels::Currencies* value) {
		return ((R (*)(UpdateGuildRequest*, ProtoModels::Currencies*))(Il2CppBase() + 0x153D9C0))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(UpdateGuildRequest*, Il2CppObject*))(Il2CppBase() + 0x153D9C8))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::UpdateGuildRequest* other) {
		return ((R (*)(UpdateGuildRequest*, ProtoModels::UpdateGuildRequest*))(Il2CppBase() + 0x153DA38))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(UpdateGuildRequest*))(Il2CppBase() + 0x153DABC))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(UpdateGuildRequest*))(Il2CppBase() + 0x153DB58))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(UpdateGuildRequest*, uintptr_t))(Il2CppBase() + 0x153DBBC))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(UpdateGuildRequest*))(Il2CppBase() + 0x153DC98))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::UpdateGuildRequest* other) {
		return ((R (*)(UpdateGuildRequest*, ProtoModels::UpdateGuildRequest*))(Il2CppBase() + 0x153DDCC))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(UpdateGuildRequest*, uintptr_t))(Il2CppBase() + 0x153DEF0))(this, input);
	}

};

}
