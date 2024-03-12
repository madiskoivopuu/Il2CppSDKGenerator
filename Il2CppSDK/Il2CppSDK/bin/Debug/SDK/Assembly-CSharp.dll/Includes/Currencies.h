#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Currencies
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Currencies"));
	}

	template <typename T = int32_t> T& Coins() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& Tickets() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& Silver() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& Influence() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& GiantReputation() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& ExtraLevelCap() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& GuildCoins() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& SeasonPoints() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& PortalsPoints() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& VIPPoints() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& CashbackCoins() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& EventBpPointsA() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& EventBpPointsB() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& EventBpPointsC() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& GuildBossCoins() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& AlvesWavesBadgesT1() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& AlvesWavesBadgesT2() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& AlvesWavesBadgesT3() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& AlvesBpPoints() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& SaviorPoints() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& CyclicYmirSoul() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& CyclicPremiumTokens() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& CyclicPoints() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = int32_t> T get_Item(uintptr_t currencyType) {
		return ((T (*)(Currencies*, uintptr_t))(Il2CppBase() + 0x1BCDC44))(this, currencyType);
	}
	template <typename T = void> T set_Item(uintptr_t currencyType, int32_t value) {
		return ((T (*)(Currencies*, uintptr_t, int32_t))(Il2CppBase() + 0x1BCDD20))(this, currencyType, value);
	}
	template <typename T = int32_t> T TotalCount() {
		return ((T (*)(Currencies*))(Il2CppBase() + 0x1BCDDF4))(this);
	}
	template <typename T = int32_t> T ForPurchaseCount() {
		return ((T (*)(Currencies*))(Il2CppBase() + 0x1BCDE38))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(Currencies*, uintptr_t))(Il2CppBase() + 0x1BCDE54))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t obj) {
		return ((T (*)(Currencies*, uintptr_t))(Il2CppBase() + 0x1BCDFD0))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Currencies*))(Il2CppBase() + 0x1BCE06C))(this);
	}
	template <typename T = bool> static T op_Equality(uintptr_t c1, uintptr_t c2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1BCE108))(0, c1, c2);
	}
	template <typename T = bool> static T op_Inequality(uintptr_t c1, uintptr_t c2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1BCE148))(0, c1, c2);
	}
	template <typename T = uintptr_t> static T op_Subtraction(uintptr_t c1, uintptr_t c2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1BCE18C))(0, c1, c2);
	}
	template <typename T = uintptr_t> static T op_Addition(uintptr_t c1, uintptr_t c2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1BCE1EC))(0, c1, c2);
	}
	template <typename T = uintptr_t> static T op_Multiply(uintptr_t c, int32_t i) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x1BCE24C))(0, c, i);
	}

};

}
