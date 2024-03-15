#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildConfiguration"));
	}

	template <typename R = int32_t> R& QuestCountPerDay() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& CreateCoins() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = int32_t> R& UpdateCoins() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> R& IncomeMinLevel() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = int32_t> R& MaxGuildSize() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> R& OffsetH() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = int32_t> R& CircleDurationH() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> R& RestDurationH() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = int32_t> R& ReverseOffsetH() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = int32_t> R get_QuestCountPerDay() {
		return ((R (*)(GuildConfiguration*))(Il2CppBase() + 0x12EB544))(this);
	}
	template <typename R = void> R set_QuestCountPerDay(int32_t value) {
		return ((R (*)(GuildConfiguration*, int32_t))(Il2CppBase() + 0x12EB54C))(this, value);
	}
	template <typename R = int32_t> R get_CreateCoins() {
		return ((R (*)(GuildConfiguration*))(Il2CppBase() + 0x12EB554))(this);
	}
	template <typename R = void> R set_CreateCoins(int32_t value) {
		return ((R (*)(GuildConfiguration*, int32_t))(Il2CppBase() + 0x12EB55C))(this, value);
	}
	template <typename R = int32_t> R get_UpdateCoins() {
		return ((R (*)(GuildConfiguration*))(Il2CppBase() + 0x12EB564))(this);
	}
	template <typename R = void> R set_UpdateCoins(int32_t value) {
		return ((R (*)(GuildConfiguration*, int32_t))(Il2CppBase() + 0x12EB56C))(this, value);
	}
	template <typename R = int32_t> R get_IncomeMinLevel() {
		return ((R (*)(GuildConfiguration*))(Il2CppBase() + 0x12EB574))(this);
	}
	template <typename R = void> R set_IncomeMinLevel(int32_t value) {
		return ((R (*)(GuildConfiguration*, int32_t))(Il2CppBase() + 0x12EB57C))(this, value);
	}
	template <typename R = int32_t> R get_MaxGuildSize() {
		return ((R (*)(GuildConfiguration*))(Il2CppBase() + 0x12EB584))(this);
	}
	template <typename R = void> R set_MaxGuildSize(int32_t value) {
		return ((R (*)(GuildConfiguration*, int32_t))(Il2CppBase() + 0x12EB58C))(this, value);
	}
	template <typename R = int32_t> R get_OffsetH() {
		return ((R (*)(GuildConfiguration*))(Il2CppBase() + 0x12EB594))(this);
	}
	template <typename R = void> R set_OffsetH(int32_t value) {
		return ((R (*)(GuildConfiguration*, int32_t))(Il2CppBase() + 0x12EB59C))(this, value);
	}
	template <typename R = int32_t> R get_CircleDurationH() {
		return ((R (*)(GuildConfiguration*))(Il2CppBase() + 0x12EB5A4))(this);
	}
	template <typename R = void> R set_CircleDurationH(int32_t value) {
		return ((R (*)(GuildConfiguration*, int32_t))(Il2CppBase() + 0x12EB5AC))(this, value);
	}
	template <typename R = int32_t> R get_RestDurationH() {
		return ((R (*)(GuildConfiguration*))(Il2CppBase() + 0x12EB5B4))(this);
	}
	template <typename R = void> R set_RestDurationH(int32_t value) {
		return ((R (*)(GuildConfiguration*, int32_t))(Il2CppBase() + 0x12EB5BC))(this, value);
	}
	template <typename R = int32_t> R get_ReverseOffsetH() {
		return ((R (*)(GuildConfiguration*))(Il2CppBase() + 0x12EB5C4))(this);
	}
	template <typename R = void> R set_ReverseOffsetH(int32_t value) {
		return ((R (*)(GuildConfiguration*, int32_t))(Il2CppBase() + 0x12EB5CC))(this, value);
	}

};

