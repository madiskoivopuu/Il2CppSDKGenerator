#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaAcceptUserRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaAcceptUserRequest"));
	}

	 static MessageParser1ProtoModels::ArenaAcceptUserRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaAcceptUserRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& ToWorldIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& toWorldID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& EmailFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& email_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& TokenFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uintptr_t> R& token_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& CellIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& cellID_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& TeamIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& teamID_() {
		return *(R*)((uintptr_t)this + 0x34);
	}
	template <typename R = int32_t> static R& InventoryJsonFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& inventoryJson_() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& WorldStatusFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::WorldStatusType*> R& worldStatus_() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> static R& BattleTagFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& battleTag_() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> static R& ActivePortalFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::Portal*> R& activePortal_() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = int32_t> static R& InGlobalMapFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& inGlobalMap_() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = int32_t> static R& GlobalMapStartFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& globalMapStart_() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = int32_t> static R& GlobalMapEndFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& globalMapEnd_() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = int32_t> static R& EndTimeMoveFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& endTimeMove_() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = int32_t> static R& SpeedMoveFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> R& speedMove_() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = int32_t> static R& LinkedGoogleFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& linkedGoogle_() {
		return *(R*)((uintptr_t)this + 0x7C);
	}
	template <typename R = int32_t> static R& SelectorABFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& selectorAB_() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = int32_t> static R& FcmTokensFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1Il2CppString*>*& _repeated_fcmTokens_codec() {
		return *(FieldCodec1Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1Il2CppString*>*& fcmTokens_() {
		return *(RepeatedField1Il2CppString*>**)((uintptr_t)this + 0x88);
	}
	template <typename R = int32_t> static R& WasKickedFromClanFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& wasKickedFromClan_() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = int32_t> static R& LastRatioPositionFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1int32_t>*& _repeated_lastRatioPosition_codec() {
		return *(FieldCodec1int32_t>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 RepeatedField1int32_t>*& lastRatioPosition_() {
		return *(RepeatedField1int32_t>**)((uintptr_t)this + 0x98);
	}
	template <typename R = int32_t> static R& SessionIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& sessionID_() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = int32_t> static R& InvitesFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1ProtoModels::Invite*>*& _repeated_invites_codec() {
		return *(FieldCodec1ProtoModels::Invite*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 RepeatedField1ProtoModels::Invite*>*& invites_() {
		return *(RepeatedField1ProtoModels::Invite*>**)((uintptr_t)this + 0xA8);
	}
	template <typename R = int32_t> static R& CurrenciesFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::Currencies*> R& currencies_() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = int32_t> static R& MailsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1ProtoModels::Mail*>*& _repeated_mails_codec() {
		return *(FieldCodec1ProtoModels::Mail*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 RepeatedField1ProtoModels::Mail*>*& mails_() {
		return *(RepeatedField1ProtoModels::Mail*>**)((uintptr_t)this + 0xB8);
	}
	template <typename R = int32_t> static R& Dev2DevIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& dev2DevID_() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = int32_t> static R& OccupationFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& occupation_() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = int32_t> static R& AvailableProductsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1ProtoModels::ArenaUserAvailableProduct*>*& _repeated_availableProducts_codec() {
		return *(FieldCodec1ProtoModels::ArenaUserAvailableProduct*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 RepeatedField1ProtoModels::ArenaUserAvailableProduct*>*& availableProducts_() {
		return *(RepeatedField1ProtoModels::ArenaUserAvailableProduct*>**)((uintptr_t)this + 0xD0);
	}
	template <typename R = int32_t> static R& FirstClassFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& firstClass_() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = int32_t> static R& UserMarkTagsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1Il2CppString*>*& _repeated_userMarkTags_codec() {
		return *(FieldCodec1Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 RepeatedField1Il2CppString*>*& userMarkTags_() {
		return *(RepeatedField1Il2CppString*>**)((uintptr_t)this + 0xE0);
	}
	template <typename R = int32_t> static R& LanguageFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& language_() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = int32_t> static R& PlatformFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::PlatformType*> R& platform_() {
		return *(R*)((uintptr_t)this + 0xEC);
	}
	template <typename R = int32_t> static R& PersonalEntitiesFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static CodecIl2CppString*, Il2CppString*>*& _map_personalEntities_codec() {
		return *(CodecIl2CppString*, Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 MapField2Il2CppString*, Il2CppString*>*& personalEntities_() {
		return *(MapField2Il2CppString*, Il2CppString*>**)((uintptr_t)this + 0xF0);
	}
	template <typename R = int32_t> static R& LinkedGamecenterFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& linkedGamecenter_() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = int32_t> static R& StoreCategoriesFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::StoreCategories*> R& storeCategories_() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = int32_t> static R& VipFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::VipUser*> R& vip_() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = int32_t> static R& StoreSalesFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::StoreSales*> R& storeSales_() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = int32_t> static R& BlockedPushesFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1Il2CppString*>*& _repeated_blockedPushes_codec() {
		return *(FieldCodec1Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 RepeatedField1Il2CppString*>*& blockedPushes_() {
		return *(RepeatedField1Il2CppString*>**)((uintptr_t)this + 0x118);
	}
	template <typename R = int32_t> static R& ServerSeasonPointsMultiplierKoefFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& serverSeasonPointsMultiplierKoef_() {
		return *(R*)((uintptr_t)this + 0x120);
	}
	template <typename R = int32_t> static R& MasterAccountBattleTagFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& masterAccountBattleTag_() {
		return *(R*)((uintptr_t)this + 0x128);
	}
	template <typename R = int32_t> static R& MasterAccountNameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& masterAccountName_() {
		return *(R*)((uintptr_t)this + 0x130);
	}
	template <typename R = int32_t> static R& PurchaseHistoryFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1ProtoModels::IncompletePurchaseHistory*>*& _repeated_purchaseHistory_codec() {
		return *(FieldCodec1ProtoModels::IncompletePurchaseHistory*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 RepeatedField1ProtoModels::IncompletePurchaseHistory*>*& purchaseHistory_() {
		return *(RepeatedField1ProtoModels::IncompletePurchaseHistory*>**)((uintptr_t)this + 0x138);
	}
	template <typename R = int32_t> static R& KefirIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& kefirID_() {
		return *(R*)((uintptr_t)this + 0x140);
	}

	 static MessageParser1ProtoModels::ArenaAcceptUserRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaAcceptUserRequest*>* (*)(void *))(Il2CppBase() + 0x1897404))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1897468))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1897588))(this);
	}
	template <typename R = ProtoModels::ArenaAcceptUserRequest*> R Clone() {
		return ((R (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1897D94))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1897DF0))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ArenaAcceptUserRequest*, int64_t))(Il2CppBase() + 0x1897DF8))(this, value);
	}
	template <typename R = int64_t> R get_ToWorldID() {
		return ((R (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1897E00))(this);
	}
	template <typename R = void> R set_ToWorldID(int64_t value) {
		return ((R (*)(ArenaAcceptUserRequest*, int64_t))(Il2CppBase() + 0x1897E08))(this, value);
	}
	template <typename R = Il2CppString*> R get_Email() {
		return ((R (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1897E10))(this);
	}
	template <typename R = void> R set_Email(Il2CppString* value) {
		return ((R (*)(ArenaAcceptUserRequest*, Il2CppString*))(Il2CppBase() + 0x1897E18))(this, value);
	}
	template <typename R = uintptr_t> R get_Token() {
		return ((R (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1897E98))(this);
	}
	template <typename R = void> R set_Token(uintptr_t value) {
		return ((R (*)(ArenaAcceptUserRequest*, uintptr_t))(Il2CppBase() + 0x1897EA0))(this, value);
	}
	template <typename R = int32_t> R get_CellID() {
		return ((R (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1897F20))(this);
	}
	template <typename R = void> R set_CellID(int32_t value) {
		return ((R (*)(ArenaAcceptUserRequest*, int32_t))(Il2CppBase() + 0x1897F28))(this, value);
	}
	template <typename R = int32_t> R get_TeamID() {
		return ((R (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1897F30))(this);
	}
	template <typename R = void> R set_TeamID(int32_t value) {
		return ((R (*)(ArenaAcceptUserRequest*, int32_t))(Il2CppBase() + 0x1897F38))(this, value);
	}
	template <typename R = Il2CppString*> R get_InventoryJson() {
		return ((R (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1897F40))(this);
	}
	template <typename R = void> R set_InventoryJson(Il2CppString* value) {
		return ((R (*)(ArenaAcceptUserRequest*, Il2CppString*))(Il2CppBase() + 0x1897F48))(this, value);
	}
	template <typename R = ProtoModels::WorldStatusType*> R get_WorldStatus() {
		return ((R (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1897FC8))(this);
	}
	template <typename R = void> R set_WorldStatus(ProtoModels::WorldStatusType* value) {
		return ((R (*)(ArenaAcceptUserRequest*, ProtoModels::WorldStatusType*))(Il2CppBase() + 0x1897FD0))(this, value);
	}
	template <typename R = Il2CppString*> R get_BattleTag() {
		return ((R (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1897FD8))(this);
	}
	template <typename R = void> R set_BattleTag(Il2CppString* value) {
		return ((R (*)(ArenaAcceptUserRequest*, Il2CppString*))(Il2CppBase() + 0x1897FE0))(this, value);
	}
	template <typename R = ProtoModels::Portal*> R get_ActivePortal() {
		return ((R (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1898060))(this);
	}
	template <typename R = void> R set_ActivePortal(ProtoModels::Portal* value) {
		return ((R (*)(ArenaAcceptUserRequest*, ProtoModels::Portal*))(Il2CppBase() + 0x1898068))(this, value);
	}
	template <typename R = bool> R get_InGlobalMap() {
		return ((R (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1898070))(this);
	}
	template <typename R = void> R set_InGlobalMap(bool value) {
		return ((R (*)(ArenaAcceptUserRequest*, bool))(Il2CppBase() + 0x1898078))(this, value);
	}
	template <typename R = int64_t> R get_GlobalMapStart() {
		return ((R (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1898084))(this);
	}
	template <typename R = void> R set_GlobalMapStart(int64_t value) {
		return ((R (*)(ArenaAcceptUserRequest*, int64_t))(Il2CppBase() + 0x189808C))(this, value);
	}
	template <typename R = int64_t> R get_GlobalMapEnd() {
		return ((R (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1898094))(this);
	}
	template <typename R = void> R set_GlobalMapEnd(int64_t value) {
		return ((R (*)(ArenaAcceptUserRequest*, int64_t))(Il2CppBase() + 0x189809C))(this, value);
	}
	template <typename R = int64_t> R get_EndTimeMove() {
		return ((R (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x18980A4))(this);
	}
	template <typename R = void> R set_EndTimeMove(int64_t value) {
		return ((R (*)(ArenaAcceptUserRequest*, int64_t))(Il2CppBase() + 0x18980AC))(this, value);
	}
	template <typename R = float> R get_SpeedMove() {
		return ((R (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x18980B4))(this);
	}
	template <typename R = void> R set_SpeedMove(float value) {
		return ((R (*)(ArenaAcceptUserRequest*, float))(Il2CppBase() + 0x18980BC))(this, value);
	}
	template <typename R = bool> R get_LinkedGoogle() {
		return ((R (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x18980C4))(this);
	}
	template <typename R = void> R set_LinkedGoogle(bool value) {
		return ((R (*)(ArenaAcceptUserRequest*, bool))(Il2CppBase() + 0x18980CC))(this, value);
	}
	template <typename R = int32_t> R get_SelectorAB() {
		return ((R (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x18980D8))(this);
	}
	template <typename R = void> R set_SelectorAB(int32_t value) {
		return ((R (*)(ArenaAcceptUserRequest*, int32_t))(Il2CppBase() + 0x18980E0))(this, value);
	}
	 RepeatedField1Il2CppString*>* get_FcmTokens() {
		return ((RepeatedField1Il2CppString*>* (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x18980E8))(this);
	}
	template <typename R = bool> R get_WasKickedFromClan() {
		return ((R (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x18980F0))(this);
	}
	template <typename R = void> R set_WasKickedFromClan(bool value) {
		return ((R (*)(ArenaAcceptUserRequest*, bool))(Il2CppBase() + 0x18980F8))(this, value);
	}
	 RepeatedField1int32_t>* get_LastRatioPosition() {
		return ((RepeatedField1int32_t>* (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1898104))(this);
	}
	template <typename R = int64_t> R get_SessionID() {
		return ((R (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x189810C))(this);
	}
	template <typename R = void> R set_SessionID(int64_t value) {
		return ((R (*)(ArenaAcceptUserRequest*, int64_t))(Il2CppBase() + 0x1898114))(this, value);
	}
	 RepeatedField1ProtoModels::Invite*>* get_Invites() {
		return ((RepeatedField1ProtoModels::Invite*>* (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x189811C))(this);
	}
	template <typename R = ProtoModels::Currencies*> R get_Currencies() {
		return ((R (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1898124))(this);
	}
	template <typename R = void> R set_Currencies(ProtoModels::Currencies* value) {
		return ((R (*)(ArenaAcceptUserRequest*, ProtoModels::Currencies*))(Il2CppBase() + 0x189812C))(this, value);
	}
	 RepeatedField1ProtoModels::Mail*>* get_Mails() {
		return ((RepeatedField1ProtoModels::Mail*>* (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1898134))(this);
	}
	template <typename R = Il2CppString*> R get_Dev2DevID() {
		return ((R (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x189813C))(this);
	}
	template <typename R = void> R set_Dev2DevID(Il2CppString* value) {
		return ((R (*)(ArenaAcceptUserRequest*, Il2CppString*))(Il2CppBase() + 0x1898144))(this, value);
	}
	template <typename R = int32_t> R get_Occupation() {
		return ((R (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x18981C4))(this);
	}
	template <typename R = void> R set_Occupation(int32_t value) {
		return ((R (*)(ArenaAcceptUserRequest*, int32_t))(Il2CppBase() + 0x18981CC))(this, value);
	}
	 RepeatedField1ProtoModels::ArenaUserAvailableProduct*>* get_AvailableProducts() {
		return ((RepeatedField1ProtoModels::ArenaUserAvailableProduct*>* (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x18981D4))(this);
	}
	template <typename R = Il2CppString*> R get_FirstClass() {
		return ((R (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x18981DC))(this);
	}
	template <typename R = void> R set_FirstClass(Il2CppString* value) {
		return ((R (*)(ArenaAcceptUserRequest*, Il2CppString*))(Il2CppBase() + 0x18981E4))(this, value);
	}
	 RepeatedField1Il2CppString*>* get_UserMarkTags() {
		return ((RepeatedField1Il2CppString*>* (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1898264))(this);
	}
	template <typename R = int32_t> R get_Language() {
		return ((R (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x189826C))(this);
	}
	template <typename R = void> R set_Language(int32_t value) {
		return ((R (*)(ArenaAcceptUserRequest*, int32_t))(Il2CppBase() + 0x1898274))(this, value);
	}
	template <typename R = ProtoModels::PlatformType*> R get_Platform() {
		return ((R (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x189827C))(this);
	}
	template <typename R = void> R set_Platform(ProtoModels::PlatformType* value) {
		return ((R (*)(ArenaAcceptUserRequest*, ProtoModels::PlatformType*))(Il2CppBase() + 0x1898284))(this, value);
	}
	 MapField2Il2CppString*, Il2CppString*>* get_PersonalEntities() {
		return ((MapField2Il2CppString*, Il2CppString*>* (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x189828C))(this);
	}
	template <typename R = bool> R get_LinkedGamecenter() {
		return ((R (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1898294))(this);
	}
	template <typename R = void> R set_LinkedGamecenter(bool value) {
		return ((R (*)(ArenaAcceptUserRequest*, bool))(Il2CppBase() + 0x189829C))(this, value);
	}
	template <typename R = ProtoModels::StoreCategories*> R get_StoreCategories() {
		return ((R (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x18982A8))(this);
	}
	template <typename R = void> R set_StoreCategories(ProtoModels::StoreCategories* value) {
		return ((R (*)(ArenaAcceptUserRequest*, ProtoModels::StoreCategories*))(Il2CppBase() + 0x18982B0))(this, value);
	}
	template <typename R = ProtoModels::VipUser*> R get_Vip() {
		return ((R (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x18982C0))(this);
	}
	template <typename R = void> R set_Vip(ProtoModels::VipUser* value) {
		return ((R (*)(ArenaAcceptUserRequest*, ProtoModels::VipUser*))(Il2CppBase() + 0x18982C8))(this, value);
	}
	template <typename R = ProtoModels::StoreSales*> R get_StoreSales() {
		return ((R (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x18982D8))(this);
	}
	template <typename R = void> R set_StoreSales(ProtoModels::StoreSales* value) {
		return ((R (*)(ArenaAcceptUserRequest*, ProtoModels::StoreSales*))(Il2CppBase() + 0x18982E0))(this, value);
	}
	 RepeatedField1Il2CppString*>* get_BlockedPushes() {
		return ((RepeatedField1Il2CppString*>* (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x18982F0))(this);
	}
	template <typename R = int32_t> R get_ServerSeasonPointsMultiplierKoef() {
		return ((R (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x18982F8))(this);
	}
	template <typename R = void> R set_ServerSeasonPointsMultiplierKoef(int32_t value) {
		return ((R (*)(ArenaAcceptUserRequest*, int32_t))(Il2CppBase() + 0x1898300))(this, value);
	}
	template <typename R = Il2CppString*> R get_MasterAccountBattleTag() {
		return ((R (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1898308))(this);
	}
	template <typename R = void> R set_MasterAccountBattleTag(Il2CppString* value) {
		return ((R (*)(ArenaAcceptUserRequest*, Il2CppString*))(Il2CppBase() + 0x1898310))(this, value);
	}
	template <typename R = Il2CppString*> R get_MasterAccountName() {
		return ((R (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1898390))(this);
	}
	template <typename R = void> R set_MasterAccountName(Il2CppString* value) {
		return ((R (*)(ArenaAcceptUserRequest*, Il2CppString*))(Il2CppBase() + 0x1898398))(this, value);
	}
	 RepeatedField1ProtoModels::IncompletePurchaseHistory*>* get_PurchaseHistory() {
		return ((RepeatedField1ProtoModels::IncompletePurchaseHistory*>* (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1898418))(this);
	}
	template <typename R = Il2CppString*> R get_KefirID() {
		return ((R (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1898420))(this);
	}
	template <typename R = void> R set_KefirID(Il2CppString* value) {
		return ((R (*)(ArenaAcceptUserRequest*, Il2CppString*))(Il2CppBase() + 0x1898428))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaAcceptUserRequest*, Il2CppObject*))(Il2CppBase() + 0x18984A8))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaAcceptUserRequest* other) {
		return ((R (*)(ArenaAcceptUserRequest*, ProtoModels::ArenaAcceptUserRequest*))(Il2CppBase() + 0x1898518))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1898998))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1898E8C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaAcceptUserRequest*, uintptr_t))(Il2CppBase() + 0x1898EF0))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaAcceptUserRequest*))(Il2CppBase() + 0x1899848))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaAcceptUserRequest* other) {
		return ((R (*)(ArenaAcceptUserRequest*, ProtoModels::ArenaAcceptUserRequest*))(Il2CppBase() + 0x189A290))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaAcceptUserRequest*, uintptr_t))(Il2CppBase() + 0x189A7D4))(this, input);
	}

};

}
