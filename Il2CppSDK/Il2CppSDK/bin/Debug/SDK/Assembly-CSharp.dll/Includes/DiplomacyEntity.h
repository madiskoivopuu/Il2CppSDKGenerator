#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DiplomacyEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DiplomacyEntity"));
	}

	template <typename R = AcceptedComponent*> static R& acceptedComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = DiscardedComponent*> static R& discardedComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename R = bool> R get_isAccepted() {
		return ((R (*)(DiplomacyEntity*))(Il2CppBase() + 0x12FDFC0))(this);
	}
	template <typename R = void> R set_isAccepted(bool value) {
		return ((R (*)(DiplomacyEntity*, bool))(Il2CppBase() + 0x12FDFCC))(this, value);
	}
	template <typename R = DiplomacyComponent*> R get_diplomacy() {
		return ((R (*)(DiplomacyEntity*))(Il2CppBase() + 0x12FE0E8))(this);
	}
	template <typename R = bool> R get_hasDiplomacy() {
		return ((R (*)(DiplomacyEntity*))(Il2CppBase() + 0x12FE170))(this);
	}
	template <typename R = void> R AddDiplomacy(int64_t newId) {
		return ((R (*)(DiplomacyEntity*, int64_t))(Il2CppBase() + 0x12FDEB4))(this, newId);
	}
	template <typename R = void> R ReplaceDiplomacy(int64_t newId) {
		return ((R (*)(DiplomacyEntity*, int64_t))(Il2CppBase() + 0x12FE17C))(this, newId);
	}
	template <typename R = void> R RemoveDiplomacy() {
		return ((R (*)(DiplomacyEntity*))(Il2CppBase() + 0x12FE280))(this);
	}
	template <typename R = bool> R get_isDiscarded() {
		return ((R (*)(DiplomacyEntity*))(Il2CppBase() + 0x12FE28C))(this);
	}
	template <typename R = void> R set_isDiscarded(bool value) {
		return ((R (*)(DiplomacyEntity*, bool))(Il2CppBase() + 0x12FE298))(this, value);
	}
	template <typename R = FromClanComponent*> R get_fromClan() {
		return ((R (*)(DiplomacyEntity*))(Il2CppBase() + 0x12FE3B0))(this);
	}
	template <typename R = bool> R get_hasFromClan() {
		return ((R (*)(DiplomacyEntity*))(Il2CppBase() + 0x12FE438))(this);
	}
	template <typename R = void> R AddFromClan(int64_t newId) {
		return ((R (*)(DiplomacyEntity*, int64_t))(Il2CppBase() + 0x12FE444))(this, newId);
	}
	template <typename R = void> R ReplaceFromClan(int64_t newId) {
		return ((R (*)(DiplomacyEntity*, int64_t))(Il2CppBase() + 0x12FE548))(this, newId);
	}
	template <typename R = void> R RemoveFromClan() {
		return ((R (*)(DiplomacyEntity*))(Il2CppBase() + 0x12FE64C))(this);
	}
	template <typename R = PvPComponent*> R get_pvP() {
		return ((R (*)(DiplomacyEntity*))(Il2CppBase() + 0x12FE658))(this);
	}
	template <typename R = bool> R get_hasPvP() {
		return ((R (*)(DiplomacyEntity*))(Il2CppBase() + 0x12FE6E0))(this);
	}
	template <typename R = void> R AddPvP(int64_t newId) {
		return ((R (*)(DiplomacyEntity*, int64_t))(Il2CppBase() + 0x12FE6EC))(this, newId);
	}
	template <typename R = void> R ReplacePvP(int64_t newId) {
		return ((R (*)(DiplomacyEntity*, int64_t))(Il2CppBase() + 0x12FE7F0))(this, newId);
	}
	template <typename R = void> R RemovePvP() {
		return ((R (*)(DiplomacyEntity*))(Il2CppBase() + 0x12FE8F4))(this);
	}
	template <typename R = TickComponent*> R get_tick() {
		return ((R (*)(DiplomacyEntity*))(Il2CppBase() + 0x12FE900))(this);
	}
	template <typename R = bool> R get_hasTick() {
		return ((R (*)(DiplomacyEntity*))(Il2CppBase() + 0x12FE988))(this);
	}
	template <typename R = void> R AddTick(int64_t newValue) {
		return ((R (*)(DiplomacyEntity*, int64_t))(Il2CppBase() + 0x12FE994))(this, newValue);
	}
	template <typename R = void> R ReplaceTick(int64_t newValue) {
		return ((R (*)(DiplomacyEntity*, int64_t))(Il2CppBase() + 0x12FEA98))(this, newValue);
	}
	template <typename R = void> R RemoveTick() {
		return ((R (*)(DiplomacyEntity*))(Il2CppBase() + 0x12FEB9C))(this);
	}
	template <typename R = ToClanComponent*> R get_toClan() {
		return ((R (*)(DiplomacyEntity*))(Il2CppBase() + 0x12FEBA8))(this);
	}
	template <typename R = bool> R get_hasToClan() {
		return ((R (*)(DiplomacyEntity*))(Il2CppBase() + 0x12FEC30))(this);
	}
	template <typename R = void> R AddToClan(int64_t newId) {
		return ((R (*)(DiplomacyEntity*, int64_t))(Il2CppBase() + 0x12FEC3C))(this, newId);
	}
	template <typename R = void> R ReplaceToClan(int64_t newId) {
		return ((R (*)(DiplomacyEntity*, int64_t))(Il2CppBase() + 0x12FED40))(this, newId);
	}
	template <typename R = void> R RemoveToClan() {
		return ((R (*)(DiplomacyEntity*))(Il2CppBase() + 0x12FEE44))(this);
	}

};

