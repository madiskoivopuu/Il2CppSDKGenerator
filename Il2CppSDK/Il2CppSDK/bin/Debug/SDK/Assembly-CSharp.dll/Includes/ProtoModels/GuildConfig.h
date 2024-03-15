#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildConfig"));
	}

	 static MessageParser1<ProtoModels::GuildConfig*>*& _parser() {
		return *(MessageParser1<ProtoModels::GuildConfig*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& QuestCountPerDayFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& questCountPerDay_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& CreateCoinsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& createCoins_() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = int32_t> static R& UpdateCoinsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& updateCoins_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& IncomeMinLevelFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& incomeMinLevel_() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = int32_t> static R& MaxGuildSizeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& maxGuildSize_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& OffsetHFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& offsetH_() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = int32_t> static R& CircleDurationHFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& circleDurationH_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& RestDurationHFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& restDurationH_() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = int32_t> static R& ReverseOffsetHFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& reverseOffsetH_() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	 static MessageParser1<ProtoModels::GuildConfig*>* get_Parser() {
		return ((MessageParser1<ProtoModels::GuildConfig*>* (*)(void *))(Il2CppBase() + 0x12EA840))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x12EA8A4))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(GuildConfig*))(Il2CppBase() + 0x12EA9C4))(this);
	}
	template <typename R = ProtoModels::GuildConfig*> R Clone() {
		return ((R (*)(GuildConfig*))(Il2CppBase() + 0x12EAA9C))(this);
	}
	template <typename R = int32_t> R get_QuestCountPerDay() {
		return ((R (*)(GuildConfig*))(Il2CppBase() + 0x12EAAF8))(this);
	}
	template <typename R = void> R set_QuestCountPerDay(int32_t value) {
		return ((R (*)(GuildConfig*, int32_t))(Il2CppBase() + 0x12EAB00))(this, value);
	}
	template <typename R = int32_t> R get_CreateCoins() {
		return ((R (*)(GuildConfig*))(Il2CppBase() + 0x12EAB08))(this);
	}
	template <typename R = void> R set_CreateCoins(int32_t value) {
		return ((R (*)(GuildConfig*, int32_t))(Il2CppBase() + 0x12EAB10))(this, value);
	}
	template <typename R = int32_t> R get_UpdateCoins() {
		return ((R (*)(GuildConfig*))(Il2CppBase() + 0x12EAB18))(this);
	}
	template <typename R = void> R set_UpdateCoins(int32_t value) {
		return ((R (*)(GuildConfig*, int32_t))(Il2CppBase() + 0x12EAB20))(this, value);
	}
	template <typename R = int32_t> R get_IncomeMinLevel() {
		return ((R (*)(GuildConfig*))(Il2CppBase() + 0x12EAB28))(this);
	}
	template <typename R = void> R set_IncomeMinLevel(int32_t value) {
		return ((R (*)(GuildConfig*, int32_t))(Il2CppBase() + 0x12EAB30))(this, value);
	}
	template <typename R = int32_t> R get_MaxGuildSize() {
		return ((R (*)(GuildConfig*))(Il2CppBase() + 0x12EAB38))(this);
	}
	template <typename R = void> R set_MaxGuildSize(int32_t value) {
		return ((R (*)(GuildConfig*, int32_t))(Il2CppBase() + 0x12EAB40))(this, value);
	}
	template <typename R = int32_t> R get_OffsetH() {
		return ((R (*)(GuildConfig*))(Il2CppBase() + 0x12EAB48))(this);
	}
	template <typename R = void> R set_OffsetH(int32_t value) {
		return ((R (*)(GuildConfig*, int32_t))(Il2CppBase() + 0x12EAB50))(this, value);
	}
	template <typename R = int32_t> R get_CircleDurationH() {
		return ((R (*)(GuildConfig*))(Il2CppBase() + 0x12EAB58))(this);
	}
	template <typename R = void> R set_CircleDurationH(int32_t value) {
		return ((R (*)(GuildConfig*, int32_t))(Il2CppBase() + 0x12EAB60))(this, value);
	}
	template <typename R = int32_t> R get_RestDurationH() {
		return ((R (*)(GuildConfig*))(Il2CppBase() + 0x12EAB68))(this);
	}
	template <typename R = void> R set_RestDurationH(int32_t value) {
		return ((R (*)(GuildConfig*, int32_t))(Il2CppBase() + 0x12EAB70))(this, value);
	}
	template <typename R = int32_t> R get_ReverseOffsetH() {
		return ((R (*)(GuildConfig*))(Il2CppBase() + 0x12EAB78))(this);
	}
	template <typename R = void> R set_ReverseOffsetH(int32_t value) {
		return ((R (*)(GuildConfig*, int32_t))(Il2CppBase() + 0x12EAB80))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(GuildConfig*, Il2CppObject*))(Il2CppBase() + 0x12EAB88))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::GuildConfig* other) {
		return ((R (*)(GuildConfig*, ProtoModels::GuildConfig*))(Il2CppBase() + 0x12EABF8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(GuildConfig*))(Il2CppBase() + 0x12EACA8))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(GuildConfig*))(Il2CppBase() + 0x12EADD8))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(GuildConfig*, uintptr_t))(Il2CppBase() + 0x12EAE3C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(GuildConfig*))(Il2CppBase() + 0x12EAFF4))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::GuildConfig* other) {
		return ((R (*)(GuildConfig*, ProtoModels::GuildConfig*))(Il2CppBase() + 0x12EB254))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(GuildConfig*, uintptr_t))(Il2CppBase() + 0x12EB2C8))(this, input);
	}

};

}
