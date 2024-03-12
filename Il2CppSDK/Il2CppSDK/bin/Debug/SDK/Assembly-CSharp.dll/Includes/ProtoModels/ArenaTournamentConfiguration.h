#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaTournamentConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaTournamentConfiguration"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MinPlayerLevelFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& minPlayerLevel_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& SearchingTimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& searchingTime_() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> static T& ActiveTimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& activeTime_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& TourneysPerDayLimitFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& tourneysPerDayLimit_() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0xF4556C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0xF455D0))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaTournamentConfiguration*))(Il2CppBase() + 0xF456F0))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaTournamentConfiguration*))(Il2CppBase() + 0xF457A0))(this);
	}
	template <typename T = int32_t> T get_MinPlayerLevel() {
		return ((T (*)(ArenaTournamentConfiguration*))(Il2CppBase() + 0xF457FC))(this);
	}
	template <typename T = void> T set_MinPlayerLevel(int32_t value) {
		return ((T (*)(ArenaTournamentConfiguration*, int32_t))(Il2CppBase() + 0xF45804))(this, value);
	}
	template <typename T = int32_t> T get_SearchingTime() {
		return ((T (*)(ArenaTournamentConfiguration*))(Il2CppBase() + 0xF4580C))(this);
	}
	template <typename T = void> T set_SearchingTime(int32_t value) {
		return ((T (*)(ArenaTournamentConfiguration*, int32_t))(Il2CppBase() + 0xF45814))(this, value);
	}
	template <typename T = int32_t> T get_ActiveTime() {
		return ((T (*)(ArenaTournamentConfiguration*))(Il2CppBase() + 0xF4581C))(this);
	}
	template <typename T = void> T set_ActiveTime(int32_t value) {
		return ((T (*)(ArenaTournamentConfiguration*, int32_t))(Il2CppBase() + 0xF45824))(this, value);
	}
	template <typename T = int32_t> T get_TourneysPerDayLimit() {
		return ((T (*)(ArenaTournamentConfiguration*))(Il2CppBase() + 0xF4582C))(this);
	}
	template <typename T = void> T set_TourneysPerDayLimit(int32_t value) {
		return ((T (*)(ArenaTournamentConfiguration*, int32_t))(Il2CppBase() + 0xF45834))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaTournamentConfiguration*, uintptr_t))(Il2CppBase() + 0xF4583C))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaTournamentConfiguration*, uintptr_t))(Il2CppBase() + 0xF458AC))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaTournamentConfiguration*))(Il2CppBase() + 0xF4590C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaTournamentConfiguration*))(Il2CppBase() + 0xF459B0))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaTournamentConfiguration*, uintptr_t))(Il2CppBase() + 0xF45A14))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaTournamentConfiguration*))(Il2CppBase() + 0xF45AF0))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaTournamentConfiguration*, uintptr_t))(Il2CppBase() + 0xF45C24))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaTournamentConfiguration*, uintptr_t))(Il2CppBase() + 0xF45C5C))(this, input);
	}

};

}
