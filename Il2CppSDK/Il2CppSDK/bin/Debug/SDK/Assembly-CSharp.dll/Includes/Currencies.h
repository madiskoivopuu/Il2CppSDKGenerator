#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Currencies
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Currencies"));
	}

	template <typename R = int32_t> R& Coins() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& Tickets() {
		return *(R*)((uintptr_t)this + 0x4);
	}
	template <typename R = int32_t> R& Silver() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = int32_t> R& Influence() {
		return *(R*)((uintptr_t)this + 0xC);
	}
	template <typename R = int32_t> R& GiantReputation() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& ExtraLevelCap() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = int32_t> R& GuildCoins() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> R& SeasonPoints() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = int32_t> R& PortalsPoints() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> R& VIPPoints() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = int32_t> R& CashbackCoins() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> R& EventBpPointsA() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = int32_t> R& EventBpPointsB() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> R& EventBpPointsC() {
		return *(R*)((uintptr_t)this + 0x34);
	}
	template <typename R = int32_t> R& GuildBossCoins() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> R& AlvesWavesBadgesT1() {
		return *(R*)((uintptr_t)this + 0x3C);
	}
	template <typename R = int32_t> R& AlvesWavesBadgesT2() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> R& AlvesWavesBadgesT3() {
		return *(R*)((uintptr_t)this + 0x44);
	}
	template <typename R = int32_t> R& AlvesBpPoints() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> R& SaviorPoints() {
		return *(R*)((uintptr_t)this + 0x4C);
	}
	template <typename R = int32_t> R& CyclicYmirSoul() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = int32_t> R& CyclicPremiumTokens() {
		return *(R*)((uintptr_t)this + 0x54);
	}
	template <typename R = int32_t> R& CyclicPoints() {
		return *(R*)((uintptr_t)this + 0x58);
	}

	template <typename R = int32_t> R get_Item(CurrencyType* currencyType) {
		return ((R (*)(Currencies*, CurrencyType*))(Il2CppBase() + 0x1BCDC44))(this, currencyType);
	}
	template <typename R = void> R set_Item(CurrencyType* currencyType, int32_t value) {
		return ((R (*)(Currencies*, CurrencyType*, int32_t))(Il2CppBase() + 0x1BCDD20))(this, currencyType, value);
	}
	template <typename R = int32_t> R TotalCount() {
		return ((R (*)(Currencies*))(Il2CppBase() + 0x1BCDDF4))(this);
	}
	template <typename R = int32_t> R ForPurchaseCount() {
		return ((R (*)(Currencies*))(Il2CppBase() + 0x1BCDE38))(this);
	}
	template <typename R = bool> R Equals(Currencies* other) {
		return ((R (*)(Currencies*, Currencies*))(Il2CppBase() + 0x1BCDE54))(this, other);
	}
	template <typename R = bool> R Equals_1(Il2CppObject* obj) {
		return ((R (*)(Currencies*, Il2CppObject*))(Il2CppBase() + 0x1BCDFD0))(this, obj);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(Currencies*))(Il2CppBase() + 0x1BCE06C))(this);
	}
	template <typename R = bool> static R op_Equality(Currencies* c1, Currencies* c2) {
		return ((R (*)(void *, Currencies*, Currencies*))(Il2CppBase() + 0x1BCE108))(0, c1, c2);
	}
	template <typename R = bool> static R op_Inequality(Currencies* c1, Currencies* c2) {
		return ((R (*)(void *, Currencies*, Currencies*))(Il2CppBase() + 0x1BCE148))(0, c1, c2);
	}
	template <typename R = Currencies*> static R op_Subtraction(Currencies* c1, Currencies* c2) {
		return ((R (*)(void *, Currencies*, Currencies*))(Il2CppBase() + 0x1BCE18C))(0, c1, c2);
	}
	template <typename R = Currencies*> static R op_Addition(Currencies* c1, Currencies* c2) {
		return ((R (*)(void *, Currencies*, Currencies*))(Il2CppBase() + 0x1BCE1EC))(0, c1, c2);
	}
	template <typename R = Currencies*> static R op_Multiply(Currencies* c, int32_t i) {
		return ((R (*)(void *, Currencies*, int32_t))(Il2CppBase() + 0x1BCE24C))(0, c, i);
	}

};

