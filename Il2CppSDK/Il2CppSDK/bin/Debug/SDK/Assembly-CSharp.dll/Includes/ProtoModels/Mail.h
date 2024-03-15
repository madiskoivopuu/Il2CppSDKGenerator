#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class Mail
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "Mail"));
	}

	 static MessageParser1ProtoModels::Mail*>*& _parser() {
		return *(MessageParser1ProtoModels::Mail*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& MailIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& mailID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& ExpirationFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& expiration_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& ItemFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& item_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& NumbersFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& numbers_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& CreateTimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& createTime_() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& BonusFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& bonus_() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> static R& IsItemFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& isItem_() {
		return *(R*)((uintptr_t)this + 0x41);
	}
	template <typename R = int32_t> static R& PositionFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& position_() {
		return *(R*)((uintptr_t)this + 0x44);
	}
	template <typename R = int32_t> static R& RatingFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& rating_() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> static R& TourneyIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& tourneyID_() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = int32_t> static R& IsOnSaleFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& isOnSale_() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = int32_t> static R& TextFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& text_() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = int32_t> static R& SupportMessageIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& supportMessageID_() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = int32_t> static R& DurabilityFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& durability_() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = int32_t> static R& GuildJoinAcceptFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& guildJoinAccept_() {
		return *(R*)((uintptr_t)this + 0x74);
	}
	template <typename R = int32_t> static R& GuildIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& guildID_() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = int32_t> static R& FromCyclicFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& fromCyclic_() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = int32_t> static R& InfoWindowFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& infoWindow_() {
		return *(R*)((uintptr_t)this + 0x88);
	}

	 static MessageParser1ProtoModels::Mail*>* get_Parser() {
		return ((MessageParser1ProtoModels::Mail*>* (*)(void *))(Il2CppBase() + 0x1A496D0))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1A49734))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(Mail*))(Il2CppBase() + 0x1A49854))(this);
	}
	template <typename R = ProtoModels::Mail*> R Clone() {
		return ((R (*)(Mail*))(Il2CppBase() + 0x1A49A00))(this);
	}
	template <typename R = int64_t> R get_MailID() {
		return ((R (*)(Mail*))(Il2CppBase() + 0x1A49A5C))(this);
	}
	template <typename R = void> R set_MailID(int64_t value) {
		return ((R (*)(Mail*, int64_t))(Il2CppBase() + 0x1A49A64))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(Mail*))(Il2CppBase() + 0x1A49A6C))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(Mail*, int64_t))(Il2CppBase() + 0x1A49A74))(this, value);
	}
	template <typename R = int64_t> R get_Expiration() {
		return ((R (*)(Mail*))(Il2CppBase() + 0x1A49A7C))(this);
	}
	template <typename R = void> R set_Expiration(int64_t value) {
		return ((R (*)(Mail*, int64_t))(Il2CppBase() + 0x1A49A84))(this, value);
	}
	template <typename R = Il2CppString*> R get_Item() {
		return ((R (*)(Mail*))(Il2CppBase() + 0x1A49A8C))(this);
	}
	template <typename R = void> R set_Item(Il2CppString* value) {
		return ((R (*)(Mail*, Il2CppString*))(Il2CppBase() + 0x1A49A94))(this, value);
	}
	template <typename R = int32_t> R get_Numbers() {
		return ((R (*)(Mail*))(Il2CppBase() + 0x1A49B14))(this);
	}
	template <typename R = void> R set_Numbers(int32_t value) {
		return ((R (*)(Mail*, int32_t))(Il2CppBase() + 0x1A49B1C))(this, value);
	}
	template <typename R = int64_t> R get_CreateTime() {
		return ((R (*)(Mail*))(Il2CppBase() + 0x1A49B24))(this);
	}
	template <typename R = void> R set_CreateTime(int64_t value) {
		return ((R (*)(Mail*, int64_t))(Il2CppBase() + 0x1A49B2C))(this, value);
	}
	template <typename R = bool> R get_Bonus() {
		return ((R (*)(Mail*))(Il2CppBase() + 0x1A49B34))(this);
	}
	template <typename R = void> R set_Bonus(bool value) {
		return ((R (*)(Mail*, bool))(Il2CppBase() + 0x1A49B3C))(this, value);
	}
	template <typename R = bool> R get_IsItem() {
		return ((R (*)(Mail*))(Il2CppBase() + 0x1A49B48))(this);
	}
	template <typename R = void> R set_IsItem(bool value) {
		return ((R (*)(Mail*, bool))(Il2CppBase() + 0x1A49B50))(this, value);
	}
	template <typename R = int32_t> R get_Position() {
		return ((R (*)(Mail*))(Il2CppBase() + 0x1A49B5C))(this);
	}
	template <typename R = void> R set_Position(int32_t value) {
		return ((R (*)(Mail*, int32_t))(Il2CppBase() + 0x1A49B64))(this, value);
	}
	template <typename R = int32_t> R get_Rating() {
		return ((R (*)(Mail*))(Il2CppBase() + 0x1A49B6C))(this);
	}
	template <typename R = void> R set_Rating(int32_t value) {
		return ((R (*)(Mail*, int32_t))(Il2CppBase() + 0x1A49B74))(this, value);
	}
	template <typename R = int64_t> R get_TourneyID() {
		return ((R (*)(Mail*))(Il2CppBase() + 0x1A49B7C))(this);
	}
	template <typename R = void> R set_TourneyID(int64_t value) {
		return ((R (*)(Mail*, int64_t))(Il2CppBase() + 0x1A49B84))(this, value);
	}
	template <typename R = bool> R get_IsOnSale() {
		return ((R (*)(Mail*))(Il2CppBase() + 0x1A49B8C))(this);
	}
	template <typename R = void> R set_IsOnSale(bool value) {
		return ((R (*)(Mail*, bool))(Il2CppBase() + 0x1A49B94))(this, value);
	}
	template <typename R = Il2CppString*> R get_Text() {
		return ((R (*)(Mail*))(Il2CppBase() + 0x1A49BA0))(this);
	}
	template <typename R = void> R set_Text(Il2CppString* value) {
		return ((R (*)(Mail*, Il2CppString*))(Il2CppBase() + 0x1A49BA8))(this, value);
	}
	template <typename R = int64_t> R get_SupportMessageID() {
		return ((R (*)(Mail*))(Il2CppBase() + 0x1A49C28))(this);
	}
	template <typename R = void> R set_SupportMessageID(int64_t value) {
		return ((R (*)(Mail*, int64_t))(Il2CppBase() + 0x1A49C30))(this, value);
	}
	template <typename R = int32_t> R get_Durability() {
		return ((R (*)(Mail*))(Il2CppBase() + 0x1A49C38))(this);
	}
	template <typename R = void> R set_Durability(int32_t value) {
		return ((R (*)(Mail*, int32_t))(Il2CppBase() + 0x1A49C40))(this, value);
	}
	template <typename R = bool> R get_GuildJoinAccept() {
		return ((R (*)(Mail*))(Il2CppBase() + 0x1A49C48))(this);
	}
	template <typename R = void> R set_GuildJoinAccept(bool value) {
		return ((R (*)(Mail*, bool))(Il2CppBase() + 0x1A49C50))(this, value);
	}
	template <typename R = int64_t> R get_GuildID() {
		return ((R (*)(Mail*))(Il2CppBase() + 0x1A49C5C))(this);
	}
	template <typename R = void> R set_GuildID(int64_t value) {
		return ((R (*)(Mail*, int64_t))(Il2CppBase() + 0x1A49C64))(this, value);
	}
	template <typename R = bool> R get_FromCyclic() {
		return ((R (*)(Mail*))(Il2CppBase() + 0x1A49C6C))(this);
	}
	template <typename R = void> R set_FromCyclic(bool value) {
		return ((R (*)(Mail*, bool))(Il2CppBase() + 0x1A49C74))(this, value);
	}
	template <typename R = Il2CppString*> R get_InfoWindow() {
		return ((R (*)(Mail*))(Il2CppBase() + 0x1A49C80))(this);
	}
	template <typename R = void> R set_InfoWindow(Il2CppString* value) {
		return ((R (*)(Mail*, Il2CppString*))(Il2CppBase() + 0x1A49C88))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(Mail*, Il2CppObject*))(Il2CppBase() + 0x1A49D08))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::Mail* other) {
		return ((R (*)(Mail*, ProtoModels::Mail*))(Il2CppBase() + 0x1A49D78))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(Mail*))(Il2CppBase() + 0x1A49F44))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(Mail*))(Il2CppBase() + 0x1A4A1B8))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(Mail*, uintptr_t))(Il2CppBase() + 0x1A4A21C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(Mail*))(Il2CppBase() + 0x1A4A5B4))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::Mail* other) {
		return ((R (*)(Mail*, ProtoModels::Mail*))(Il2CppBase() + 0x1A4A9B4))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(Mail*, uintptr_t))(Il2CppBase() + 0x1A4AAEC))(this, input);
	}

};

}
