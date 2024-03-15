#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ClanTime
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ClanTime"));
	}

	 static MessageParser1<ProtoModels::ClanTime*>*& _parser() {
		return *(MessageParser1<ProtoModels::ClanTime*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ClanIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& clanID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& EndTimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& endTime_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1<ProtoModels::ClanTime*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ClanTime*>* (*)(void *))(Il2CppBase() + 0x159863C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x15986A0))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ClanTime*))(Il2CppBase() + 0x15987C0))(this);
	}
	template <typename R = ProtoModels::ClanTime*> R Clone() {
		return ((R (*)(ClanTime*))(Il2CppBase() + 0x1598860))(this);
	}
	template <typename R = int64_t> R get_ClanID() {
		return ((R (*)(ClanTime*))(Il2CppBase() + 0x15988BC))(this);
	}
	template <typename R = void> R set_ClanID(int64_t value) {
		return ((R (*)(ClanTime*, int64_t))(Il2CppBase() + 0x15988C4))(this, value);
	}
	template <typename R = int64_t> R get_EndTime() {
		return ((R (*)(ClanTime*))(Il2CppBase() + 0x15988CC))(this);
	}
	template <typename R = void> R set_EndTime(int64_t value) {
		return ((R (*)(ClanTime*, int64_t))(Il2CppBase() + 0x15988D4))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ClanTime*, Il2CppObject*))(Il2CppBase() + 0x15988DC))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ClanTime* other) {
		return ((R (*)(ClanTime*, ProtoModels::ClanTime*))(Il2CppBase() + 0x1598978))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ClanTime*))(Il2CppBase() + 0x15989B8))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ClanTime*))(Il2CppBase() + 0x1598A24))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ClanTime*, uintptr_t))(Il2CppBase() + 0x1598A88))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ClanTime*))(Il2CppBase() + 0x1598B0C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ClanTime* other) {
		return ((R (*)(ClanTime*, ProtoModels::ClanTime*))(Il2CppBase() + 0x1598BC0))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ClanTime*, uintptr_t))(Il2CppBase() + 0x1598BE0))(this, input);
	}

};

}
