#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ClanMemberLocationData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ClanMemberLocationData"));
	}

	 static MessageParser1ProtoModels::ClanMemberLocationData*>*& _parser() {
		return *(MessageParser1ProtoModels::ClanMemberLocationData*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& PlayerIdFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& playerId_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& LocationIdFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& locationId_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& PlayerNameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& playerName_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::ClanMemberLocationData*>* get_Parser() {
		return ((MessageParser1ProtoModels::ClanMemberLocationData*>* (*)(void *))(Il2CppBase() + 0x159677C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x15967E0))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ClanMemberLocationData*))(Il2CppBase() + 0x1596900))(this);
	}
	template <typename R = ProtoModels::ClanMemberLocationData*> R Clone() {
		return ((R (*)(ClanMemberLocationData*))(Il2CppBase() + 0x15969FC))(this);
	}
	template <typename R = int64_t> R get_PlayerId() {
		return ((R (*)(ClanMemberLocationData*))(Il2CppBase() + 0x1596A58))(this);
	}
	template <typename R = void> R set_PlayerId(int64_t value) {
		return ((R (*)(ClanMemberLocationData*, int64_t))(Il2CppBase() + 0x1596A60))(this, value);
	}
	template <typename R = int64_t> R get_LocationId() {
		return ((R (*)(ClanMemberLocationData*))(Il2CppBase() + 0x1596A68))(this);
	}
	template <typename R = void> R set_LocationId(int64_t value) {
		return ((R (*)(ClanMemberLocationData*, int64_t))(Il2CppBase() + 0x1596A70))(this, value);
	}
	template <typename R = Il2CppString*> R get_PlayerName() {
		return ((R (*)(ClanMemberLocationData*))(Il2CppBase() + 0x1596A78))(this);
	}
	template <typename R = void> R set_PlayerName(Il2CppString* value) {
		return ((R (*)(ClanMemberLocationData*, Il2CppString*))(Il2CppBase() + 0x1596A80))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ClanMemberLocationData*, Il2CppObject*))(Il2CppBase() + 0x1596B00))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ClanMemberLocationData* other) {
		return ((R (*)(ClanMemberLocationData*, ProtoModels::ClanMemberLocationData*))(Il2CppBase() + 0x1596B70))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ClanMemberLocationData*))(Il2CppBase() + 0x1596BD4))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ClanMemberLocationData*))(Il2CppBase() + 0x1596C64))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ClanMemberLocationData*, uintptr_t))(Il2CppBase() + 0x1596CC8))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ClanMemberLocationData*))(Il2CppBase() + 0x1596D80))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ClanMemberLocationData* other) {
		return ((R (*)(ClanMemberLocationData*, ProtoModels::ClanMemberLocationData*))(Il2CppBase() + 0x1596E84))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ClanMemberLocationData*, uintptr_t))(Il2CppBase() + 0x1596EC4))(this, input);
	}

};

}
