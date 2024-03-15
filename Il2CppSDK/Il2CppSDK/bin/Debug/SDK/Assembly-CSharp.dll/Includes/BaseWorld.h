#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseWorld
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseWorld"));
	}

	template <typename R = int64_t> R& WorldId() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& WorldName() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = AccountContext*> R& accounts() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = LocationContext*> R& locations() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = NewsContext*> R& news() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = MailContext*> R& mail() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = Store2Context*> R& store2() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = TransactionContext*> R& transactions() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = LobbyContext*> R& lobby() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = StoreCategoriesContext*> R& storeCategories() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = StoreSalesContext*> R& storeSales() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = VIPContext*> R& vip() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = VIPDataContext*> R& vipData() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = uintptr_t> R& Systems() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = ICommonLogger*> R& Logger() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = ITimeManager*> R& TimeManager() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = IRandomManager*> R& RandomManager() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = IIdManager*> R& IdManager() {
		return *(R*)((uintptr_t)this + 0x98);
	}

	template <typename R = int64_t> R get_WorldId() {
		return ((R (*)(BaseWorld*))(Il2CppBase() + 0x16711C4))(this);
	}
	template <typename R = void> R set_WorldId(int64_t value) {
		return ((R (*)(BaseWorld*, int64_t))(Il2CppBase() + 0x16711CC))(this, value);
	}
	template <typename R = Il2CppString*> R get_WorldName() {
		return ((R (*)(BaseWorld*))(Il2CppBase() + 0x16711D4))(this);
	}
	template <typename R = void> R set_WorldName(Il2CppString* value) {
		return ((R (*)(BaseWorld*, Il2CppString*))(Il2CppBase() + 0x16711DC))(this, value);
	}
	template <typename R = AccountContext*> R get_accounts() {
		return ((R (*)(BaseWorld*))(Il2CppBase() + 0x16711E4))(this);
	}
	template <typename R = void> R set_accounts(AccountContext* value) {
		return ((R (*)(BaseWorld*, AccountContext*))(Il2CppBase() + 0x16711EC))(this, value);
	}
	template <typename R = LocationContext*> R get_locations() {
		return ((R (*)(BaseWorld*))(Il2CppBase() + 0x16711F4))(this);
	}
	template <typename R = void> R set_locations(LocationContext* value) {
		return ((R (*)(BaseWorld*, LocationContext*))(Il2CppBase() + 0x16711FC))(this, value);
	}
	template <typename R = NewsContext*> R get_news() {
		return ((R (*)(BaseWorld*))(Il2CppBase() + 0x1671204))(this);
	}
	template <typename R = void> R set_news(NewsContext* value) {
		return ((R (*)(BaseWorld*, NewsContext*))(Il2CppBase() + 0x167120C))(this, value);
	}
	template <typename R = MailContext*> R get_mail() {
		return ((R (*)(BaseWorld*))(Il2CppBase() + 0x1671214))(this);
	}
	template <typename R = void> R set_mail(MailContext* value) {
		return ((R (*)(BaseWorld*, MailContext*))(Il2CppBase() + 0x167121C))(this, value);
	}
	template <typename R = Store2Context*> R get_store2() {
		return ((R (*)(BaseWorld*))(Il2CppBase() + 0x1671224))(this);
	}
	template <typename R = void> R set_store2(Store2Context* value) {
		return ((R (*)(BaseWorld*, Store2Context*))(Il2CppBase() + 0x167122C))(this, value);
	}
	template <typename R = TransactionContext*> R get_transactions() {
		return ((R (*)(BaseWorld*))(Il2CppBase() + 0x1671234))(this);
	}
	template <typename R = void> R set_transactions(TransactionContext* value) {
		return ((R (*)(BaseWorld*, TransactionContext*))(Il2CppBase() + 0x167123C))(this, value);
	}
	template <typename R = LobbyContext*> R get_lobby() {
		return ((R (*)(BaseWorld*))(Il2CppBase() + 0x1671244))(this);
	}
	template <typename R = void> R set_lobby(LobbyContext* value) {
		return ((R (*)(BaseWorld*, LobbyContext*))(Il2CppBase() + 0x167124C))(this, value);
	}
	template <typename R = StoreCategoriesContext*> R get_storeCategories() {
		return ((R (*)(BaseWorld*))(Il2CppBase() + 0x1671254))(this);
	}
	template <typename R = void> R set_storeCategories(StoreCategoriesContext* value) {
		return ((R (*)(BaseWorld*, StoreCategoriesContext*))(Il2CppBase() + 0x167125C))(this, value);
	}
	template <typename R = StoreSalesContext*> R get_storeSales() {
		return ((R (*)(BaseWorld*))(Il2CppBase() + 0x1671264))(this);
	}
	template <typename R = void> R set_storeSales(StoreSalesContext* value) {
		return ((R (*)(BaseWorld*, StoreSalesContext*))(Il2CppBase() + 0x167126C))(this, value);
	}
	template <typename R = VIPContext*> R get_vip() {
		return ((R (*)(BaseWorld*))(Il2CppBase() + 0x1671274))(this);
	}
	template <typename R = void> R set_vip(VIPContext* value) {
		return ((R (*)(BaseWorld*, VIPContext*))(Il2CppBase() + 0x167127C))(this, value);
	}
	template <typename R = VIPDataContext*> R get_vipData() {
		return ((R (*)(BaseWorld*))(Il2CppBase() + 0x1671284))(this);
	}
	template <typename R = void> R set_vipData(VIPDataContext* value) {
		return ((R (*)(BaseWorld*, VIPDataContext*))(Il2CppBase() + 0x167128C))(this, value);
	}
	template <typename R = PlayerContext*> R get_players() {
		return ((R (*)(BaseWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = ClanContext*> R get_clans() {
		return ((R (*)(BaseWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = GuildContext*> R get_guilds() {
		return ((R (*)(BaseWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = GuildQuestContext*> R get_guildQuests() {
		return ((R (*)(BaseWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = PvPContext*> R get_pvps() {
		return ((R (*)(BaseWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = InviteContext*> R get_invites() {
		return ((R (*)(BaseWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = GuildInviteContext*> R get_guildInvites() {
		return ((R (*)(BaseWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = DiplomacyContext*> R get_diplomacies() {
		return ((R (*)(BaseWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = TournamentContext*> R get_tournaments() {
		return ((R (*)(BaseWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = Store2DataContext*> R get_store2Data() {
		return ((R (*)(BaseWorld*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R get_allContexts() {
		return ((R (*)(BaseWorld*))(Il2CppBase() + 0x1671294))(this);
	}
	template <typename R = uintptr_t> R get_Systems() {
		return ((R (*)(BaseWorld*))(Il2CppBase() + 0x1671578))(this);
	}
	template <typename R = void> R set_Systems(uintptr_t value) {
		return ((R (*)(BaseWorld*, uintptr_t))(Il2CppBase() + 0x1671580))(this, value);
	}
	template <typename R = ICommonLogger*> R get_Logger() {
		return ((R (*)(BaseWorld*))(Il2CppBase() + 0x1671588))(this);
	}
	template <typename R = void> R set_Logger(ICommonLogger* value) {
		return ((R (*)(BaseWorld*, ICommonLogger*))(Il2CppBase() + 0x1671590))(this, value);
	}
	template <typename R = ITimeManager*> R get_TimeManager() {
		return ((R (*)(BaseWorld*))(Il2CppBase() + 0x1671598))(this);
	}
	template <typename R = void> R set_TimeManager(ITimeManager* value) {
		return ((R (*)(BaseWorld*, ITimeManager*))(Il2CppBase() + 0x16715A0))(this, value);
	}
	template <typename R = IRandomManager*> R get_RandomManager() {
		return ((R (*)(BaseWorld*))(Il2CppBase() + 0x16715A8))(this);
	}
	template <typename R = void> R set_RandomManager(IRandomManager* value) {
		return ((R (*)(BaseWorld*, IRandomManager*))(Il2CppBase() + 0x16715B0))(this, value);
	}
	template <typename R = IIdManager*> R get_IdManager() {
		return ((R (*)(BaseWorld*))(Il2CppBase() + 0x16715B8))(this);
	}
	template <typename R = void> R set_IdManager(IIdManager* value) {
		return ((R (*)(BaseWorld*, IIdManager*))(Il2CppBase() + 0x16715C0))(this, value);
	}
	template <typename R = void> R Initialize() {
		return ((R (*)(BaseWorld*))(Il2CppBase() + 0x1671930))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(BaseWorld*))(Il2CppBase() + 0x1671948))(this);
	}
	template <typename R = void> R Reset() {
		return ((R (*)(BaseWorld*))(Il2CppBase() + 0x1671960))(this);
	}
	template <typename R = void> R Clean() {
		return ((R (*)(BaseWorld*))(Il2CppBase() + 0x1671974))(this);
	}
	template <typename R = void> R Destroy() {
		return ((R (*)(BaseWorld*))(Il2CppBase() + 0x16719D8))(this);
	}
	template <typename R = void> R ClearContexts() {
		return ((R (*)(BaseWorld*))(Il2CppBase() + 0x1671A4C))(this);
	}
	template <typename R = void> R TryCleanMemory() {
		return ((R (*)(BaseWorld*))(Il2CppBase() + 0x1671C14))(this);
	}
	template <typename R = bool> R IsClanLeader(int64_t playerId) {
		return ((R (*)(BaseWorld*, int64_t))(Il2CppBase() + 0x1671D28))(this, playerId);
	}
	template <typename R = bool> R IsClanLeader_1(PlayerEntity* player) {
		return ((R (*)(BaseWorld*, PlayerEntity*))(Il2CppBase() + 0x1671DDC))(this, player);
	}

};

