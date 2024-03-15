#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ServerConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ServerConfiguration"));
	}

	 static MessageParser1<ProtoModels::ServerConfiguration*>*& _parser() {
		return *(MessageParser1<ProtoModels::ServerConfiguration*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& TokenFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uintptr_t> R& token_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& MainServerNameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& mainServerName_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& LocalIPCoordinatorFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& localIPCoordinator_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& UseInternalNetworkFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& useInternalNetwork_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& FcmDataJsonFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& fcmDataJson_() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& TelegramBotUrlFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& telegramBotUrl_() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> static R& DevToDevUrlFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<Il2CppString*>*& _repeated_devToDevUrl_codec() {
		return *(FieldCodec1<Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<Il2CppString*>*& devToDevUrl_() {
		return *(RepeatedField1<Il2CppString*>**)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> static R& RegionServerFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& regionServer_() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = int32_t> static R& AnalyticsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::ArenaAnalyticsConfig*> R& analytics_() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = int32_t> static R& ChatFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::ArenaChatConfig*> R& chat_() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = int32_t> static R& ProtocolFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::ArenaServerProtocolType> R& protocol_() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = int32_t> static R& SlackFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::SlackBotConfiguration*> R& slack_() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = int32_t> static R& IsProductionFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& isProduction_() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = int32_t> static R& AutoTestTelegramBotUrlFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& autoTestTelegramBotUrl_() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = int32_t> static R& AutoTestShopJsonFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& autoTestShopJson_() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = int32_t> static R& SeasonPointsMultiplierKoefFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& seasonPointsMultiplierKoef_() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = int32_t> static R& MatchmakingV2FieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& matchmakingV2_() {
		return *(R*)((uintptr_t)this + 0x94);
	}
	template <typename R = int32_t> static R& IsCyclicServerFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& isCyclicServer_() {
		return *(R*)((uintptr_t)this + 0x95);
	}
	template <typename R = int32_t> static R& DungeonSavePeriodFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Codec<Il2CppString*, ProtoModels::DungeonSavePeriodPair*>*& _map_dungeonSavePeriod_codec() {
		return *(Codec<Il2CppString*, ProtoModels::DungeonSavePeriodPair*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 MapField2<Il2CppString*, ProtoModels::DungeonSavePeriodPair*>*& dungeonSavePeriod_() {
		return *(MapField2<Il2CppString*, ProtoModels::DungeonSavePeriodPair*>**)((uintptr_t)this + 0x98);
	}
	template <typename R = int32_t> static R& KefirPublicKeyFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& kefirPublicKey_() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = int32_t> static R& EnableListPveIDsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<int64_t>*& _repeated_enableListPveIDs_codec() {
		return *(FieldCodec1<int64_t>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 RepeatedField1<int64_t>*& enableListPveIDs_() {
		return *(RepeatedField1<int64_t>**)((uintptr_t)this + 0xA8);
	}
	template <typename R = int32_t> static R& LinkKefirIdEnableFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& linkKefirIdEnable_() {
		return *(R*)((uintptr_t)this + 0xB0);
	}

	 static MessageParser1<ProtoModels::ServerConfiguration*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ServerConfiguration*>* (*)(void *))(Il2CppBase() + 0x136684C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x13668B0))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ServerConfiguration*))(Il2CppBase() + 0x13669D0))(this);
	}
	template <typename R = ProtoModels::ServerConfiguration*> R Clone() {
		return ((R (*)(ServerConfiguration*))(Il2CppBase() + 0x1366E9C))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(ServerConfiguration*))(Il2CppBase() + 0x1366EF8))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(ServerConfiguration*, int64_t))(Il2CppBase() + 0x1366F00))(this, value);
	}
	template <typename R = uintptr_t> R get_Token() {
		return ((R (*)(ServerConfiguration*))(Il2CppBase() + 0x1366F08))(this);
	}
	template <typename R = void> R set_Token(uintptr_t value) {
		return ((R (*)(ServerConfiguration*, uintptr_t))(Il2CppBase() + 0x1366F10))(this, value);
	}
	template <typename R = Il2CppString*> R get_MainServerName() {
		return ((R (*)(ServerConfiguration*))(Il2CppBase() + 0x1366F90))(this);
	}
	template <typename R = void> R set_MainServerName(Il2CppString* value) {
		return ((R (*)(ServerConfiguration*, Il2CppString*))(Il2CppBase() + 0x1366F98))(this, value);
	}
	template <typename R = Il2CppString*> R get_LocalIPCoordinator() {
		return ((R (*)(ServerConfiguration*))(Il2CppBase() + 0x1367018))(this);
	}
	template <typename R = void> R set_LocalIPCoordinator(Il2CppString* value) {
		return ((R (*)(ServerConfiguration*, Il2CppString*))(Il2CppBase() + 0x1367020))(this, value);
	}
	template <typename R = bool> R get_UseInternalNetwork() {
		return ((R (*)(ServerConfiguration*))(Il2CppBase() + 0x13670A0))(this);
	}
	template <typename R = void> R set_UseInternalNetwork(bool value) {
		return ((R (*)(ServerConfiguration*, bool))(Il2CppBase() + 0x13670A8))(this, value);
	}
	template <typename R = Il2CppString*> R get_FcmDataJson() {
		return ((R (*)(ServerConfiguration*))(Il2CppBase() + 0x13670B4))(this);
	}
	template <typename R = void> R set_FcmDataJson(Il2CppString* value) {
		return ((R (*)(ServerConfiguration*, Il2CppString*))(Il2CppBase() + 0x13670BC))(this, value);
	}
	template <typename R = Il2CppString*> R get_TelegramBotUrl() {
		return ((R (*)(ServerConfiguration*))(Il2CppBase() + 0x136713C))(this);
	}
	template <typename R = void> R set_TelegramBotUrl(Il2CppString* value) {
		return ((R (*)(ServerConfiguration*, Il2CppString*))(Il2CppBase() + 0x1367144))(this, value);
	}
	 RepeatedField1<Il2CppString*>* get_DevToDevUrl() {
		return ((RepeatedField1<Il2CppString*>* (*)(ServerConfiguration*))(Il2CppBase() + 0x13671C4))(this);
	}
	template <typename R = Il2CppString*> R get_RegionServer() {
		return ((R (*)(ServerConfiguration*))(Il2CppBase() + 0x13671CC))(this);
	}
	template <typename R = void> R set_RegionServer(Il2CppString* value) {
		return ((R (*)(ServerConfiguration*, Il2CppString*))(Il2CppBase() + 0x13671D4))(this, value);
	}
	template <typename R = ProtoModels::ArenaAnalyticsConfig*> R get_Analytics() {
		return ((R (*)(ServerConfiguration*))(Il2CppBase() + 0x1367254))(this);
	}
	template <typename R = void> R set_Analytics(ProtoModels::ArenaAnalyticsConfig* value) {
		return ((R (*)(ServerConfiguration*, ProtoModels::ArenaAnalyticsConfig*))(Il2CppBase() + 0x136725C))(this, value);
	}
	template <typename R = ProtoModels::ArenaChatConfig*> R get_Chat() {
		return ((R (*)(ServerConfiguration*))(Il2CppBase() + 0x1367264))(this);
	}
	template <typename R = void> R set_Chat(ProtoModels::ArenaChatConfig* value) {
		return ((R (*)(ServerConfiguration*, ProtoModels::ArenaChatConfig*))(Il2CppBase() + 0x136726C))(this, value);
	}
	template <typename R = ProtoModels::ArenaServerProtocolType> R get_Protocol() {
		return ((R (*)(ServerConfiguration*))(Il2CppBase() + 0x1367274))(this);
	}
	template <typename R = void> R set_Protocol(ProtoModels::ArenaServerProtocolType value) {
		return ((R (*)(ServerConfiguration*, ProtoModels::ArenaServerProtocolType))(Il2CppBase() + 0x136727C))(this, value);
	}
	template <typename R = ProtoModels::SlackBotConfiguration*> R get_Slack() {
		return ((R (*)(ServerConfiguration*))(Il2CppBase() + 0x1367284))(this);
	}
	template <typename R = void> R set_Slack(ProtoModels::SlackBotConfiguration* value) {
		return ((R (*)(ServerConfiguration*, ProtoModels::SlackBotConfiguration*))(Il2CppBase() + 0x136728C))(this, value);
	}
	template <typename R = bool> R get_IsProduction() {
		return ((R (*)(ServerConfiguration*))(Il2CppBase() + 0x1367294))(this);
	}
	template <typename R = void> R set_IsProduction(bool value) {
		return ((R (*)(ServerConfiguration*, bool))(Il2CppBase() + 0x136729C))(this, value);
	}
	template <typename R = Il2CppString*> R get_AutoTestTelegramBotUrl() {
		return ((R (*)(ServerConfiguration*))(Il2CppBase() + 0x13672A8))(this);
	}
	template <typename R = void> R set_AutoTestTelegramBotUrl(Il2CppString* value) {
		return ((R (*)(ServerConfiguration*, Il2CppString*))(Il2CppBase() + 0x13672B0))(this, value);
	}
	template <typename R = Il2CppString*> R get_AutoTestShopJson() {
		return ((R (*)(ServerConfiguration*))(Il2CppBase() + 0x1367330))(this);
	}
	template <typename R = void> R set_AutoTestShopJson(Il2CppString* value) {
		return ((R (*)(ServerConfiguration*, Il2CppString*))(Il2CppBase() + 0x1367338))(this, value);
	}
	template <typename R = int32_t> R get_SeasonPointsMultiplierKoef() {
		return ((R (*)(ServerConfiguration*))(Il2CppBase() + 0x13673B8))(this);
	}
	template <typename R = void> R set_SeasonPointsMultiplierKoef(int32_t value) {
		return ((R (*)(ServerConfiguration*, int32_t))(Il2CppBase() + 0x13673C0))(this, value);
	}
	template <typename R = bool> R get_MatchmakingV2() {
		return ((R (*)(ServerConfiguration*))(Il2CppBase() + 0x13673C8))(this);
	}
	template <typename R = void> R set_MatchmakingV2(bool value) {
		return ((R (*)(ServerConfiguration*, bool))(Il2CppBase() + 0x13673D0))(this, value);
	}
	template <typename R = bool> R get_IsCyclicServer() {
		return ((R (*)(ServerConfiguration*))(Il2CppBase() + 0x13673DC))(this);
	}
	template <typename R = void> R set_IsCyclicServer(bool value) {
		return ((R (*)(ServerConfiguration*, bool))(Il2CppBase() + 0x13673E4))(this, value);
	}
	 MapField2<Il2CppString*, ProtoModels::DungeonSavePeriodPair*>* get_DungeonSavePeriod() {
		return ((MapField2<Il2CppString*, ProtoModels::DungeonSavePeriodPair*>* (*)(ServerConfiguration*))(Il2CppBase() + 0x13673F0))(this);
	}
	template <typename R = Il2CppString*> R get_KefirPublicKey() {
		return ((R (*)(ServerConfiguration*))(Il2CppBase() + 0x13673F8))(this);
	}
	template <typename R = void> R set_KefirPublicKey(Il2CppString* value) {
		return ((R (*)(ServerConfiguration*, Il2CppString*))(Il2CppBase() + 0x1367400))(this, value);
	}
	 RepeatedField1<int64_t>* get_EnableListPveIDs() {
		return ((RepeatedField1<int64_t>* (*)(ServerConfiguration*))(Il2CppBase() + 0x1367480))(this);
	}
	template <typename R = bool> R get_LinkKefirIdEnable() {
		return ((R (*)(ServerConfiguration*))(Il2CppBase() + 0x1367488))(this);
	}
	template <typename R = void> R set_LinkKefirIdEnable(bool value) {
		return ((R (*)(ServerConfiguration*, bool))(Il2CppBase() + 0x1367490))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ServerConfiguration*, Il2CppObject*))(Il2CppBase() + 0x136749C))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ServerConfiguration* other) {
		return ((R (*)(ServerConfiguration*, ProtoModels::ServerConfiguration*))(Il2CppBase() + 0x136750C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ServerConfiguration*))(Il2CppBase() + 0x13677DC))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ServerConfiguration*))(Il2CppBase() + 0x1367AD4))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ServerConfiguration*, uintptr_t))(Il2CppBase() + 0x1367B38))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ServerConfiguration*))(Il2CppBase() + 0x136805C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ServerConfiguration* other) {
		return ((R (*)(ServerConfiguration*, ProtoModels::ServerConfiguration*))(Il2CppBase() + 0x13685D0))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ServerConfiguration*, uintptr_t))(Il2CppBase() + 0x13688EC))(this, input);
	}

};

}
