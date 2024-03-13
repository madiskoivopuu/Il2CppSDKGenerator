#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUserInventoryData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUserInventoryData"));
	}

	template <typename T = MessageParser1ArenaUserInventoryData*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& JsonDataFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& jsonData_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& InGlobalMapFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& inGlobalMap_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& GlobalMapStartFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& globalMapStart_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& GlobalMapEndFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& globalMapEnd_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& EndTimeMoveFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& endTimeMove_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& SpeedMoveFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& speedMove_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& LevelFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& level_() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> static T& EndTimeMoveUnixFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& endTimeMoveUnix_() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& BlockedPushesFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1Il2CppString*>*> static T& _repeated_blockedPushes_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1Il2CppString*>*> T& blockedPushes_() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> static T& LastSaveErrorFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = SaveInventoryError*> T& lastSaveError_() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> static T& EnergyFullUnixFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& energyFullUnix_() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> static T& MetricFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = UserDeviceMetric*> T& metric_() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> static T& DistrictLevelFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& districtLevel_() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> static T& SavingsPackFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Codecint64_t, uint32_t>*> static T& _map_savingsPack_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = MapField2int64_t, uint32_t>*> T& savingsPack_() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> static T& SeasonPointsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& seasonPoints_() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> static T& InventoryPowerDetailFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = InventoryPowerDetailType*> T& inventoryPowerDetail_() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> static T& PersonalEntitiesFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = CodecIl2CppString*, Il2CppString*>*> static T& _map_personalEntities_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = MapField2Il2CppString*, Il2CppString*>*> T& personalEntities_() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> static T& EventBpPointsAFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& eventBpPointsA_() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> static T& EventBpPointsBFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& eventBpPointsB_() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> static T& EventBpPointsCFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& eventBpPointsC_() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> static T& ChangedCurrentSeasonStepFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& changedCurrentSeasonStep_() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = int32_t> static T& ChangedCurrentSeasonStepAFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& changedCurrentSeasonStepA_() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> static T& ChangedCurrentSeasonStepBFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& changedCurrentSeasonStepB_() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> static T& GuildBossCoinsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& guildBossCoins_() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> static T& CyclicPointsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& cyclicPoints_() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = int32_t> static T& CyclicPremiumTokensFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& cyclicPremiumTokens_() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> static T& CyclicYmirSoulFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& cyclicYmirSoul_() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = int32_t> static T& PurchaseHistoryFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1ArenaIncompletePurchaseHistory*>*> static T& _repeated_purchaseHistory_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = RepeatedField1ArenaIncompletePurchaseHistory*>*> T& purchaseHistory_() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = MessageParser1ArenaUserInventoryData*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x285D344))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x285D3A8))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D4C8))(this);
	}
	template <typename T = ArenaUserInventoryData*> T Clone() {
		return ((T (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285B14C))(this);
	}
	template <typename T = Il2CppString*> T get_JsonData() {
		return ((T (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D754))(this);
	}
	template <typename T = void> T set_JsonData(Il2CppString* value) {
		return ((T (*)(ArenaUserInventoryData*, Il2CppString*))(Il2CppBase() + 0x285D75C))(this, value);
	}
	template <typename T = bool> T get_InGlobalMap() {
		return ((T (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D7DC))(this);
	}
	template <typename T = void> T set_InGlobalMap(bool value) {
		return ((T (*)(ArenaUserInventoryData*, bool))(Il2CppBase() + 0x285D7E4))(this, value);
	}
	template <typename T = int64_t> T get_GlobalMapStart() {
		return ((T (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D7F0))(this);
	}
	template <typename T = void> T set_GlobalMapStart(int64_t value) {
		return ((T (*)(ArenaUserInventoryData*, int64_t))(Il2CppBase() + 0x285D7F8))(this, value);
	}
	template <typename T = int64_t> T get_GlobalMapEnd() {
		return ((T (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D800))(this);
	}
	template <typename T = void> T set_GlobalMapEnd(int64_t value) {
		return ((T (*)(ArenaUserInventoryData*, int64_t))(Il2CppBase() + 0x285D808))(this, value);
	}
	template <typename T = int64_t> T get_EndTimeMove() {
		return ((T (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D810))(this);
	}
	template <typename T = void> T set_EndTimeMove(int64_t value) {
		return ((T (*)(ArenaUserInventoryData*, int64_t))(Il2CppBase() + 0x285D818))(this, value);
	}
	template <typename T = float> T get_SpeedMove() {
		return ((T (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D820))(this);
	}
	template <typename T = void> T set_SpeedMove(float value) {
		return ((T (*)(ArenaUserInventoryData*, float))(Il2CppBase() + 0x285D828))(this, value);
	}
	template <typename T = int32_t> T get_Level() {
		return ((T (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D830))(this);
	}
	template <typename T = void> T set_Level(int32_t value) {
		return ((T (*)(ArenaUserInventoryData*, int32_t))(Il2CppBase() + 0x285D838))(this, value);
	}
	template <typename T = int64_t> T get_EndTimeMoveUnix() {
		return ((T (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D840))(this);
	}
	template <typename T = void> T set_EndTimeMoveUnix(int64_t value) {
		return ((T (*)(ArenaUserInventoryData*, int64_t))(Il2CppBase() + 0x285D848))(this, value);
	}
	template <typename T = RepeatedField1Il2CppString*>*> T get_BlockedPushes() {
		return ((T (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D850))(this);
	}
	template <typename T = SaveInventoryError*> T get_LastSaveError() {
		return ((T (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D858))(this);
	}
	template <typename T = void> T set_LastSaveError(SaveInventoryError* value) {
		return ((T (*)(ArenaUserInventoryData*, SaveInventoryError*))(Il2CppBase() + 0x285D860))(this, value);
	}
	template <typename T = int64_t> T get_EnergyFullUnix() {
		return ((T (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D868))(this);
	}
	template <typename T = void> T set_EnergyFullUnix(int64_t value) {
		return ((T (*)(ArenaUserInventoryData*, int64_t))(Il2CppBase() + 0x285D870))(this, value);
	}
	template <typename T = UserDeviceMetric*> T get_Metric() {
		return ((T (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D878))(this);
	}
	template <typename T = void> T set_Metric(UserDeviceMetric* value) {
		return ((T (*)(ArenaUserInventoryData*, UserDeviceMetric*))(Il2CppBase() + 0x285D880))(this, value);
	}
	template <typename T = int32_t> T get_DistrictLevel() {
		return ((T (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D888))(this);
	}
	template <typename T = void> T set_DistrictLevel(int32_t value) {
		return ((T (*)(ArenaUserInventoryData*, int32_t))(Il2CppBase() + 0x285D890))(this, value);
	}
	template <typename T = MapField2int64_t, uint32_t>*> T get_SavingsPack() {
		return ((T (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D898))(this);
	}
	template <typename T = int32_t> T get_SeasonPoints() {
		return ((T (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D8A0))(this);
	}
	template <typename T = void> T set_SeasonPoints(int32_t value) {
		return ((T (*)(ArenaUserInventoryData*, int32_t))(Il2CppBase() + 0x285D8A8))(this, value);
	}
	template <typename T = InventoryPowerDetailType*> T get_InventoryPowerDetail() {
		return ((T (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D8B0))(this);
	}
	template <typename T = void> T set_InventoryPowerDetail(InventoryPowerDetailType* value) {
		return ((T (*)(ArenaUserInventoryData*, InventoryPowerDetailType*))(Il2CppBase() + 0x285D8B8))(this, value);
	}
	template <typename T = MapField2Il2CppString*, Il2CppString*>*> T get_PersonalEntities() {
		return ((T (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D8C0))(this);
	}
	template <typename T = int32_t> T get_EventBpPointsA() {
		return ((T (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D8C8))(this);
	}
	template <typename T = void> T set_EventBpPointsA(int32_t value) {
		return ((T (*)(ArenaUserInventoryData*, int32_t))(Il2CppBase() + 0x285D8D0))(this, value);
	}
	template <typename T = int32_t> T get_EventBpPointsB() {
		return ((T (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D8D8))(this);
	}
	template <typename T = void> T set_EventBpPointsB(int32_t value) {
		return ((T (*)(ArenaUserInventoryData*, int32_t))(Il2CppBase() + 0x285D8E0))(this, value);
	}
	template <typename T = int32_t> T get_EventBpPointsC() {
		return ((T (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D8E8))(this);
	}
	template <typename T = void> T set_EventBpPointsC(int32_t value) {
		return ((T (*)(ArenaUserInventoryData*, int32_t))(Il2CppBase() + 0x285D8F0))(this, value);
	}
	template <typename T = int32_t> T get_ChangedCurrentSeasonStep() {
		return ((T (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D8F8))(this);
	}
	template <typename T = void> T set_ChangedCurrentSeasonStep(int32_t value) {
		return ((T (*)(ArenaUserInventoryData*, int32_t))(Il2CppBase() + 0x285D900))(this, value);
	}
	template <typename T = int32_t> T get_ChangedCurrentSeasonStepA() {
		return ((T (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D908))(this);
	}
	template <typename T = void> T set_ChangedCurrentSeasonStepA(int32_t value) {
		return ((T (*)(ArenaUserInventoryData*, int32_t))(Il2CppBase() + 0x285D910))(this, value);
	}
	template <typename T = int32_t> T get_ChangedCurrentSeasonStepB() {
		return ((T (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D918))(this);
	}
	template <typename T = void> T set_ChangedCurrentSeasonStepB(int32_t value) {
		return ((T (*)(ArenaUserInventoryData*, int32_t))(Il2CppBase() + 0x285D920))(this, value);
	}
	template <typename T = int32_t> T get_GuildBossCoins() {
		return ((T (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D928))(this);
	}
	template <typename T = void> T set_GuildBossCoins(int32_t value) {
		return ((T (*)(ArenaUserInventoryData*, int32_t))(Il2CppBase() + 0x285D930))(this, value);
	}
	template <typename T = int32_t> T get_CyclicPoints() {
		return ((T (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D938))(this);
	}
	template <typename T = void> T set_CyclicPoints(int32_t value) {
		return ((T (*)(ArenaUserInventoryData*, int32_t))(Il2CppBase() + 0x285D940))(this, value);
	}
	template <typename T = int32_t> T get_CyclicPremiumTokens() {
		return ((T (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D948))(this);
	}
	template <typename T = void> T set_CyclicPremiumTokens(int32_t value) {
		return ((T (*)(ArenaUserInventoryData*, int32_t))(Il2CppBase() + 0x285D950))(this, value);
	}
	template <typename T = int32_t> T get_CyclicYmirSoul() {
		return ((T (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D958))(this);
	}
	template <typename T = void> T set_CyclicYmirSoul(int32_t value) {
		return ((T (*)(ArenaUserInventoryData*, int32_t))(Il2CppBase() + 0x285D960))(this, value);
	}
	template <typename T = RepeatedField1ArenaIncompletePurchaseHistory*>*> T get_PurchaseHistory() {
		return ((T (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D968))(this);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaUserInventoryData*, Il2CppObject*))(Il2CppBase() + 0x285D970))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaUserInventoryData* other) {
		return ((T (*)(ArenaUserInventoryData*, ArenaUserInventoryData*))(Il2CppBase() + 0x285D9E0))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285DC8C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285DFCC))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaUserInventoryData*, uintptr_t))(Il2CppBase() + 0x285E030))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285E618))(this);
	}
	template <typename T = void> T MergeFrom(ArenaUserInventoryData* other) {
		return ((T (*)(ArenaUserInventoryData*, ArenaUserInventoryData*))(Il2CppBase() + 0x285B894))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaUserInventoryData*, uintptr_t))(Il2CppBase() + 0x285ED00))(this, input);
	}

};

}
