#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildConfiguration"));
	}

	template <typename T = int32_t> T& QuestCountPerDay() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& CreateCoins() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& UpdateCoins() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& IncomeMinLevel() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& MaxGuildSize() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& OffsetH() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& CircleDurationH() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& RestDurationH() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& ReverseOffsetH() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = int32_t> T get_QuestCountPerDay() {
		return ((T (*)(GuildConfiguration*))(Il2CppBase() + 0x12EB544))(this);
	}
	template <typename T = void> T set_QuestCountPerDay(int32_t value) {
		return ((T (*)(GuildConfiguration*, int32_t))(Il2CppBase() + 0x12EB54C))(this, value);
	}
	template <typename T = int32_t> T get_CreateCoins() {
		return ((T (*)(GuildConfiguration*))(Il2CppBase() + 0x12EB554))(this);
	}
	template <typename T = void> T set_CreateCoins(int32_t value) {
		return ((T (*)(GuildConfiguration*, int32_t))(Il2CppBase() + 0x12EB55C))(this, value);
	}
	template <typename T = int32_t> T get_UpdateCoins() {
		return ((T (*)(GuildConfiguration*))(Il2CppBase() + 0x12EB564))(this);
	}
	template <typename T = void> T set_UpdateCoins(int32_t value) {
		return ((T (*)(GuildConfiguration*, int32_t))(Il2CppBase() + 0x12EB56C))(this, value);
	}
	template <typename T = int32_t> T get_IncomeMinLevel() {
		return ((T (*)(GuildConfiguration*))(Il2CppBase() + 0x12EB574))(this);
	}
	template <typename T = void> T set_IncomeMinLevel(int32_t value) {
		return ((T (*)(GuildConfiguration*, int32_t))(Il2CppBase() + 0x12EB57C))(this, value);
	}
	template <typename T = int32_t> T get_MaxGuildSize() {
		return ((T (*)(GuildConfiguration*))(Il2CppBase() + 0x12EB584))(this);
	}
	template <typename T = void> T set_MaxGuildSize(int32_t value) {
		return ((T (*)(GuildConfiguration*, int32_t))(Il2CppBase() + 0x12EB58C))(this, value);
	}
	template <typename T = int32_t> T get_OffsetH() {
		return ((T (*)(GuildConfiguration*))(Il2CppBase() + 0x12EB594))(this);
	}
	template <typename T = void> T set_OffsetH(int32_t value) {
		return ((T (*)(GuildConfiguration*, int32_t))(Il2CppBase() + 0x12EB59C))(this, value);
	}
	template <typename T = int32_t> T get_CircleDurationH() {
		return ((T (*)(GuildConfiguration*))(Il2CppBase() + 0x12EB5A4))(this);
	}
	template <typename T = void> T set_CircleDurationH(int32_t value) {
		return ((T (*)(GuildConfiguration*, int32_t))(Il2CppBase() + 0x12EB5AC))(this, value);
	}
	template <typename T = int32_t> T get_RestDurationH() {
		return ((T (*)(GuildConfiguration*))(Il2CppBase() + 0x12EB5B4))(this);
	}
	template <typename T = void> T set_RestDurationH(int32_t value) {
		return ((T (*)(GuildConfiguration*, int32_t))(Il2CppBase() + 0x12EB5BC))(this, value);
	}
	template <typename T = int32_t> T get_ReverseOffsetH() {
		return ((T (*)(GuildConfiguration*))(Il2CppBase() + 0x12EB5C4))(this);
	}
	template <typename T = void> T set_ReverseOffsetH(int32_t value) {
		return ((T (*)(GuildConfiguration*, int32_t))(Il2CppBase() + 0x12EB5CC))(this, value);
	}

};

