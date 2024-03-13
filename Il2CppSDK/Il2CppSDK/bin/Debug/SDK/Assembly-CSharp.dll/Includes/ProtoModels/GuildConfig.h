#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildConfig"));
	}

	template <typename T = MessageParser1GuildConfig*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& QuestCountPerDayFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& questCountPerDay_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& CreateCoinsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& createCoins_() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> static T& UpdateCoinsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& updateCoins_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& IncomeMinLevelFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& incomeMinLevel_() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> static T& MaxGuildSizeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& maxGuildSize_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& OffsetHFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& offsetH_() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> static T& CircleDurationHFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& circleDurationH_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& RestDurationHFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& restDurationH_() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> static T& ReverseOffsetHFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& reverseOffsetH_() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = MessageParser1GuildConfig*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x12EA840))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x12EA8A4))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(GuildConfig*))(Il2CppBase() + 0x12EA9C4))(this);
	}
	template <typename T = GuildConfig*> T Clone() {
		return ((T (*)(GuildConfig*))(Il2CppBase() + 0x12EAA9C))(this);
	}
	template <typename T = int32_t> T get_QuestCountPerDay() {
		return ((T (*)(GuildConfig*))(Il2CppBase() + 0x12EAAF8))(this);
	}
	template <typename T = void> T set_QuestCountPerDay(int32_t value) {
		return ((T (*)(GuildConfig*, int32_t))(Il2CppBase() + 0x12EAB00))(this, value);
	}
	template <typename T = int32_t> T get_CreateCoins() {
		return ((T (*)(GuildConfig*))(Il2CppBase() + 0x12EAB08))(this);
	}
	template <typename T = void> T set_CreateCoins(int32_t value) {
		return ((T (*)(GuildConfig*, int32_t))(Il2CppBase() + 0x12EAB10))(this, value);
	}
	template <typename T = int32_t> T get_UpdateCoins() {
		return ((T (*)(GuildConfig*))(Il2CppBase() + 0x12EAB18))(this);
	}
	template <typename T = void> T set_UpdateCoins(int32_t value) {
		return ((T (*)(GuildConfig*, int32_t))(Il2CppBase() + 0x12EAB20))(this, value);
	}
	template <typename T = int32_t> T get_IncomeMinLevel() {
		return ((T (*)(GuildConfig*))(Il2CppBase() + 0x12EAB28))(this);
	}
	template <typename T = void> T set_IncomeMinLevel(int32_t value) {
		return ((T (*)(GuildConfig*, int32_t))(Il2CppBase() + 0x12EAB30))(this, value);
	}
	template <typename T = int32_t> T get_MaxGuildSize() {
		return ((T (*)(GuildConfig*))(Il2CppBase() + 0x12EAB38))(this);
	}
	template <typename T = void> T set_MaxGuildSize(int32_t value) {
		return ((T (*)(GuildConfig*, int32_t))(Il2CppBase() + 0x12EAB40))(this, value);
	}
	template <typename T = int32_t> T get_OffsetH() {
		return ((T (*)(GuildConfig*))(Il2CppBase() + 0x12EAB48))(this);
	}
	template <typename T = void> T set_OffsetH(int32_t value) {
		return ((T (*)(GuildConfig*, int32_t))(Il2CppBase() + 0x12EAB50))(this, value);
	}
	template <typename T = int32_t> T get_CircleDurationH() {
		return ((T (*)(GuildConfig*))(Il2CppBase() + 0x12EAB58))(this);
	}
	template <typename T = void> T set_CircleDurationH(int32_t value) {
		return ((T (*)(GuildConfig*, int32_t))(Il2CppBase() + 0x12EAB60))(this, value);
	}
	template <typename T = int32_t> T get_RestDurationH() {
		return ((T (*)(GuildConfig*))(Il2CppBase() + 0x12EAB68))(this);
	}
	template <typename T = void> T set_RestDurationH(int32_t value) {
		return ((T (*)(GuildConfig*, int32_t))(Il2CppBase() + 0x12EAB70))(this, value);
	}
	template <typename T = int32_t> T get_ReverseOffsetH() {
		return ((T (*)(GuildConfig*))(Il2CppBase() + 0x12EAB78))(this);
	}
	template <typename T = void> T set_ReverseOffsetH(int32_t value) {
		return ((T (*)(GuildConfig*, int32_t))(Il2CppBase() + 0x12EAB80))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(GuildConfig*, Il2CppObject*))(Il2CppBase() + 0x12EAB88))(this, other);
	}
	template <typename T = bool> T Equals_1(GuildConfig* other) {
		return ((T (*)(GuildConfig*, GuildConfig*))(Il2CppBase() + 0x12EABF8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(GuildConfig*))(Il2CppBase() + 0x12EACA8))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(GuildConfig*))(Il2CppBase() + 0x12EADD8))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(GuildConfig*, uintptr_t))(Il2CppBase() + 0x12EAE3C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(GuildConfig*))(Il2CppBase() + 0x12EAFF4))(this);
	}
	template <typename T = void> T MergeFrom(GuildConfig* other) {
		return ((T (*)(GuildConfig*, GuildConfig*))(Il2CppBase() + 0x12EB254))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(GuildConfig*, uintptr_t))(Il2CppBase() + 0x12EB2C8))(this, input);
	}

};

}
