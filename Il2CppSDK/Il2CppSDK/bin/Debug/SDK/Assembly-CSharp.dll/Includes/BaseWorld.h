#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseWorld
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseWorld"));
	}

	template <typename T = int64_t> T& WorldId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& WorldName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& accounts() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& locations() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& news() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& mail() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& store2() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& transactions() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& lobby() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& storeCategories() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& storeSales() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& vip() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& vipData() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& Systems() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& Logger() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& TimeManager() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& RandomManager() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& IdManager() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = int64_t> T get_WorldId() {
		return ((T (*)(BaseWorld*))(Il2CppBase() + 0x16711C4))(this);
	}
	template <typename T = void> T set_WorldId(int64_t value) {
		return ((T (*)(BaseWorld*, int64_t))(Il2CppBase() + 0x16711CC))(this, value);
	}
	template <typename T = Il2CppString*> T get_WorldName() {
		return ((T (*)(BaseWorld*))(Il2CppBase() + 0x16711D4))(this);
	}
	template <typename T = void> T set_WorldName(Il2CppString* value) {
		return ((T (*)(BaseWorld*, Il2CppString*))(Il2CppBase() + 0x16711DC))(this, value);
	}
	template <typename T = uintptr_t> T get_accounts() {
		return ((T (*)(BaseWorld*))(Il2CppBase() + 0x16711E4))(this);
	}
	template <typename T = void> T set_accounts(uintptr_t value) {
		return ((T (*)(BaseWorld*, uintptr_t))(Il2CppBase() + 0x16711EC))(this, value);
	}
	template <typename T = uintptr_t> T get_locations() {
		return ((T (*)(BaseWorld*))(Il2CppBase() + 0x16711F4))(this);
	}
	template <typename T = void> T set_locations(uintptr_t value) {
		return ((T (*)(BaseWorld*, uintptr_t))(Il2CppBase() + 0x16711FC))(this, value);
	}
	template <typename T = uintptr_t> T get_news() {
		return ((T (*)(BaseWorld*))(Il2CppBase() + 0x1671204))(this);
	}
	template <typename T = void> T set_news(uintptr_t value) {
		return ((T (*)(BaseWorld*, uintptr_t))(Il2CppBase() + 0x167120C))(this, value);
	}
	template <typename T = uintptr_t> T get_mail() {
		return ((T (*)(BaseWorld*))(Il2CppBase() + 0x1671214))(this);
	}
	template <typename T = void> T set_mail(uintptr_t value) {
		return ((T (*)(BaseWorld*, uintptr_t))(Il2CppBase() + 0x167121C))(this, value);
	}
	template <typename T = uintptr_t> T get_store2() {
		return ((T (*)(BaseWorld*))(Il2CppBase() + 0x1671224))(this);
	}
	template <typename T = void> T set_store2(uintptr_t value) {
		return ((T (*)(BaseWorld*, uintptr_t))(Il2CppBase() + 0x167122C))(this, value);
	}
	template <typename T = uintptr_t> T get_transactions() {
		return ((T (*)(BaseWorld*))(Il2CppBase() + 0x1671234))(this);
	}
	template <typename T = void> T set_transactions(uintptr_t value) {
		return ((T (*)(BaseWorld*, uintptr_t))(Il2CppBase() + 0x167123C))(this, value);
	}
	template <typename T = uintptr_t> T get_lobby() {
		return ((T (*)(BaseWorld*))(Il2CppBase() + 0x1671244))(this);
	}
	template <typename T = void> T set_lobby(uintptr_t value) {
		return ((T (*)(BaseWorld*, uintptr_t))(Il2CppBase() + 0x167124C))(this, value);
	}
	template <typename T = uintptr_t> T get_storeCategories() {
		return ((T (*)(BaseWorld*))(Il2CppBase() + 0x1671254))(this);
	}
	template <typename T = void> T set_storeCategories(uintptr_t value) {
		return ((T (*)(BaseWorld*, uintptr_t))(Il2CppBase() + 0x167125C))(this, value);
	}
	template <typename T = uintptr_t> T get_storeSales() {
		return ((T (*)(BaseWorld*))(Il2CppBase() + 0x1671264))(this);
	}
	template <typename T = void> T set_storeSales(uintptr_t value) {
		return ((T (*)(BaseWorld*, uintptr_t))(Il2CppBase() + 0x167126C))(this, value);
	}
	template <typename T = uintptr_t> T get_vip() {
		return ((T (*)(BaseWorld*))(Il2CppBase() + 0x1671274))(this);
	}
	template <typename T = void> T set_vip(uintptr_t value) {
		return ((T (*)(BaseWorld*, uintptr_t))(Il2CppBase() + 0x167127C))(this, value);
	}
	template <typename T = uintptr_t> T get_vipData() {
		return ((T (*)(BaseWorld*))(Il2CppBase() + 0x1671284))(this);
	}
	template <typename T = void> T set_vipData(uintptr_t value) {
		return ((T (*)(BaseWorld*, uintptr_t))(Il2CppBase() + 0x167128C))(this, value);
	}
	template <typename T = uintptr_t> T get_players() {
		return ((T (*)(BaseWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_clans() {
		return ((T (*)(BaseWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_guilds() {
		return ((T (*)(BaseWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_guildQuests() {
		return ((T (*)(BaseWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_pvps() {
		return ((T (*)(BaseWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_invites() {
		return ((T (*)(BaseWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_guildInvites() {
		return ((T (*)(BaseWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_diplomacies() {
		return ((T (*)(BaseWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_tournaments() {
		return ((T (*)(BaseWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_store2Data() {
		return ((T (*)(BaseWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_allContexts() {
		return ((T (*)(BaseWorld*))(Il2CppBase() + 0x1671294))(this);
	}
	template <typename T = uintptr_t> T get_Systems() {
		return ((T (*)(BaseWorld*))(Il2CppBase() + 0x1671578))(this);
	}
	template <typename T = void> T set_Systems(uintptr_t value) {
		return ((T (*)(BaseWorld*, uintptr_t))(Il2CppBase() + 0x1671580))(this, value);
	}
	template <typename T = uintptr_t> T get_Logger() {
		return ((T (*)(BaseWorld*))(Il2CppBase() + 0x1671588))(this);
	}
	template <typename T = void> T set_Logger(uintptr_t value) {
		return ((T (*)(BaseWorld*, uintptr_t))(Il2CppBase() + 0x1671590))(this, value);
	}
	template <typename T = uintptr_t> T get_TimeManager() {
		return ((T (*)(BaseWorld*))(Il2CppBase() + 0x1671598))(this);
	}
	template <typename T = void> T set_TimeManager(uintptr_t value) {
		return ((T (*)(BaseWorld*, uintptr_t))(Il2CppBase() + 0x16715A0))(this, value);
	}
	template <typename T = uintptr_t> T get_RandomManager() {
		return ((T (*)(BaseWorld*))(Il2CppBase() + 0x16715A8))(this);
	}
	template <typename T = void> T set_RandomManager(uintptr_t value) {
		return ((T (*)(BaseWorld*, uintptr_t))(Il2CppBase() + 0x16715B0))(this, value);
	}
	template <typename T = uintptr_t> T get_IdManager() {
		return ((T (*)(BaseWorld*))(Il2CppBase() + 0x16715B8))(this);
	}
	template <typename T = void> T set_IdManager(uintptr_t value) {
		return ((T (*)(BaseWorld*, uintptr_t))(Il2CppBase() + 0x16715C0))(this, value);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(BaseWorld*))(Il2CppBase() + 0x1671930))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(BaseWorld*))(Il2CppBase() + 0x1671948))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(BaseWorld*))(Il2CppBase() + 0x1671960))(this);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(BaseWorld*))(Il2CppBase() + 0x1671974))(this);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(BaseWorld*))(Il2CppBase() + 0x16719D8))(this);
	}
	template <typename T = void> T ClearContexts() {
		return ((T (*)(BaseWorld*))(Il2CppBase() + 0x1671A4C))(this);
	}
	template <typename T = void> T TryCleanMemory() {
		return ((T (*)(BaseWorld*))(Il2CppBase() + 0x1671C14))(this);
	}
	template <typename T = bool> T IsClanLeader(int64_t playerId) {
		return ((T (*)(BaseWorld*, int64_t))(Il2CppBase() + 0x1671D28))(this, playerId);
	}
	template <typename T = bool> T IsClanLeader_1(uintptr_t player) {
		return ((T (*)(BaseWorld*, uintptr_t))(Il2CppBase() + 0x1671DDC))(this, player);
	}

};

}
