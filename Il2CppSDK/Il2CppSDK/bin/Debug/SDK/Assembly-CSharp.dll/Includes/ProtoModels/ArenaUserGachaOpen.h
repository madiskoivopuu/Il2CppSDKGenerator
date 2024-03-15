#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUserGachaOpen
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUserGachaOpen"));
	}

	 static MessageParser1<ProtoModels::ArenaUserGachaOpen*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaUserGachaOpen*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& MailIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& mailID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& TransactionIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& transactionID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1<ProtoModels::ArenaUserGachaOpen*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaUserGachaOpen*>* (*)(void *))(Il2CppBase() + 0x285BDAC))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x285BE10))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaUserGachaOpen*))(Il2CppBase() + 0x285BF30))(this);
	}
	template <typename R = ProtoModels::ArenaUserGachaOpen*> R Clone() {
		return ((R (*)(ArenaUserGachaOpen*))(Il2CppBase() + 0x285C02C))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(ArenaUserGachaOpen*))(Il2CppBase() + 0x285C088))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(ArenaUserGachaOpen*, int64_t))(Il2CppBase() + 0x285C090))(this, value);
	}
	template <typename R = int64_t> R get_MailID() {
		return ((R (*)(ArenaUserGachaOpen*))(Il2CppBase() + 0x285C098))(this);
	}
	template <typename R = void> R set_MailID(int64_t value) {
		return ((R (*)(ArenaUserGachaOpen*, int64_t))(Il2CppBase() + 0x285C0A0))(this, value);
	}
	template <typename R = Il2CppString*> R get_TransactionID() {
		return ((R (*)(ArenaUserGachaOpen*))(Il2CppBase() + 0x285C0A8))(this);
	}
	template <typename R = void> R set_TransactionID(Il2CppString* value) {
		return ((R (*)(ArenaUserGachaOpen*, Il2CppString*))(Il2CppBase() + 0x285C0B0))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaUserGachaOpen*, Il2CppObject*))(Il2CppBase() + 0x285C130))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaUserGachaOpen* other) {
		return ((R (*)(ArenaUserGachaOpen*, ProtoModels::ArenaUserGachaOpen*))(Il2CppBase() + 0x285C1A0))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaUserGachaOpen*))(Il2CppBase() + 0x285C204))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaUserGachaOpen*))(Il2CppBase() + 0x285C294))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaUserGachaOpen*, uintptr_t))(Il2CppBase() + 0x285C2F8))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaUserGachaOpen*))(Il2CppBase() + 0x285C3B0))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaUserGachaOpen* other) {
		return ((R (*)(ArenaUserGachaOpen*, ProtoModels::ArenaUserGachaOpen*))(Il2CppBase() + 0x285C4B4))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaUserGachaOpen*, uintptr_t))(Il2CppBase() + 0x285C4F4))(this, input);
	}

};

}
