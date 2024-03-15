#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class CreateGuildRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "CreateGuildRequest"));
	}

	 static MessageParser1<ProtoModels::CreateGuildRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::CreateGuildRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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

	 static MessageParser1<ProtoModels::CreateGuildRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::CreateGuildRequest*>* (*)(void *))(Il2CppBase() + 0x1BCA30C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1BCA370))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(CreateGuildRequest*))(Il2CppBase() + 0x1BCA490))(this);
	}
	template <typename R = ProtoModels::CreateGuildRequest*> R Clone() {
		return ((R (*)(CreateGuildRequest*))(Il2CppBase() + 0x1BCA5D4))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(CreateGuildRequest*))(Il2CppBase() + 0x1BCA630))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(CreateGuildRequest*, int64_t))(Il2CppBase() + 0x1BCA638))(this, value);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(CreateGuildRequest*))(Il2CppBase() + 0x1BCA640))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(CreateGuildRequest*, int64_t))(Il2CppBase() + 0x1BCA648))(this, value);
	}
	template <typename R = ProtoModels::GuildMessageType*> R get_Guild() {
		return ((R (*)(CreateGuildRequest*))(Il2CppBase() + 0x1BCA650))(this);
	}
	template <typename R = void> R set_Guild(ProtoModels::GuildMessageType* value) {
		return ((R (*)(CreateGuildRequest*, ProtoModels::GuildMessageType*))(Il2CppBase() + 0x1BCA658))(this, value);
	}
	template <typename R = ProtoModels::Currencies*> R get_Price() {
		return ((R (*)(CreateGuildRequest*))(Il2CppBase() + 0x1BCA660))(this);
	}
	template <typename R = void> R set_Price(ProtoModels::Currencies* value) {
		return ((R (*)(CreateGuildRequest*, ProtoModels::Currencies*))(Il2CppBase() + 0x1BCA668))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(CreateGuildRequest*, Il2CppObject*))(Il2CppBase() + 0x1BCA670))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::CreateGuildRequest* other) {
		return ((R (*)(CreateGuildRequest*, ProtoModels::CreateGuildRequest*))(Il2CppBase() + 0x1BCA6E0))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(CreateGuildRequest*))(Il2CppBase() + 0x1BCA764))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(CreateGuildRequest*))(Il2CppBase() + 0x1BCA800))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(CreateGuildRequest*, uintptr_t))(Il2CppBase() + 0x1BCA864))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(CreateGuildRequest*))(Il2CppBase() + 0x1BCA940))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::CreateGuildRequest* other) {
		return ((R (*)(CreateGuildRequest*, ProtoModels::CreateGuildRequest*))(Il2CppBase() + 0x1BCAA74))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(CreateGuildRequest*, uintptr_t))(Il2CppBase() + 0x1BCAC8C))(this, input);
	}

};

}
