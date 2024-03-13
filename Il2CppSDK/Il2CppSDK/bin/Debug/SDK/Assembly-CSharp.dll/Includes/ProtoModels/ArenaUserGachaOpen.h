#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUserGachaOpen
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUserGachaOpen"));
	}

	template <typename T = MessageParser1ArenaUserGachaOpen*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& MailIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& mailID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& TransactionIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& transactionID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = MessageParser1ArenaUserGachaOpen*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x285BDAC))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x285BE10))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaUserGachaOpen*))(Il2CppBase() + 0x285BF30))(this);
	}
	template <typename T = ArenaUserGachaOpen*> T Clone() {
		return ((T (*)(ArenaUserGachaOpen*))(Il2CppBase() + 0x285C02C))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ArenaUserGachaOpen*))(Il2CppBase() + 0x285C088))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ArenaUserGachaOpen*, int64_t))(Il2CppBase() + 0x285C090))(this, value);
	}
	template <typename T = int64_t> T get_MailID() {
		return ((T (*)(ArenaUserGachaOpen*))(Il2CppBase() + 0x285C098))(this);
	}
	template <typename T = void> T set_MailID(int64_t value) {
		return ((T (*)(ArenaUserGachaOpen*, int64_t))(Il2CppBase() + 0x285C0A0))(this, value);
	}
	template <typename T = Il2CppString*> T get_TransactionID() {
		return ((T (*)(ArenaUserGachaOpen*))(Il2CppBase() + 0x285C0A8))(this);
	}
	template <typename T = void> T set_TransactionID(Il2CppString* value) {
		return ((T (*)(ArenaUserGachaOpen*, Il2CppString*))(Il2CppBase() + 0x285C0B0))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaUserGachaOpen*, Il2CppObject*))(Il2CppBase() + 0x285C130))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaUserGachaOpen* other) {
		return ((T (*)(ArenaUserGachaOpen*, ArenaUserGachaOpen*))(Il2CppBase() + 0x285C1A0))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaUserGachaOpen*))(Il2CppBase() + 0x285C204))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaUserGachaOpen*))(Il2CppBase() + 0x285C294))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaUserGachaOpen*, uintptr_t))(Il2CppBase() + 0x285C2F8))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaUserGachaOpen*))(Il2CppBase() + 0x285C3B0))(this);
	}
	template <typename T = void> T MergeFrom(ArenaUserGachaOpen* other) {
		return ((T (*)(ArenaUserGachaOpen*, ArenaUserGachaOpen*))(Il2CppBase() + 0x285C4B4))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaUserGachaOpen*, uintptr_t))(Il2CppBase() + 0x285C4F4))(this, input);
	}

};

}
