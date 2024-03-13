#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class DisbandGuildRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "DisbandGuildRequest"));
	}

	template <typename T = MessageParser1DisbandGuildRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& GuildIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& guildID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = MessageParser1DisbandGuildRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x13010FC))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1301160))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(DisbandGuildRequest*))(Il2CppBase() + 0x1301280))(this);
	}
	template <typename T = DisbandGuildRequest*> T Clone() {
		return ((T (*)(DisbandGuildRequest*))(Il2CppBase() + 0x1301328))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(DisbandGuildRequest*))(Il2CppBase() + 0x1301384))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(DisbandGuildRequest*, int64_t))(Il2CppBase() + 0x130138C))(this, value);
	}
	template <typename T = int64_t> T get_GuildID() {
		return ((T (*)(DisbandGuildRequest*))(Il2CppBase() + 0x1301394))(this);
	}
	template <typename T = void> T set_GuildID(int64_t value) {
		return ((T (*)(DisbandGuildRequest*, int64_t))(Il2CppBase() + 0x130139C))(this, value);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(DisbandGuildRequest*))(Il2CppBase() + 0x13013A4))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(DisbandGuildRequest*, int64_t))(Il2CppBase() + 0x13013AC))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(DisbandGuildRequest*, Il2CppObject*))(Il2CppBase() + 0x13013B4))(this, other);
	}
	template <typename T = bool> T Equals_1(DisbandGuildRequest* other) {
		return ((T (*)(DisbandGuildRequest*, DisbandGuildRequest*))(Il2CppBase() + 0x1301460))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(DisbandGuildRequest*))(Il2CppBase() + 0x13014B0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(DisbandGuildRequest*))(Il2CppBase() + 0x1301538))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(DisbandGuildRequest*, uintptr_t))(Il2CppBase() + 0x130159C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(DisbandGuildRequest*))(Il2CppBase() + 0x130164C))(this);
	}
	template <typename T = void> T MergeFrom(DisbandGuildRequest* other) {
		return ((T (*)(DisbandGuildRequest*, DisbandGuildRequest*))(Il2CppBase() + 0x1301744))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(DisbandGuildRequest*, uintptr_t))(Il2CppBase() + 0x1301770))(this, input);
	}

};

}
