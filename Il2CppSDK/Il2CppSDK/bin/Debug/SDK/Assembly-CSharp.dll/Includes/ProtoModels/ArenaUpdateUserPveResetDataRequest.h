#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUpdateUserPveResetDataRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUpdateUserPveResetDataRequest"));
	}

	 static MessageParser1ProtoModels::ArenaUpdateUserPveResetDataRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaUpdateUserPveResetDataRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& ResetTimeUnixFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& resetTimeUnix_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& ResetCountFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& resetCount_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& CoolDownTimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& coolDownTime_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& CurrencyFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& currency_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& PriceFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& price_() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	 static MessageParser1ProtoModels::ArenaUpdateUserPveResetDataRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaUpdateUserPveResetDataRequest*>* (*)(void *))(Il2CppBase() + 0xF56528))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0xF5658C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaUpdateUserPveResetDataRequest*))(Il2CppBase() + 0xF566AC))(this);
	}
	template <typename R = ProtoModels::ArenaUpdateUserPveResetDataRequest*> R Clone() {
		return ((R (*)(ArenaUpdateUserPveResetDataRequest*))(Il2CppBase() + 0xF567C4))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ArenaUpdateUserPveResetDataRequest*))(Il2CppBase() + 0xF56820))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ArenaUpdateUserPveResetDataRequest*, int64_t))(Il2CppBase() + 0xF56828))(this, value);
	}
	template <typename R = int64_t> R get_ResetTimeUnix() {
		return ((R (*)(ArenaUpdateUserPveResetDataRequest*))(Il2CppBase() + 0xF56830))(this);
	}
	template <typename R = void> R set_ResetTimeUnix(int64_t value) {
		return ((R (*)(ArenaUpdateUserPveResetDataRequest*, int64_t))(Il2CppBase() + 0xF56838))(this, value);
	}
	template <typename R = int32_t> R get_ResetCount() {
		return ((R (*)(ArenaUpdateUserPveResetDataRequest*))(Il2CppBase() + 0xF56840))(this);
	}
	template <typename R = void> R set_ResetCount(int32_t value) {
		return ((R (*)(ArenaUpdateUserPveResetDataRequest*, int32_t))(Il2CppBase() + 0xF56848))(this, value);
	}
	template <typename R = int64_t> R get_CoolDownTime() {
		return ((R (*)(ArenaUpdateUserPveResetDataRequest*))(Il2CppBase() + 0xF56850))(this);
	}
	template <typename R = void> R set_CoolDownTime(int64_t value) {
		return ((R (*)(ArenaUpdateUserPveResetDataRequest*, int64_t))(Il2CppBase() + 0xF56858))(this, value);
	}
	template <typename R = Il2CppString*> R get_Currency() {
		return ((R (*)(ArenaUpdateUserPveResetDataRequest*))(Il2CppBase() + 0xF56860))(this);
	}
	template <typename R = void> R set_Currency(Il2CppString* value) {
		return ((R (*)(ArenaUpdateUserPveResetDataRequest*, Il2CppString*))(Il2CppBase() + 0xF56868))(this, value);
	}
	template <typename R = int32_t> R get_Price() {
		return ((R (*)(ArenaUpdateUserPveResetDataRequest*))(Il2CppBase() + 0xF568E8))(this);
	}
	template <typename R = void> R set_Price(int32_t value) {
		return ((R (*)(ArenaUpdateUserPveResetDataRequest*, int32_t))(Il2CppBase() + 0xF568F0))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaUpdateUserPveResetDataRequest*, Il2CppObject*))(Il2CppBase() + 0xF568F8))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaUpdateUserPveResetDataRequest* other) {
		return ((R (*)(ArenaUpdateUserPveResetDataRequest*, ProtoModels::ArenaUpdateUserPveResetDataRequest*))(Il2CppBase() + 0xF56968))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaUpdateUserPveResetDataRequest*))(Il2CppBase() + 0xF56A08))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaUpdateUserPveResetDataRequest*))(Il2CppBase() + 0xF56AF0))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaUpdateUserPveResetDataRequest*, uintptr_t))(Il2CppBase() + 0xF56B54))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaUpdateUserPveResetDataRequest*))(Il2CppBase() + 0xF56C90))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaUpdateUserPveResetDataRequest* other) {
		return ((R (*)(ArenaUpdateUserPveResetDataRequest*, ProtoModels::ArenaUpdateUserPveResetDataRequest*))(Il2CppBase() + 0xF56E48))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaUpdateUserPveResetDataRequest*, uintptr_t))(Il2CppBase() + 0xF56EC4))(this, input);
	}

};

}
