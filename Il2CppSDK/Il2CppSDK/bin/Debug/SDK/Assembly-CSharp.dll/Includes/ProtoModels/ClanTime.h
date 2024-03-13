#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ClanTime
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ClanTime"));
	}

	template <typename T = MessageParser1ClanTime*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ClanIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& clanID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& EndTimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& endTime_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = MessageParser1ClanTime*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x159863C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x15986A0))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ClanTime*))(Il2CppBase() + 0x15987C0))(this);
	}
	template <typename T = ClanTime*> T Clone() {
		return ((T (*)(ClanTime*))(Il2CppBase() + 0x1598860))(this);
	}
	template <typename T = int64_t> T get_ClanID() {
		return ((T (*)(ClanTime*))(Il2CppBase() + 0x15988BC))(this);
	}
	template <typename T = void> T set_ClanID(int64_t value) {
		return ((T (*)(ClanTime*, int64_t))(Il2CppBase() + 0x15988C4))(this, value);
	}
	template <typename T = int64_t> T get_EndTime() {
		return ((T (*)(ClanTime*))(Il2CppBase() + 0x15988CC))(this);
	}
	template <typename T = void> T set_EndTime(int64_t value) {
		return ((T (*)(ClanTime*, int64_t))(Il2CppBase() + 0x15988D4))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ClanTime*, Il2CppObject*))(Il2CppBase() + 0x15988DC))(this, other);
	}
	template <typename T = bool> T Equals_1(ClanTime* other) {
		return ((T (*)(ClanTime*, ClanTime*))(Il2CppBase() + 0x1598978))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ClanTime*))(Il2CppBase() + 0x15989B8))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ClanTime*))(Il2CppBase() + 0x1598A24))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ClanTime*, uintptr_t))(Il2CppBase() + 0x1598A88))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ClanTime*))(Il2CppBase() + 0x1598B0C))(this);
	}
	template <typename T = void> T MergeFrom(ClanTime* other) {
		return ((T (*)(ClanTime*, ClanTime*))(Il2CppBase() + 0x1598BC0))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ClanTime*, uintptr_t))(Il2CppBase() + 0x1598BE0))(this, input);
	}

};

}
