#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUserInventoryData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUserInventoryData"));
	}

	 static MessageParser1<ProtoModels::ArenaUserInventoryData*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaUserInventoryData*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& JsonDataFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& jsonData_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& InGlobalMapFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& inGlobalMap_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& GlobalMapStartFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& globalMapStart_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& GlobalMapEndFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& globalMapEnd_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& EndTimeMoveFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& endTimeMove_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& SpeedMoveFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> R& speedMove_() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& LevelFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& level_() {
		return *(R*)((uintptr_t)this + 0x3C);
	}
	template <typename R = int32_t> static R& EndTimeMoveUnixFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& endTimeMoveUnix_() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> static R& BlockedPushesFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<Il2CppString*>*& _repeated_blockedPushes_codec() {
		return *(FieldCodec1<Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<Il2CppString*>*& blockedPushes_() {
		return *(RepeatedField1<Il2CppString*>**)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> static R& LastSaveErrorFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::SaveInventoryError> R& lastSaveError_() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = int32_t> static R& EnergyFullUnixFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& energyFullUnix_() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = int32_t> static R& MetricFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::UserDeviceMetric*> R& metric_() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = int32_t> static R& DistrictLevelFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& districtLevel_() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = int32_t> static R& SavingsPackFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Codec<int64_t, uint32_t>*& _map_savingsPack_codec() {
		return *(Codec<int64_t, uint32_t>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 MapField2<int64_t, uint32_t>*& savingsPack_() {
		return *(MapField2<int64_t, uint32_t>**)((uintptr_t)this + 0x70);
	}
	template <typename R = int32_t> static R& SeasonPointsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& seasonPoints_() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = int32_t> static R& InventoryPowerDetailFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::InventoryPowerDetailType*> R& inventoryPowerDetail_() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = int32_t> static R& PersonalEntitiesFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Codec<Il2CppString*, Il2CppString*>*& _map_personalEntities_codec() {
		return *(Codec<Il2CppString*, Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 MapField2<Il2CppString*, Il2CppString*>*& personalEntities_() {
		return *(MapField2<Il2CppString*, Il2CppString*>**)((uintptr_t)this + 0x88);
	}
	template <typename R = int32_t> static R& EventBpPointsAFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& eventBpPointsA_() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = int32_t> static R& EventBpPointsBFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& eventBpPointsB_() {
		return *(R*)((uintptr_t)this + 0x94);
	}
	template <typename R = int32_t> static R& EventBpPointsCFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& eventBpPointsC_() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = int32_t> static R& ChangedCurrentSeasonStepFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& changedCurrentSeasonStep_() {
		return *(R*)((uintptr_t)this + 0x9C);
	}
	template <typename R = int32_t> static R& ChangedCurrentSeasonStepAFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& changedCurrentSeasonStepA_() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = int32_t> static R& ChangedCurrentSeasonStepBFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& changedCurrentSeasonStepB_() {
		return *(R*)((uintptr_t)this + 0xA4);
	}
	template <typename R = int32_t> static R& GuildBossCoinsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& guildBossCoins_() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = int32_t> static R& CyclicPointsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& cyclicPoints_() {
		return *(R*)((uintptr_t)this + 0xAC);
	}
	template <typename R = int32_t> static R& CyclicPremiumTokensFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& cyclicPremiumTokens_() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = int32_t> static R& CyclicYmirSoulFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& cyclicYmirSoul_() {
		return *(R*)((uintptr_t)this + 0xB4);
	}
	template <typename R = int32_t> static R& PurchaseHistoryFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::ArenaIncompletePurchaseHistory*>*& _repeated_purchaseHistory_codec() {
		return *(FieldCodec1<ProtoModels::ArenaIncompletePurchaseHistory*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 RepeatedField1<ProtoModels::ArenaIncompletePurchaseHistory*>*& purchaseHistory_() {
		return *(RepeatedField1<ProtoModels::ArenaIncompletePurchaseHistory*>**)((uintptr_t)this + 0xB8);
	}

	 static MessageParser1<ProtoModels::ArenaUserInventoryData*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaUserInventoryData*>* (*)(void *))(Il2CppBase() + 0x285D344))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x285D3A8))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D4C8))(this);
	}
	template <typename R = ProtoModels::ArenaUserInventoryData*> R Clone() {
		return ((R (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285B14C))(this);
	}
	template <typename R = Il2CppString*> R get_JsonData() {
		return ((R (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D754))(this);
	}
	template <typename R = void> R set_JsonData(Il2CppString* value) {
		return ((R (*)(ArenaUserInventoryData*, Il2CppString*))(Il2CppBase() + 0x285D75C))(this, value);
	}
	template <typename R = bool> R get_InGlobalMap() {
		return ((R (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D7DC))(this);
	}
	template <typename R = void> R set_InGlobalMap(bool value) {
		return ((R (*)(ArenaUserInventoryData*, bool))(Il2CppBase() + 0x285D7E4))(this, value);
	}
	template <typename R = int64_t> R get_GlobalMapStart() {
		return ((R (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D7F0))(this);
	}
	template <typename R = void> R set_GlobalMapStart(int64_t value) {
		return ((R (*)(ArenaUserInventoryData*, int64_t))(Il2CppBase() + 0x285D7F8))(this, value);
	}
	template <typename R = int64_t> R get_GlobalMapEnd() {
		return ((R (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D800))(this);
	}
	template <typename R = void> R set_GlobalMapEnd(int64_t value) {
		return ((R (*)(ArenaUserInventoryData*, int64_t))(Il2CppBase() + 0x285D808))(this, value);
	}
	template <typename R = int64_t> R get_EndTimeMove() {
		return ((R (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D810))(this);
	}
	template <typename R = void> R set_EndTimeMove(int64_t value) {
		return ((R (*)(ArenaUserInventoryData*, int64_t))(Il2CppBase() + 0x285D818))(this, value);
	}
	template <typename R = float> R get_SpeedMove() {
		return ((R (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D820))(this);
	}
	template <typename R = void> R set_SpeedMove(float value) {
		return ((R (*)(ArenaUserInventoryData*, float))(Il2CppBase() + 0x285D828))(this, value);
	}
	template <typename R = int32_t> R get_Level() {
		return ((R (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D830))(this);
	}
	template <typename R = void> R set_Level(int32_t value) {
		return ((R (*)(ArenaUserInventoryData*, int32_t))(Il2CppBase() + 0x285D838))(this, value);
	}
	template <typename R = int64_t> R get_EndTimeMoveUnix() {
		return ((R (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D840))(this);
	}
	template <typename R = void> R set_EndTimeMoveUnix(int64_t value) {
		return ((R (*)(ArenaUserInventoryData*, int64_t))(Il2CppBase() + 0x285D848))(this, value);
	}
	 RepeatedField1<Il2CppString*>* get_BlockedPushes() {
		return ((RepeatedField1<Il2CppString*>* (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D850))(this);
	}
	template <typename R = ProtoModels::SaveInventoryError> R get_LastSaveError() {
		return ((R (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D858))(this);
	}
	template <typename R = void> R set_LastSaveError(ProtoModels::SaveInventoryError value) {
		return ((R (*)(ArenaUserInventoryData*, ProtoModels::SaveInventoryError))(Il2CppBase() + 0x285D860))(this, value);
	}
	template <typename R = int64_t> R get_EnergyFullUnix() {
		return ((R (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D868))(this);
	}
	template <typename R = void> R set_EnergyFullUnix(int64_t value) {
		return ((R (*)(ArenaUserInventoryData*, int64_t))(Il2CppBase() + 0x285D870))(this, value);
	}
	template <typename R = ProtoModels::UserDeviceMetric*> R get_Metric() {
		return ((R (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D878))(this);
	}
	template <typename R = void> R set_Metric(ProtoModels::UserDeviceMetric* value) {
		return ((R (*)(ArenaUserInventoryData*, ProtoModels::UserDeviceMetric*))(Il2CppBase() + 0x285D880))(this, value);
	}
	template <typename R = int32_t> R get_DistrictLevel() {
		return ((R (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D888))(this);
	}
	template <typename R = void> R set_DistrictLevel(int32_t value) {
		return ((R (*)(ArenaUserInventoryData*, int32_t))(Il2CppBase() + 0x285D890))(this, value);
	}
	 MapField2<int64_t, uint32_t>* get_SavingsPack() {
		return ((MapField2<int64_t, uint32_t>* (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D898))(this);
	}
	template <typename R = int32_t> R get_SeasonPoints() {
		return ((R (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D8A0))(this);
	}
	template <typename R = void> R set_SeasonPoints(int32_t value) {
		return ((R (*)(ArenaUserInventoryData*, int32_t))(Il2CppBase() + 0x285D8A8))(this, value);
	}
	template <typename R = ProtoModels::InventoryPowerDetailType*> R get_InventoryPowerDetail() {
		return ((R (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D8B0))(this);
	}
	template <typename R = void> R set_InventoryPowerDetail(ProtoModels::InventoryPowerDetailType* value) {
		return ((R (*)(ArenaUserInventoryData*, ProtoModels::InventoryPowerDetailType*))(Il2CppBase() + 0x285D8B8))(this, value);
	}
	 MapField2<Il2CppString*, Il2CppString*>* get_PersonalEntities() {
		return ((MapField2<Il2CppString*, Il2CppString*>* (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D8C0))(this);
	}
	template <typename R = int32_t> R get_EventBpPointsA() {
		return ((R (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D8C8))(this);
	}
	template <typename R = void> R set_EventBpPointsA(int32_t value) {
		return ((R (*)(ArenaUserInventoryData*, int32_t))(Il2CppBase() + 0x285D8D0))(this, value);
	}
	template <typename R = int32_t> R get_EventBpPointsB() {
		return ((R (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D8D8))(this);
	}
	template <typename R = void> R set_EventBpPointsB(int32_t value) {
		return ((R (*)(ArenaUserInventoryData*, int32_t))(Il2CppBase() + 0x285D8E0))(this, value);
	}
	template <typename R = int32_t> R get_EventBpPointsC() {
		return ((R (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D8E8))(this);
	}
	template <typename R = void> R set_EventBpPointsC(int32_t value) {
		return ((R (*)(ArenaUserInventoryData*, int32_t))(Il2CppBase() + 0x285D8F0))(this, value);
	}
	template <typename R = int32_t> R get_ChangedCurrentSeasonStep() {
		return ((R (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D8F8))(this);
	}
	template <typename R = void> R set_ChangedCurrentSeasonStep(int32_t value) {
		return ((R (*)(ArenaUserInventoryData*, int32_t))(Il2CppBase() + 0x285D900))(this, value);
	}
	template <typename R = int32_t> R get_ChangedCurrentSeasonStepA() {
		return ((R (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D908))(this);
	}
	template <typename R = void> R set_ChangedCurrentSeasonStepA(int32_t value) {
		return ((R (*)(ArenaUserInventoryData*, int32_t))(Il2CppBase() + 0x285D910))(this, value);
	}
	template <typename R = int32_t> R get_ChangedCurrentSeasonStepB() {
		return ((R (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D918))(this);
	}
	template <typename R = void> R set_ChangedCurrentSeasonStepB(int32_t value) {
		return ((R (*)(ArenaUserInventoryData*, int32_t))(Il2CppBase() + 0x285D920))(this, value);
	}
	template <typename R = int32_t> R get_GuildBossCoins() {
		return ((R (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D928))(this);
	}
	template <typename R = void> R set_GuildBossCoins(int32_t value) {
		return ((R (*)(ArenaUserInventoryData*, int32_t))(Il2CppBase() + 0x285D930))(this, value);
	}
	template <typename R = int32_t> R get_CyclicPoints() {
		return ((R (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D938))(this);
	}
	template <typename R = void> R set_CyclicPoints(int32_t value) {
		return ((R (*)(ArenaUserInventoryData*, int32_t))(Il2CppBase() + 0x285D940))(this, value);
	}
	template <typename R = int32_t> R get_CyclicPremiumTokens() {
		return ((R (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D948))(this);
	}
	template <typename R = void> R set_CyclicPremiumTokens(int32_t value) {
		return ((R (*)(ArenaUserInventoryData*, int32_t))(Il2CppBase() + 0x285D950))(this, value);
	}
	template <typename R = int32_t> R get_CyclicYmirSoul() {
		return ((R (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D958))(this);
	}
	template <typename R = void> R set_CyclicYmirSoul(int32_t value) {
		return ((R (*)(ArenaUserInventoryData*, int32_t))(Il2CppBase() + 0x285D960))(this, value);
	}
	 RepeatedField1<ProtoModels::ArenaIncompletePurchaseHistory*>* get_PurchaseHistory() {
		return ((RepeatedField1<ProtoModels::ArenaIncompletePurchaseHistory*>* (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285D968))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaUserInventoryData*, Il2CppObject*))(Il2CppBase() + 0x285D970))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaUserInventoryData* other) {
		return ((R (*)(ArenaUserInventoryData*, ProtoModels::ArenaUserInventoryData*))(Il2CppBase() + 0x285D9E0))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285DC8C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285DFCC))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaUserInventoryData*, uintptr_t))(Il2CppBase() + 0x285E030))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaUserInventoryData*))(Il2CppBase() + 0x285E618))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaUserInventoryData* other) {
		return ((R (*)(ArenaUserInventoryData*, ProtoModels::ArenaUserInventoryData*))(Il2CppBase() + 0x285B894))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaUserInventoryData*, uintptr_t))(Il2CppBase() + 0x285ED00))(this, input);
	}

};

}
