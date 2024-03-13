#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaAcceptUserRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaAcceptUserRequest"));
	}

	template <typename T = MessageParser1ArenaAcceptUserRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& ToWorldIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& toWorldID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& EmailFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& email_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& TokenFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& token_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& CellIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& cellID_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& TeamIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& teamID_() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> static T& InventoryJsonFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& inventoryJson_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& WorldStatusFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = WorldStatusType*> T& worldStatus_() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& BattleTagFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& battleTag_() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> static T& ActivePortalFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Portal*> T& activePortal_() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> static T& InGlobalMapFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& inGlobalMap_() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> static T& GlobalMapStartFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& globalMapStart_() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> static T& GlobalMapEndFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& globalMapEnd_() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> static T& EndTimeMoveFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& endTimeMove_() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> static T& SpeedMoveFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& speedMove_() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> static T& LinkedGoogleFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& linkedGoogle_() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> static T& SelectorABFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& selectorAB_() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> static T& FcmTokensFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1Il2CppString*>*> static T& _repeated_fcmTokens_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1Il2CppString*>*> T& fcmTokens_() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> static T& WasKickedFromClanFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& wasKickedFromClan_() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> static T& LastRatioPositionFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1int32_t>*> static T& _repeated_lastRatioPosition_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = RepeatedField1int32_t>*> T& lastRatioPosition_() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> static T& SessionIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& sessionID_() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> static T& InvitesFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1Invite*>*> static T& _repeated_invites_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = RepeatedField1Invite*>*> T& invites_() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> static T& CurrenciesFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Currencies*> T& currencies_() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> static T& MailsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1Mail*>*> static T& _repeated_mails_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = RepeatedField1Mail*>*> T& mails_() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> static T& Dev2DevIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& dev2DevID_() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> static T& OccupationFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& occupation_() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> static T& AvailableProductsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1ArenaUserAvailableProduct*>*> static T& _repeated_availableProducts_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = RepeatedField1ArenaUserAvailableProduct*>*> T& availableProducts_() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> static T& FirstClassFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& firstClass_() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = int32_t> static T& UserMarkTagsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1Il2CppString*>*> static T& _repeated_userMarkTags_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = RepeatedField1Il2CppString*>*> T& userMarkTags_() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = int32_t> static T& LanguageFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& language_() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = int32_t> static T& PlatformFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = PlatformType*> T& platform_() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = int32_t> static T& PersonalEntitiesFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = CodecIl2CppString*, Il2CppString*>*> static T& _map_personalEntities_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = MapField2Il2CppString*, Il2CppString*>*> T& personalEntities_() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = int32_t> static T& LinkedGamecenterFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& linkedGamecenter_() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = int32_t> static T& StoreCategoriesFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = StoreCategories*> T& storeCategories_() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = int32_t> static T& VipFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = VipUser*> T& vip_() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = int32_t> static T& StoreSalesFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = StoreSales*> T& storeSales_() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = int32_t> static T& BlockedPushesFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1Il2CppString*>*> static T& _repeated_blockedPushes_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = RepeatedField1Il2CppString*>*> T& blockedPushes_() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = int32_t> static T& ServerSeasonPointsMultiplierKoefFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& serverSeasonPointsMultiplierKoef_() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = int32_t> static T& MasterAccountBattleTagFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& masterAccountBattleTag_() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = int32_t> static T& MasterAccountNameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& masterAccountName_() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = int32_t> static T& PurchaseHistoryFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1IncompletePurchaseHistory*>*> static T& _repeated_purchaseHistory_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = RepeatedField1IncompletePurchaseHistory*>*> T& purchaseHistory_() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = int32_t> static T& KefirIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& kefirID_() {
		return *(T*)((uintptr_t)this + 0x140);
	}

	template <typename T = MessageParser1ArenaAcceptUserRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1897404))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1897468))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1897588))(this);
	}
	template <typename T = ArenaAcceptUserRequest*> T Clone() {
		return ((T (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1897D94))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1897DF0))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaAcceptUserRequest*, int64_t))(Il2CppBase() + 0x1897DF8))(this, value);
	}
	template <typename T = int64_t> T get_ToWorldID() {
		return ((T (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1897E00))(this);
	}
	template <typename T = void> T set_ToWorldID(int64_t value) {
		return ((T (*)(ArenaAcceptUserRequest*, int64_t))(Il2CppBase() + 0x1897E08))(this, value);
	}
	template <typename T = Il2CppString*> T get_Email() {
		return ((T (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1897E10))(this);
	}
	template <typename T = void> T set_Email(Il2CppString* value) {
		return ((T (*)(ArenaAcceptUserRequest*, Il2CppString*))(Il2CppBase() + 0x1897E18))(this, value);
	}
	template <typename T = uintptr_t> T get_Token() {
		return ((T (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1897E98))(this);
	}
	template <typename T = void> T set_Token(uintptr_t value) {
		return ((T (*)(ArenaAcceptUserRequest*, uintptr_t))(Il2CppBase() + 0x1897EA0))(this, value);
	}
	template <typename T = int32_t> T get_CellID() {
		return ((T (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1897F20))(this);
	}
	template <typename T = void> T set_CellID(int32_t value) {
		return ((T (*)(ArenaAcceptUserRequest*, int32_t))(Il2CppBase() + 0x1897F28))(this, value);
	}
	template <typename T = int32_t> T get_TeamID() {
		return ((T (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1897F30))(this);
	}
	template <typename T = void> T set_TeamID(int32_t value) {
		return ((T (*)(ArenaAcceptUserRequest*, int32_t))(Il2CppBase() + 0x1897F38))(this, value);
	}
	template <typename T = Il2CppString*> T get_InventoryJson() {
		return ((T (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1897F40))(this);
	}
	template <typename T = void> T set_InventoryJson(Il2CppString* value) {
		return ((T (*)(ArenaAcceptUserRequest*, Il2CppString*))(Il2CppBase() + 0x1897F48))(this, value);
	}
	template <typename T = WorldStatusType*> T get_WorldStatus() {
		return ((T (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1897FC8))(this);
	}
	template <typename T = void> T set_WorldStatus(WorldStatusType* value) {
		return ((T (*)(ArenaAcceptUserRequest*, WorldStatusType*))(Il2CppBase() + 0x1897FD0))(this, value);
	}
	template <typename T = Il2CppString*> T get_BattleTag() {
		return ((T (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1897FD8))(this);
	}
	template <typename T = void> T set_BattleTag(Il2CppString* value) {
		return ((T (*)(ArenaAcceptUserRequest*, Il2CppString*))(Il2CppBase() + 0x1897FE0))(this, value);
	}
	template <typename T = Portal*> T get_ActivePortal() {
		return ((T (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1898060))(this);
	}
	template <typename T = void> T set_ActivePortal(Portal* value) {
		return ((T (*)(ArenaAcceptUserRequest*, Portal*))(Il2CppBase() + 0x1898068))(this, value);
	}
	template <typename T = bool> T get_InGlobalMap() {
		return ((T (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1898070))(this);
	}
	template <typename T = void> T set_InGlobalMap(bool value) {
		return ((T (*)(ArenaAcceptUserRequest*, bool))(Il2CppBase() + 0x1898078))(this, value);
	}
	template <typename T = int64_t> T get_GlobalMapStart() {
		return ((T (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1898084))(this);
	}
	template <typename T = void> T set_GlobalMapStart(int64_t value) {
		return ((T (*)(ArenaAcceptUserRequest*, int64_t))(Il2CppBase() + 0x189808C))(this, value);
	}
	template <typename T = int64_t> T get_GlobalMapEnd() {
		return ((T (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1898094))(this);
	}
	template <typename T = void> T set_GlobalMapEnd(int64_t value) {
		return ((T (*)(ArenaAcceptUserRequest*, int64_t))(Il2CppBase() + 0x189809C))(this, value);
	}
	template <typename T = int64_t> T get_EndTimeMove() {
		return ((T (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x18980A4))(this);
	}
	template <typename T = void> T set_EndTimeMove(int64_t value) {
		return ((T (*)(ArenaAcceptUserRequest*, int64_t))(Il2CppBase() + 0x18980AC))(this, value);
	}
	template <typename T = float> T get_SpeedMove() {
		return ((T (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x18980B4))(this);
	}
	template <typename T = void> T set_SpeedMove(float value) {
		return ((T (*)(ArenaAcceptUserRequest*, float))(Il2CppBase() + 0x18980BC))(this, value);
	}
	template <typename T = bool> T get_LinkedGoogle() {
		return ((T (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x18980C4))(this);
	}
	template <typename T = void> T set_LinkedGoogle(bool value) {
		return ((T (*)(ArenaAcceptUserRequest*, bool))(Il2CppBase() + 0x18980CC))(this, value);
	}
	template <typename T = int32_t> T get_SelectorAB() {
		return ((T (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x18980D8))(this);
	}
	template <typename T = void> T set_SelectorAB(int32_t value) {
		return ((T (*)(ArenaAcceptUserRequest*, int32_t))(Il2CppBase() + 0x18980E0))(this, value);
	}
	template <typename T = RepeatedField1Il2CppString*>*> T get_FcmTokens() {
		return ((T (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x18980E8))(this);
	}
	template <typename T = bool> T get_WasKickedFromClan() {
		return ((T (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x18980F0))(this);
	}
	template <typename T = void> T set_WasKickedFromClan(bool value) {
		return ((T (*)(ArenaAcceptUserRequest*, bool))(Il2CppBase() + 0x18980F8))(this, value);
	}
	template <typename T = RepeatedField1int32_t>*> T get_LastRatioPosition() {
		return ((T (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1898104))(this);
	}
	template <typename T = int64_t> T get_SessionID() {
		return ((T (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x189810C))(this);
	}
	template <typename T = void> T set_SessionID(int64_t value) {
		return ((T (*)(ArenaAcceptUserRequest*, int64_t))(Il2CppBase() + 0x1898114))(this, value);
	}
	template <typename T = RepeatedField1Invite*>*> T get_Invites() {
		return ((T (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x189811C))(this);
	}
	template <typename T = Currencies*> T get_Currencies() {
		return ((T (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1898124))(this);
	}
	template <typename T = void> T set_Currencies(Currencies* value) {
		return ((T (*)(ArenaAcceptUserRequest*, Currencies*))(Il2CppBase() + 0x189812C))(this, value);
	}
	template <typename T = RepeatedField1Mail*>*> T get_Mails() {
		return ((T (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1898134))(this);
	}
	template <typename T = Il2CppString*> T get_Dev2DevID() {
		return ((T (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x189813C))(this);
	}
	template <typename T = void> T set_Dev2DevID(Il2CppString* value) {
		return ((T (*)(ArenaAcceptUserRequest*, Il2CppString*))(Il2CppBase() + 0x1898144))(this, value);
	}
	template <typename T = int32_t> T get_Occupation() {
		return ((T (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x18981C4))(this);
	}
	template <typename T = void> T set_Occupation(int32_t value) {
		return ((T (*)(ArenaAcceptUserRequest*, int32_t))(Il2CppBase() + 0x18981CC))(this, value);
	}
	template <typename T = RepeatedField1ArenaUserAvailableProduct*>*> T get_AvailableProducts() {
		return ((T (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x18981D4))(this);
	}
	template <typename T = Il2CppString*> T get_FirstClass() {
		return ((T (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x18981DC))(this);
	}
	template <typename T = void> T set_FirstClass(Il2CppString* value) {
		return ((T (*)(ArenaAcceptUserRequest*, Il2CppString*))(Il2CppBase() + 0x18981E4))(this, value);
	}
	template <typename T = RepeatedField1Il2CppString*>*> T get_UserMarkTags() {
		return ((T (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1898264))(this);
	}
	template <typename T = int32_t> T get_Language() {
		return ((T (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x189826C))(this);
	}
	template <typename T = void> T set_Language(int32_t value) {
		return ((T (*)(ArenaAcceptUserRequest*, int32_t))(Il2CppBase() + 0x1898274))(this, value);
	}
	template <typename T = PlatformType*> T get_Platform() {
		return ((T (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x189827C))(this);
	}
	template <typename T = void> T set_Platform(PlatformType* value) {
		return ((T (*)(ArenaAcceptUserRequest*, PlatformType*))(Il2CppBase() + 0x1898284))(this, value);
	}
	template <typename T = MapField2Il2CppString*, Il2CppString*>*> T get_PersonalEntities() {
		return ((T (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x189828C))(this);
	}
	template <typename T = bool> T get_LinkedGamecenter() {
		return ((T (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1898294))(this);
	}
	template <typename T = void> T set_LinkedGamecenter(bool value) {
		return ((T (*)(ArenaAcceptUserRequest*, bool))(Il2CppBase() + 0x189829C))(this, value);
	}
	template <typename T = StoreCategories*> T get_StoreCategories() {
		return ((T (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x18982A8))(this);
	}
	template <typename T = void> T set_StoreCategories(StoreCategories* value) {
		return ((T (*)(ArenaAcceptUserRequest*, StoreCategories*))(Il2CppBase() + 0x18982B0))(this, value);
	}
	template <typename T = VipUser*> T get_Vip() {
		return ((T (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x18982C0))(this);
	}
	template <typename T = void> T set_Vip(VipUser* value) {
		return ((T (*)(ArenaAcceptUserRequest*, VipUser*))(Il2CppBase() + 0x18982C8))(this, value);
	}
	template <typename T = StoreSales*> T get_StoreSales() {
		return ((T (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x18982D8))(this);
	}
	template <typename T = void> T set_StoreSales(StoreSales* value) {
		return ((T (*)(ArenaAcceptUserRequest*, StoreSales*))(Il2CppBase() + 0x18982E0))(this, value);
	}
	template <typename T = RepeatedField1Il2CppString*>*> T get_BlockedPushes() {
		return ((T (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x18982F0))(this);
	}
	template <typename T = int32_t> T get_ServerSeasonPointsMultiplierKoef() {
		return ((T (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x18982F8))(this);
	}
	template <typename T = void> T set_ServerSeasonPointsMultiplierKoef(int32_t value) {
		return ((T (*)(ArenaAcceptUserRequest*, int32_t))(Il2CppBase() + 0x1898300))(this, value);
	}
	template <typename T = Il2CppString*> T get_MasterAccountBattleTag() {
		return ((T (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1898308))(this);
	}
	template <typename T = void> T set_MasterAccountBattleTag(Il2CppString* value) {
		return ((T (*)(ArenaAcceptUserRequest*, Il2CppString*))(Il2CppBase() + 0x1898310))(this, value);
	}
	template <typename T = Il2CppString*> T get_MasterAccountName() {
		return ((T (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1898390))(this);
	}
	template <typename T = void> T set_MasterAccountName(Il2CppString* value) {
		return ((T (*)(ArenaAcceptUserRequest*, Il2CppString*))(Il2CppBase() + 0x1898398))(this, value);
	}
	template <typename T = RepeatedField1IncompletePurchaseHistory*>*> T get_PurchaseHistory() {
		return ((T (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1898418))(this);
	}
	template <typename T = Il2CppString*> T get_KefirID() {
		return ((T (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1898420))(this);
	}
	template <typename T = void> T set_KefirID(Il2CppString* value) {
		return ((T (*)(ArenaAcceptUserRequest*, Il2CppString*))(Il2CppBase() + 0x1898428))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaAcceptUserRequest*, Il2CppObject*))(Il2CppBase() + 0x18984A8))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaAcceptUserRequest* other) {
		return ((T (*)(ArenaAcceptUserRequest*, ArenaAcceptUserRequest*))(Il2CppBase() + 0x1898518))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1898998))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1898E8C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaAcceptUserRequest*, uintptr_t))(Il2CppBase() + 0x1898EF0))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1899848))(this);
	}
	template <typename T = void> T MergeFrom(ArenaAcceptUserRequest* other) {
		return ((T (*)(ArenaAcceptUserRequest*, ArenaAcceptUserRequest*))(Il2CppBase() + 0x189A290))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaAcceptUserRequest*, uintptr_t))(Il2CppBase() + 0x189A7D4))(this, input);
	}

};

}
