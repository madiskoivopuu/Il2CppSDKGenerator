#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DiplomacyEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DiplomacyEntity"));
	}

	template <typename T = AcceptedComponent*> static T& acceptedComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = DiscardedComponent*> static T& discardedComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T get_isAccepted() {
		return ((T (*)(DiplomacyEntity*))(Il2CppBase() + 0x12FDFC0))(this);
	}
	template <typename T = void> T set_isAccepted(bool value) {
		return ((T (*)(DiplomacyEntity*, bool))(Il2CppBase() + 0x12FDFCC))(this, value);
	}
	template <typename T = DiplomacyComponent*> T get_diplomacy() {
		return ((T (*)(DiplomacyEntity*))(Il2CppBase() + 0x12FE0E8))(this);
	}
	template <typename T = bool> T get_hasDiplomacy() {
		return ((T (*)(DiplomacyEntity*))(Il2CppBase() + 0x12FE170))(this);
	}
	template <typename T = void> T AddDiplomacy(int64_t newId) {
		return ((T (*)(DiplomacyEntity*, int64_t))(Il2CppBase() + 0x12FDEB4))(this, newId);
	}
	template <typename T = void> T ReplaceDiplomacy(int64_t newId) {
		return ((T (*)(DiplomacyEntity*, int64_t))(Il2CppBase() + 0x12FE17C))(this, newId);
	}
	template <typename T = void> T RemoveDiplomacy() {
		return ((T (*)(DiplomacyEntity*))(Il2CppBase() + 0x12FE280))(this);
	}
	template <typename T = bool> T get_isDiscarded() {
		return ((T (*)(DiplomacyEntity*))(Il2CppBase() + 0x12FE28C))(this);
	}
	template <typename T = void> T set_isDiscarded(bool value) {
		return ((T (*)(DiplomacyEntity*, bool))(Il2CppBase() + 0x12FE298))(this, value);
	}
	template <typename T = FromClanComponent*> T get_fromClan() {
		return ((T (*)(DiplomacyEntity*))(Il2CppBase() + 0x12FE3B0))(this);
	}
	template <typename T = bool> T get_hasFromClan() {
		return ((T (*)(DiplomacyEntity*))(Il2CppBase() + 0x12FE438))(this);
	}
	template <typename T = void> T AddFromClan(int64_t newId) {
		return ((T (*)(DiplomacyEntity*, int64_t))(Il2CppBase() + 0x12FE444))(this, newId);
	}
	template <typename T = void> T ReplaceFromClan(int64_t newId) {
		return ((T (*)(DiplomacyEntity*, int64_t))(Il2CppBase() + 0x12FE548))(this, newId);
	}
	template <typename T = void> T RemoveFromClan() {
		return ((T (*)(DiplomacyEntity*))(Il2CppBase() + 0x12FE64C))(this);
	}
	template <typename T = PvPComponent*> T get_pvP() {
		return ((T (*)(DiplomacyEntity*))(Il2CppBase() + 0x12FE658))(this);
	}
	template <typename T = bool> T get_hasPvP() {
		return ((T (*)(DiplomacyEntity*))(Il2CppBase() + 0x12FE6E0))(this);
	}
	template <typename T = void> T AddPvP(int64_t newId) {
		return ((T (*)(DiplomacyEntity*, int64_t))(Il2CppBase() + 0x12FE6EC))(this, newId);
	}
	template <typename T = void> T ReplacePvP(int64_t newId) {
		return ((T (*)(DiplomacyEntity*, int64_t))(Il2CppBase() + 0x12FE7F0))(this, newId);
	}
	template <typename T = void> T RemovePvP() {
		return ((T (*)(DiplomacyEntity*))(Il2CppBase() + 0x12FE8F4))(this);
	}
	template <typename T = TickComponent*> T get_tick() {
		return ((T (*)(DiplomacyEntity*))(Il2CppBase() + 0x12FE900))(this);
	}
	template <typename T = bool> T get_hasTick() {
		return ((T (*)(DiplomacyEntity*))(Il2CppBase() + 0x12FE988))(this);
	}
	template <typename T = void> T AddTick(int64_t newValue) {
		return ((T (*)(DiplomacyEntity*, int64_t))(Il2CppBase() + 0x12FE994))(this, newValue);
	}
	template <typename T = void> T ReplaceTick(int64_t newValue) {
		return ((T (*)(DiplomacyEntity*, int64_t))(Il2CppBase() + 0x12FEA98))(this, newValue);
	}
	template <typename T = void> T RemoveTick() {
		return ((T (*)(DiplomacyEntity*))(Il2CppBase() + 0x12FEB9C))(this);
	}
	template <typename T = ToClanComponent*> T get_toClan() {
		return ((T (*)(DiplomacyEntity*))(Il2CppBase() + 0x12FEBA8))(this);
	}
	template <typename T = bool> T get_hasToClan() {
		return ((T (*)(DiplomacyEntity*))(Il2CppBase() + 0x12FEC30))(this);
	}
	template <typename T = void> T AddToClan(int64_t newId) {
		return ((T (*)(DiplomacyEntity*, int64_t))(Il2CppBase() + 0x12FEC3C))(this, newId);
	}
	template <typename T = void> T ReplaceToClan(int64_t newId) {
		return ((T (*)(DiplomacyEntity*, int64_t))(Il2CppBase() + 0x12FED40))(this, newId);
	}
	template <typename T = void> T RemoveToClan() {
		return ((T (*)(DiplomacyEntity*))(Il2CppBase() + 0x12FEE44))(this);
	}

};

