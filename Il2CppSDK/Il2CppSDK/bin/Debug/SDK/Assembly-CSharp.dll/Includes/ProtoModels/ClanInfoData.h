#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ClanInfoData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ClanInfoData"));
	}

	template <typename T = MessageParser1ClanInfoData*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& IdFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& id_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& NameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& name_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& LeaderIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& leaderID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& IsLiveFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& isLive_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = MessageParser1ClanInfoData*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x15867E0))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1586844))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ClanInfoData*))(Il2CppBase() + 0x1586964))(this);
	}
	template <typename T = ClanInfoData*> T Clone() {
		return ((T (*)(ClanInfoData*))(Il2CppBase() + 0x1586A6C))(this);
	}
	template <typename T = int64_t> T get_Id() {
		return ((T (*)(ClanInfoData*))(Il2CppBase() + 0x1586AC8))(this);
	}
	template <typename T = void> T set_Id(int64_t value) {
		return ((T (*)(ClanInfoData*, int64_t))(Il2CppBase() + 0x1586AD0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(ClanInfoData*))(Il2CppBase() + 0x1586AD8))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(ClanInfoData*, Il2CppString*))(Il2CppBase() + 0x1586AE0))(this, value);
	}
	template <typename T = int64_t> T get_LeaderID() {
		return ((T (*)(ClanInfoData*))(Il2CppBase() + 0x1586B60))(this);
	}
	template <typename T = void> T set_LeaderID(int64_t value) {
		return ((T (*)(ClanInfoData*, int64_t))(Il2CppBase() + 0x1586B68))(this, value);
	}
	template <typename T = bool> T get_IsLive() {
		return ((T (*)(ClanInfoData*))(Il2CppBase() + 0x1586B70))(this);
	}
	template <typename T = void> T set_IsLive(bool value) {
		return ((T (*)(ClanInfoData*, bool))(Il2CppBase() + 0x1586B78))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ClanInfoData*, Il2CppObject*))(Il2CppBase() + 0x1586B84))(this, other);
	}
	template <typename T = bool> T Equals_1(ClanInfoData* other) {
		return ((T (*)(ClanInfoData*, ClanInfoData*))(Il2CppBase() + 0x1586BF4))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ClanInfoData*))(Il2CppBase() + 0x1586C80))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ClanInfoData*))(Il2CppBase() + 0x1586D34))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ClanInfoData*, uintptr_t))(Il2CppBase() + 0x1586D98))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ClanInfoData*))(Il2CppBase() + 0x1586E7C))(this);
	}
	template <typename T = void> T MergeFrom(ClanInfoData* other) {
		return ((T (*)(ClanInfoData*, ClanInfoData*))(Il2CppBase() + 0x1586F94))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ClanInfoData*, uintptr_t))(Il2CppBase() + 0x1586FF8))(this, input);
	}

};

}
