#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ClanInfoData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ClanInfoData"));
	}

	 static MessageParser1<ProtoModels::ClanInfoData*>*& _parser() {
		return *(MessageParser1<ProtoModels::ClanInfoData*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& IdFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& id_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& NameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& name_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& LeaderIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& leaderID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& IsLiveFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& isLive_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1<ProtoModels::ClanInfoData*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ClanInfoData*>* (*)(void *))(Il2CppBase() + 0x15867E0))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1586844))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ClanInfoData*))(Il2CppBase() + 0x1586964))(this);
	}
	template <typename R = ProtoModels::ClanInfoData*> R Clone() {
		return ((R (*)(ClanInfoData*))(Il2CppBase() + 0x1586A6C))(this);
	}
	template <typename R = int64_t> R get_Id() {
		return ((R (*)(ClanInfoData*))(Il2CppBase() + 0x1586AC8))(this);
	}
	template <typename R = void> R set_Id(int64_t value) {
		return ((R (*)(ClanInfoData*, int64_t))(Il2CppBase() + 0x1586AD0))(this, value);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(ClanInfoData*))(Il2CppBase() + 0x1586AD8))(this);
	}
	template <typename R = void> R set_Name(Il2CppString* value) {
		return ((R (*)(ClanInfoData*, Il2CppString*))(Il2CppBase() + 0x1586AE0))(this, value);
	}
	template <typename R = int64_t> R get_LeaderID() {
		return ((R (*)(ClanInfoData*))(Il2CppBase() + 0x1586B60))(this);
	}
	template <typename R = void> R set_LeaderID(int64_t value) {
		return ((R (*)(ClanInfoData*, int64_t))(Il2CppBase() + 0x1586B68))(this, value);
	}
	template <typename R = bool> R get_IsLive() {
		return ((R (*)(ClanInfoData*))(Il2CppBase() + 0x1586B70))(this);
	}
	template <typename R = void> R set_IsLive(bool value) {
		return ((R (*)(ClanInfoData*, bool))(Il2CppBase() + 0x1586B78))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ClanInfoData*, Il2CppObject*))(Il2CppBase() + 0x1586B84))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ClanInfoData* other) {
		return ((R (*)(ClanInfoData*, ProtoModels::ClanInfoData*))(Il2CppBase() + 0x1586BF4))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ClanInfoData*))(Il2CppBase() + 0x1586C80))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ClanInfoData*))(Il2CppBase() + 0x1586D34))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ClanInfoData*, uintptr_t))(Il2CppBase() + 0x1586D98))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ClanInfoData*))(Il2CppBase() + 0x1586E7C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ClanInfoData* other) {
		return ((R (*)(ClanInfoData*, ProtoModels::ClanInfoData*))(Il2CppBase() + 0x1586F94))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ClanInfoData*, uintptr_t))(Il2CppBase() + 0x1586FF8))(this, input);
	}

};

}
