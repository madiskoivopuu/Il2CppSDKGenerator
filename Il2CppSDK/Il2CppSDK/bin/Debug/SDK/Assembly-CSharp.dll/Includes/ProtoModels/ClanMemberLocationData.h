#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ClanMemberLocationData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ClanMemberLocationData"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& PlayerIdFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& playerId_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& LocationIdFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& locationId_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& PlayerNameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& playerName_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x159677C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x15967E0))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ClanMemberLocationData*))(Il2CppBase() + 0x1596900))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ClanMemberLocationData*))(Il2CppBase() + 0x15969FC))(this);
	}
	template <typename T = int64_t> T get_PlayerId() {
		return ((T (*)(ClanMemberLocationData*))(Il2CppBase() + 0x1596A58))(this);
	}
	template <typename T = void> T set_PlayerId(int64_t value) {
		return ((T (*)(ClanMemberLocationData*, int64_t))(Il2CppBase() + 0x1596A60))(this, value);
	}
	template <typename T = int64_t> T get_LocationId() {
		return ((T (*)(ClanMemberLocationData*))(Il2CppBase() + 0x1596A68))(this);
	}
	template <typename T = void> T set_LocationId(int64_t value) {
		return ((T (*)(ClanMemberLocationData*, int64_t))(Il2CppBase() + 0x1596A70))(this, value);
	}
	template <typename T = Il2CppString*> T get_PlayerName() {
		return ((T (*)(ClanMemberLocationData*))(Il2CppBase() + 0x1596A78))(this);
	}
	template <typename T = void> T set_PlayerName(Il2CppString* value) {
		return ((T (*)(ClanMemberLocationData*, Il2CppString*))(Il2CppBase() + 0x1596A80))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ClanMemberLocationData*, uintptr_t))(Il2CppBase() + 0x1596B00))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ClanMemberLocationData*, uintptr_t))(Il2CppBase() + 0x1596B70))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ClanMemberLocationData*))(Il2CppBase() + 0x1596BD4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ClanMemberLocationData*))(Il2CppBase() + 0x1596C64))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ClanMemberLocationData*, uintptr_t))(Il2CppBase() + 0x1596CC8))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ClanMemberLocationData*))(Il2CppBase() + 0x1596D80))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ClanMemberLocationData*, uintptr_t))(Il2CppBase() + 0x1596E84))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ClanMemberLocationData*, uintptr_t))(Il2CppBase() + 0x1596EC4))(this, input);
	}

};

}
