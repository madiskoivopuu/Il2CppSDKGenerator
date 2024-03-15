#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildUser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildUser"));
	}

	 static MessageParser1<ProtoModels::GuildUser*>*& _parser() {
		return *(MessageParser1<ProtoModels::GuildUser*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	 static MessageParser1<ProtoModels::GuildUser*>* get_Parser() {
		return ((MessageParser1<ProtoModels::GuildUser*>* (*)(void *))(Il2CppBase() + 0x1946BE4))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1946C48))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(GuildUser*))(Il2CppBase() + 0x1946D68))(this);
	}
	template <typename R = ProtoModels::GuildUser*> R Clone() {
		return ((R (*)(GuildUser*))(Il2CppBase() + 0x1946E00))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(GuildUser*))(Il2CppBase() + 0x1946E6C))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(GuildUser*, int64_t))(Il2CppBase() + 0x1946E74))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(GuildUser*, Il2CppObject*))(Il2CppBase() + 0x1946E7C))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::GuildUser* other) {
		return ((R (*)(GuildUser*, ProtoModels::GuildUser*))(Il2CppBase() + 0x1946F08))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(GuildUser*))(Il2CppBase() + 0x1946F38))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(GuildUser*))(Il2CppBase() + 0x1946F78))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(GuildUser*, uintptr_t))(Il2CppBase() + 0x1946FDC))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(GuildUser*))(Il2CppBase() + 0x1947034))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::GuildUser* other) {
		return ((R (*)(GuildUser*, ProtoModels::GuildUser*))(Il2CppBase() + 0x19470B0))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(GuildUser*, uintptr_t))(Il2CppBase() + 0x19470C4))(this, input);
	}

};

}
