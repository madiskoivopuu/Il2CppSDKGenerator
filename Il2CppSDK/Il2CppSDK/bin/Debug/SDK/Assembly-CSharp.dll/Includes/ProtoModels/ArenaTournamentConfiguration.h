#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaTournamentConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaTournamentConfiguration"));
	}

	 static MessageParser1ProtoModels::ArenaTournamentConfiguration*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaTournamentConfiguration*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& MinPlayerLevelFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& minPlayerLevel_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& SearchingTimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& searchingTime_() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = int32_t> static R& ActiveTimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& activeTime_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& TourneysPerDayLimitFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& tourneysPerDayLimit_() {
		return *(R*)((uintptr_t)this + 0x1C);
	}

	 static MessageParser1ProtoModels::ArenaTournamentConfiguration*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaTournamentConfiguration*>* (*)(void *))(Il2CppBase() + 0xF4556C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0xF455D0))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaTournamentConfiguration*))(Il2CppBase() + 0xF456F0))(this);
	}
	template <typename R = ProtoModels::ArenaTournamentConfiguration*> R Clone() {
		return ((R (*)(ArenaTournamentConfiguration*))(Il2CppBase() + 0xF457A0))(this);
	}
	template <typename R = int32_t> R get_MinPlayerLevel() {
		return ((R (*)(ArenaTournamentConfiguration*))(Il2CppBase() + 0xF457FC))(this);
	}
	template <typename R = void> R set_MinPlayerLevel(int32_t value) {
		return ((R (*)(ArenaTournamentConfiguration*, int32_t))(Il2CppBase() + 0xF45804))(this, value);
	}
	template <typename R = int32_t> R get_SearchingTime() {
		return ((R (*)(ArenaTournamentConfiguration*))(Il2CppBase() + 0xF4580C))(this);
	}
	template <typename R = void> R set_SearchingTime(int32_t value) {
		return ((R (*)(ArenaTournamentConfiguration*, int32_t))(Il2CppBase() + 0xF45814))(this, value);
	}
	template <typename R = int32_t> R get_ActiveTime() {
		return ((R (*)(ArenaTournamentConfiguration*))(Il2CppBase() + 0xF4581C))(this);
	}
	template <typename R = void> R set_ActiveTime(int32_t value) {
		return ((R (*)(ArenaTournamentConfiguration*, int32_t))(Il2CppBase() + 0xF45824))(this, value);
	}
	template <typename R = int32_t> R get_TourneysPerDayLimit() {
		return ((R (*)(ArenaTournamentConfiguration*))(Il2CppBase() + 0xF4582C))(this);
	}
	template <typename R = void> R set_TourneysPerDayLimit(int32_t value) {
		return ((R (*)(ArenaTournamentConfiguration*, int32_t))(Il2CppBase() + 0xF45834))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaTournamentConfiguration*, Il2CppObject*))(Il2CppBase() + 0xF4583C))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaTournamentConfiguration* other) {
		return ((R (*)(ArenaTournamentConfiguration*, ProtoModels::ArenaTournamentConfiguration*))(Il2CppBase() + 0xF458AC))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaTournamentConfiguration*))(Il2CppBase() + 0xF4590C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaTournamentConfiguration*))(Il2CppBase() + 0xF459B0))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaTournamentConfiguration*, uintptr_t))(Il2CppBase() + 0xF45A14))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaTournamentConfiguration*))(Il2CppBase() + 0xF45AF0))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaTournamentConfiguration* other) {
		return ((R (*)(ArenaTournamentConfiguration*, ProtoModels::ArenaTournamentConfiguration*))(Il2CppBase() + 0xF45C24))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaTournamentConfiguration*, uintptr_t))(Il2CppBase() + 0xF45C5C))(this, input);
	}

};

}
