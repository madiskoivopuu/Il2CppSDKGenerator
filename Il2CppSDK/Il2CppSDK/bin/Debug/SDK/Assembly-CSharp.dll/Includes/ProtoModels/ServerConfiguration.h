#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ServerConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ServerConfiguration"));
	}

	template <typename T = MessageParser1ServerConfiguration*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& TokenFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& token_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& MainServerNameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& mainServerName_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& LocalIPCoordinatorFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& localIPCoordinator_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& UseInternalNetworkFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& useInternalNetwork_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& FcmDataJsonFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& fcmDataJson_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& TelegramBotUrlFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& telegramBotUrl_() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& DevToDevUrlFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1Il2CppString*>*> static T& _repeated_devToDevUrl_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1Il2CppString*>*> T& devToDevUrl_() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> static T& RegionServerFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& regionServer_() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> static T& AnalyticsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ArenaAnalyticsConfig*> T& analytics_() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> static T& ChatFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ArenaChatConfig*> T& chat_() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> static T& ProtocolFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ArenaServerProtocolType*> T& protocol_() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> static T& SlackFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = SlackBotConfiguration*> T& slack_() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> static T& IsProductionFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& isProduction_() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> static T& AutoTestTelegramBotUrlFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& autoTestTelegramBotUrl_() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> static T& AutoTestShopJsonFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& autoTestShopJson_() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> static T& SeasonPointsMultiplierKoefFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& seasonPointsMultiplierKoef_() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> static T& MatchmakingV2FieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& matchmakingV2_() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> static T& IsCyclicServerFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& isCyclicServer_() {
		return *(T*)((uintptr_t)this + 0x95);
	}
	template <typename T = int32_t> static T& DungeonSavePeriodFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = CodecIl2CppString*, DungeonSavePeriodPair*>*> static T& _map_dungeonSavePeriod_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = MapField2Il2CppString*, DungeonSavePeriodPair*>*> T& dungeonSavePeriod_() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> static T& KefirPublicKeyFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& kefirPublicKey_() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> static T& EnableListPveIDsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1int64_t>*> static T& _repeated_enableListPveIDs_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = RepeatedField1int64_t>*> T& enableListPveIDs_() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> static T& LinkKefirIdEnableFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& linkKefirIdEnable_() {
		return *(T*)((uintptr_t)this + 0xB0);
	}

	template <typename T = MessageParser1ServerConfiguration*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x136684C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x13668B0))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ServerConfiguration*))(Il2CppBase() + 0x13669D0))(this);
	}
	template <typename T = ServerConfiguration*> T Clone() {
		return ((T (*)(ServerConfiguration*))(Il2CppBase() + 0x1366E9C))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ServerConfiguration*))(Il2CppBase() + 0x1366EF8))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ServerConfiguration*, int64_t))(Il2CppBase() + 0x1366F00))(this, value);
	}
	template <typename T = uintptr_t> T get_Token() {
		return ((T (*)(ServerConfiguration*))(Il2CppBase() + 0x1366F08))(this);
	}
	template <typename T = void> T set_Token(uintptr_t value) {
		return ((T (*)(ServerConfiguration*, uintptr_t))(Il2CppBase() + 0x1366F10))(this, value);
	}
	template <typename T = Il2CppString*> T get_MainServerName() {
		return ((T (*)(ServerConfiguration*))(Il2CppBase() + 0x1366F90))(this);
	}
	template <typename T = void> T set_MainServerName(Il2CppString* value) {
		return ((T (*)(ServerConfiguration*, Il2CppString*))(Il2CppBase() + 0x1366F98))(this, value);
	}
	template <typename T = Il2CppString*> T get_LocalIPCoordinator() {
		return ((T (*)(ServerConfiguration*))(Il2CppBase() + 0x1367018))(this);
	}
	template <typename T = void> T set_LocalIPCoordinator(Il2CppString* value) {
		return ((T (*)(ServerConfiguration*, Il2CppString*))(Il2CppBase() + 0x1367020))(this, value);
	}
	template <typename T = bool> T get_UseInternalNetwork() {
		return ((T (*)(ServerConfiguration*))(Il2CppBase() + 0x13670A0))(this);
	}
	template <typename T = void> T set_UseInternalNetwork(bool value) {
		return ((T (*)(ServerConfiguration*, bool))(Il2CppBase() + 0x13670A8))(this, value);
	}
	template <typename T = Il2CppString*> T get_FcmDataJson() {
		return ((T (*)(ServerConfiguration*))(Il2CppBase() + 0x13670B4))(this);
	}
	template <typename T = void> T set_FcmDataJson(Il2CppString* value) {
		return ((T (*)(ServerConfiguration*, Il2CppString*))(Il2CppBase() + 0x13670BC))(this, value);
	}
	template <typename T = Il2CppString*> T get_TelegramBotUrl() {
		return ((T (*)(ServerConfiguration*))(Il2CppBase() + 0x136713C))(this);
	}
	template <typename T = void> T set_TelegramBotUrl(Il2CppString* value) {
		return ((T (*)(ServerConfiguration*, Il2CppString*))(Il2CppBase() + 0x1367144))(this, value);
	}
	template <typename T = RepeatedField1Il2CppString*>*> T get_DevToDevUrl() {
		return ((T (*)(ServerConfiguration*))(Il2CppBase() + 0x13671C4))(this);
	}
	template <typename T = Il2CppString*> T get_RegionServer() {
		return ((T (*)(ServerConfiguration*))(Il2CppBase() + 0x13671CC))(this);
	}
	template <typename T = void> T set_RegionServer(Il2CppString* value) {
		return ((T (*)(ServerConfiguration*, Il2CppString*))(Il2CppBase() + 0x13671D4))(this, value);
	}
	template <typename T = ArenaAnalyticsConfig*> T get_Analytics() {
		return ((T (*)(ServerConfiguration*))(Il2CppBase() + 0x1367254))(this);
	}
	template <typename T = void> T set_Analytics(ArenaAnalyticsConfig* value) {
		return ((T (*)(ServerConfiguration*, ArenaAnalyticsConfig*))(Il2CppBase() + 0x136725C))(this, value);
	}
	template <typename T = ArenaChatConfig*> T get_Chat() {
		return ((T (*)(ServerConfiguration*))(Il2CppBase() + 0x1367264))(this);
	}
	template <typename T = void> T set_Chat(ArenaChatConfig* value) {
		return ((T (*)(ServerConfiguration*, ArenaChatConfig*))(Il2CppBase() + 0x136726C))(this, value);
	}
	template <typename T = ArenaServerProtocolType*> T get_Protocol() {
		return ((T (*)(ServerConfiguration*))(Il2CppBase() + 0x1367274))(this);
	}
	template <typename T = void> T set_Protocol(ArenaServerProtocolType* value) {
		return ((T (*)(ServerConfiguration*, ArenaServerProtocolType*))(Il2CppBase() + 0x136727C))(this, value);
	}
	template <typename T = SlackBotConfiguration*> T get_Slack() {
		return ((T (*)(ServerConfiguration*))(Il2CppBase() + 0x1367284))(this);
	}
	template <typename T = void> T set_Slack(SlackBotConfiguration* value) {
		return ((T (*)(ServerConfiguration*, SlackBotConfiguration*))(Il2CppBase() + 0x136728C))(this, value);
	}
	template <typename T = bool> T get_IsProduction() {
		return ((T (*)(ServerConfiguration*))(Il2CppBase() + 0x1367294))(this);
	}
	template <typename T = void> T set_IsProduction(bool value) {
		return ((T (*)(ServerConfiguration*, bool))(Il2CppBase() + 0x136729C))(this, value);
	}
	template <typename T = Il2CppString*> T get_AutoTestTelegramBotUrl() {
		return ((T (*)(ServerConfiguration*))(Il2CppBase() + 0x13672A8))(this);
	}
	template <typename T = void> T set_AutoTestTelegramBotUrl(Il2CppString* value) {
		return ((T (*)(ServerConfiguration*, Il2CppString*))(Il2CppBase() + 0x13672B0))(this, value);
	}
	template <typename T = Il2CppString*> T get_AutoTestShopJson() {
		return ((T (*)(ServerConfiguration*))(Il2CppBase() + 0x1367330))(this);
	}
	template <typename T = void> T set_AutoTestShopJson(Il2CppString* value) {
		return ((T (*)(ServerConfiguration*, Il2CppString*))(Il2CppBase() + 0x1367338))(this, value);
	}
	template <typename T = int32_t> T get_SeasonPointsMultiplierKoef() {
		return ((T (*)(ServerConfiguration*))(Il2CppBase() + 0x13673B8))(this);
	}
	template <typename T = void> T set_SeasonPointsMultiplierKoef(int32_t value) {
		return ((T (*)(ServerConfiguration*, int32_t))(Il2CppBase() + 0x13673C0))(this, value);
	}
	template <typename T = bool> T get_MatchmakingV2() {
		return ((T (*)(ServerConfiguration*))(Il2CppBase() + 0x13673C8))(this);
	}
	template <typename T = void> T set_MatchmakingV2(bool value) {
		return ((T (*)(ServerConfiguration*, bool))(Il2CppBase() + 0x13673D0))(this, value);
	}
	template <typename T = bool> T get_IsCyclicServer() {
		return ((T (*)(ServerConfiguration*))(Il2CppBase() + 0x13673DC))(this);
	}
	template <typename T = void> T set_IsCyclicServer(bool value) {
		return ((T (*)(ServerConfiguration*, bool))(Il2CppBase() + 0x13673E4))(this, value);
	}
	template <typename T = MapField2Il2CppString*, DungeonSavePeriodPair*>*> T get_DungeonSavePeriod() {
		return ((T (*)(ServerConfiguration*))(Il2CppBase() + 0x13673F0))(this);
	}
	template <typename T = Il2CppString*> T get_KefirPublicKey() {
		return ((T (*)(ServerConfiguration*))(Il2CppBase() + 0x13673F8))(this);
	}
	template <typename T = void> T set_KefirPublicKey(Il2CppString* value) {
		return ((T (*)(ServerConfiguration*, Il2CppString*))(Il2CppBase() + 0x1367400))(this, value);
	}
	template <typename T = RepeatedField1int64_t>*> T get_EnableListPveIDs() {
		return ((T (*)(ServerConfiguration*))(Il2CppBase() + 0x1367480))(this);
	}
	template <typename T = bool> T get_LinkKefirIdEnable() {
		return ((T (*)(ServerConfiguration*))(Il2CppBase() + 0x1367488))(this);
	}
	template <typename T = void> T set_LinkKefirIdEnable(bool value) {
		return ((T (*)(ServerConfiguration*, bool))(Il2CppBase() + 0x1367490))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ServerConfiguration*, Il2CppObject*))(Il2CppBase() + 0x136749C))(this, other);
	}
	template <typename T = bool> T Equals_1(ServerConfiguration* other) {
		return ((T (*)(ServerConfiguration*, ServerConfiguration*))(Il2CppBase() + 0x136750C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ServerConfiguration*))(Il2CppBase() + 0x13677DC))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ServerConfiguration*))(Il2CppBase() + 0x1367AD4))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ServerConfiguration*, uintptr_t))(Il2CppBase() + 0x1367B38))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ServerConfiguration*))(Il2CppBase() + 0x136805C))(this);
	}
	template <typename T = void> T MergeFrom(ServerConfiguration* other) {
		return ((T (*)(ServerConfiguration*, ServerConfiguration*))(Il2CppBase() + 0x13685D0))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ServerConfiguration*, uintptr_t))(Il2CppBase() + 0x13688EC))(this, input);
	}

};

}
