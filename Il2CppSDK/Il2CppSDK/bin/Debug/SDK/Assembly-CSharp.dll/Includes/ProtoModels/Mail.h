#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class Mail
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "Mail"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MailIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& mailID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& ExpirationFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& expiration_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& ItemFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& item_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& NumbersFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& numbers_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& CreateTimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& createTime_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& BonusFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& bonus_() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& IsItemFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& isItem_() {
		return *(T*)((uintptr_t)this + 0x41);
	}
	template <typename T = int32_t> static T& PositionFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& position_() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> static T& RatingFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& rating_() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> static T& TourneyIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& tourneyID_() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> static T& IsOnSaleFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& isOnSale_() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> static T& TextFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& text_() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> static T& SupportMessageIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& supportMessageID_() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> static T& DurabilityFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& durability_() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> static T& GuildJoinAcceptFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& guildJoinAccept_() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> static T& GuildIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& guildID_() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> static T& FromCyclicFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& fromCyclic_() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> static T& InfoWindowFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& infoWindow_() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A496D0))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A49734))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(Mail*))(Il2CppBase() + 0x1A49854))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(Mail*))(Il2CppBase() + 0x1A49A00))(this);
	}
	template <typename T = int64_t> T get_MailID() {
		return ((T (*)(Mail*))(Il2CppBase() + 0x1A49A5C))(this);
	}
	template <typename T = void> T set_MailID(int64_t value) {
		return ((T (*)(Mail*, int64_t))(Il2CppBase() + 0x1A49A64))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(Mail*))(Il2CppBase() + 0x1A49A6C))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(Mail*, int64_t))(Il2CppBase() + 0x1A49A74))(this, value);
	}
	template <typename T = int64_t> T get_Expiration() {
		return ((T (*)(Mail*))(Il2CppBase() + 0x1A49A7C))(this);
	}
	template <typename T = void> T set_Expiration(int64_t value) {
		return ((T (*)(Mail*, int64_t))(Il2CppBase() + 0x1A49A84))(this, value);
	}
	template <typename T = Il2CppString*> T get_Item() {
		return ((T (*)(Mail*))(Il2CppBase() + 0x1A49A8C))(this);
	}
	template <typename T = void> T set_Item(Il2CppString* value) {
		return ((T (*)(Mail*, Il2CppString*))(Il2CppBase() + 0x1A49A94))(this, value);
	}
	template <typename T = int32_t> T get_Numbers() {
		return ((T (*)(Mail*))(Il2CppBase() + 0x1A49B14))(this);
	}
	template <typename T = void> T set_Numbers(int32_t value) {
		return ((T (*)(Mail*, int32_t))(Il2CppBase() + 0x1A49B1C))(this, value);
	}
	template <typename T = int64_t> T get_CreateTime() {
		return ((T (*)(Mail*))(Il2CppBase() + 0x1A49B24))(this);
	}
	template <typename T = void> T set_CreateTime(int64_t value) {
		return ((T (*)(Mail*, int64_t))(Il2CppBase() + 0x1A49B2C))(this, value);
	}
	template <typename T = bool> T get_Bonus() {
		return ((T (*)(Mail*))(Il2CppBase() + 0x1A49B34))(this);
	}
	template <typename T = void> T set_Bonus(bool value) {
		return ((T (*)(Mail*, bool))(Il2CppBase() + 0x1A49B3C))(this, value);
	}
	template <typename T = bool> T get_IsItem() {
		return ((T (*)(Mail*))(Il2CppBase() + 0x1A49B48))(this);
	}
	template <typename T = void> T set_IsItem(bool value) {
		return ((T (*)(Mail*, bool))(Il2CppBase() + 0x1A49B50))(this, value);
	}
	template <typename T = int32_t> T get_Position() {
		return ((T (*)(Mail*))(Il2CppBase() + 0x1A49B5C))(this);
	}
	template <typename T = void> T set_Position(int32_t value) {
		return ((T (*)(Mail*, int32_t))(Il2CppBase() + 0x1A49B64))(this, value);
	}
	template <typename T = int32_t> T get_Rating() {
		return ((T (*)(Mail*))(Il2CppBase() + 0x1A49B6C))(this);
	}
	template <typename T = void> T set_Rating(int32_t value) {
		return ((T (*)(Mail*, int32_t))(Il2CppBase() + 0x1A49B74))(this, value);
	}
	template <typename T = int64_t> T get_TourneyID() {
		return ((T (*)(Mail*))(Il2CppBase() + 0x1A49B7C))(this);
	}
	template <typename T = void> T set_TourneyID(int64_t value) {
		return ((T (*)(Mail*, int64_t))(Il2CppBase() + 0x1A49B84))(this, value);
	}
	template <typename T = bool> T get_IsOnSale() {
		return ((T (*)(Mail*))(Il2CppBase() + 0x1A49B8C))(this);
	}
	template <typename T = void> T set_IsOnSale(bool value) {
		return ((T (*)(Mail*, bool))(Il2CppBase() + 0x1A49B94))(this, value);
	}
	template <typename T = Il2CppString*> T get_Text() {
		return ((T (*)(Mail*))(Il2CppBase() + 0x1A49BA0))(this);
	}
	template <typename T = void> T set_Text(Il2CppString* value) {
		return ((T (*)(Mail*, Il2CppString*))(Il2CppBase() + 0x1A49BA8))(this, value);
	}
	template <typename T = int64_t> T get_SupportMessageID() {
		return ((T (*)(Mail*))(Il2CppBase() + 0x1A49C28))(this);
	}
	template <typename T = void> T set_SupportMessageID(int64_t value) {
		return ((T (*)(Mail*, int64_t))(Il2CppBase() + 0x1A49C30))(this, value);
	}
	template <typename T = int32_t> T get_Durability() {
		return ((T (*)(Mail*))(Il2CppBase() + 0x1A49C38))(this);
	}
	template <typename T = void> T set_Durability(int32_t value) {
		return ((T (*)(Mail*, int32_t))(Il2CppBase() + 0x1A49C40))(this, value);
	}
	template <typename T = bool> T get_GuildJoinAccept() {
		return ((T (*)(Mail*))(Il2CppBase() + 0x1A49C48))(this);
	}
	template <typename T = void> T set_GuildJoinAccept(bool value) {
		return ((T (*)(Mail*, bool))(Il2CppBase() + 0x1A49C50))(this, value);
	}
	template <typename T = int64_t> T get_GuildID() {
		return ((T (*)(Mail*))(Il2CppBase() + 0x1A49C5C))(this);
	}
	template <typename T = void> T set_GuildID(int64_t value) {
		return ((T (*)(Mail*, int64_t))(Il2CppBase() + 0x1A49C64))(this, value);
	}
	template <typename T = bool> T get_FromCyclic() {
		return ((T (*)(Mail*))(Il2CppBase() + 0x1A49C6C))(this);
	}
	template <typename T = void> T set_FromCyclic(bool value) {
		return ((T (*)(Mail*, bool))(Il2CppBase() + 0x1A49C74))(this, value);
	}
	template <typename T = Il2CppString*> T get_InfoWindow() {
		return ((T (*)(Mail*))(Il2CppBase() + 0x1A49C80))(this);
	}
	template <typename T = void> T set_InfoWindow(Il2CppString* value) {
		return ((T (*)(Mail*, Il2CppString*))(Il2CppBase() + 0x1A49C88))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(Mail*, uintptr_t))(Il2CppBase() + 0x1A49D08))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(Mail*, uintptr_t))(Il2CppBase() + 0x1A49D78))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Mail*))(Il2CppBase() + 0x1A49F44))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Mail*))(Il2CppBase() + 0x1A4A1B8))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(Mail*, uintptr_t))(Il2CppBase() + 0x1A4A21C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(Mail*))(Il2CppBase() + 0x1A4A5B4))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(Mail*, uintptr_t))(Il2CppBase() + 0x1A4A9B4))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(Mail*, uintptr_t))(Il2CppBase() + 0x1A4AAEC))(this, input);
	}

};

}
