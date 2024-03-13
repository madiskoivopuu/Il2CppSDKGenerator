#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUpdateUserPveResetDataRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUpdateUserPveResetDataRequest"));
	}

	template <typename T = MessageParser1ArenaUpdateUserPveResetDataRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& ResetTimeUnixFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& resetTimeUnix_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& ResetCountFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& resetCount_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& CoolDownTimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& coolDownTime_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& CurrencyFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& currency_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& PriceFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& price_() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = MessageParser1ArenaUpdateUserPveResetDataRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0xF56528))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5658C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaUpdateUserPveResetDataRequest*))(Il2CppBase() + 0xF566AC))(this);
	}
	template <typename T = ArenaUpdateUserPveResetDataRequest*> T Clone() {
		return ((T (*)(ArenaUpdateUserPveResetDataRequest*))(Il2CppBase() + 0xF567C4))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaUpdateUserPveResetDataRequest*))(Il2CppBase() + 0xF56820))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaUpdateUserPveResetDataRequest*, int64_t))(Il2CppBase() + 0xF56828))(this, value);
	}
	template <typename T = int64_t> T get_ResetTimeUnix() {
		return ((T (*)(ArenaUpdateUserPveResetDataRequest*))(Il2CppBase() + 0xF56830))(this);
	}
	template <typename T = void> T set_ResetTimeUnix(int64_t value) {
		return ((T (*)(ArenaUpdateUserPveResetDataRequest*, int64_t))(Il2CppBase() + 0xF56838))(this, value);
	}
	template <typename T = int32_t> T get_ResetCount() {
		return ((T (*)(ArenaUpdateUserPveResetDataRequest*))(Il2CppBase() + 0xF56840))(this);
	}
	template <typename T = void> T set_ResetCount(int32_t value) {
		return ((T (*)(ArenaUpdateUserPveResetDataRequest*, int32_t))(Il2CppBase() + 0xF56848))(this, value);
	}
	template <typename T = int64_t> T get_CoolDownTime() {
		return ((T (*)(ArenaUpdateUserPveResetDataRequest*))(Il2CppBase() + 0xF56850))(this);
	}
	template <typename T = void> T set_CoolDownTime(int64_t value) {
		return ((T (*)(ArenaUpdateUserPveResetDataRequest*, int64_t))(Il2CppBase() + 0xF56858))(this, value);
	}
	template <typename T = Il2CppString*> T get_Currency() {
		return ((T (*)(ArenaUpdateUserPveResetDataRequest*))(Il2CppBase() + 0xF56860))(this);
	}
	template <typename T = void> T set_Currency(Il2CppString* value) {
		return ((T (*)(ArenaUpdateUserPveResetDataRequest*, Il2CppString*))(Il2CppBase() + 0xF56868))(this, value);
	}
	template <typename T = int32_t> T get_Price() {
		return ((T (*)(ArenaUpdateUserPveResetDataRequest*))(Il2CppBase() + 0xF568E8))(this);
	}
	template <typename T = void> T set_Price(int32_t value) {
		return ((T (*)(ArenaUpdateUserPveResetDataRequest*, int32_t))(Il2CppBase() + 0xF568F0))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaUpdateUserPveResetDataRequest*, Il2CppObject*))(Il2CppBase() + 0xF568F8))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaUpdateUserPveResetDataRequest* other) {
		return ((T (*)(ArenaUpdateUserPveResetDataRequest*, ArenaUpdateUserPveResetDataRequest*))(Il2CppBase() + 0xF56968))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaUpdateUserPveResetDataRequest*))(Il2CppBase() + 0xF56A08))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaUpdateUserPveResetDataRequest*))(Il2CppBase() + 0xF56AF0))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaUpdateUserPveResetDataRequest*, uintptr_t))(Il2CppBase() + 0xF56B54))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaUpdateUserPveResetDataRequest*))(Il2CppBase() + 0xF56C90))(this);
	}
	template <typename T = void> T MergeFrom(ArenaUpdateUserPveResetDataRequest* other) {
		return ((T (*)(ArenaUpdateUserPveResetDataRequest*, ArenaUpdateUserPveResetDataRequest*))(Il2CppBase() + 0xF56E48))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaUpdateUserPveResetDataRequest*, uintptr_t))(Il2CppBase() + 0xF56EC4))(this, input);
	}

};

}
