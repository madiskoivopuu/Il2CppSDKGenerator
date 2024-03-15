#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserPurchasedProduct
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserPurchasedProduct"));
	}

	 static MessageParser1ProtoModels::UserPurchasedProduct*>*& _parser() {
		return *(MessageParser1ProtoModels::UserPurchasedProduct*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& CountFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& count_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& LastTimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& lastTime_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& TotalExpFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uint32_t> R& totalExp_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& LastPeriodicalResetFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& lastPeriodicalReset_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& PersonalOfferAvailableFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& personalOfferAvailable_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& PersonalOfferDueDateFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& personalOfferDueDate_() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	 static MessageParser1ProtoModels::UserPurchasedProduct*>* get_Parser() {
		return ((MessageParser1ProtoModels::UserPurchasedProduct*>* (*)(void *))(Il2CppBase() + 0x2472384))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x24723E8))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(UserPurchasedProduct*))(Il2CppBase() + 0x2472508))(this);
	}
	template <typename R = ProtoModels::UserPurchasedProduct*> R Clone() {
		return ((R (*)(UserPurchasedProduct*))(Il2CppBase() + 0x24725C8))(this);
	}
	template <typename R = int32_t> R get_Count() {
		return ((R (*)(UserPurchasedProduct*))(Il2CppBase() + 0x2472624))(this);
	}
	template <typename R = void> R set_Count(int32_t value) {
		return ((R (*)(UserPurchasedProduct*, int32_t))(Il2CppBase() + 0x247262C))(this, value);
	}
	template <typename R = int64_t> R get_LastTime() {
		return ((R (*)(UserPurchasedProduct*))(Il2CppBase() + 0x2472634))(this);
	}
	template <typename R = void> R set_LastTime(int64_t value) {
		return ((R (*)(UserPurchasedProduct*, int64_t))(Il2CppBase() + 0x247263C))(this, value);
	}
	template <typename R = uint32_t> R get_TotalExp() {
		return ((R (*)(UserPurchasedProduct*))(Il2CppBase() + 0x2472644))(this);
	}
	template <typename R = void> R set_TotalExp(uint32_t value) {
		return ((R (*)(UserPurchasedProduct*, uint32_t))(Il2CppBase() + 0x247264C))(this, value);
	}
	template <typename R = int64_t> R get_LastPeriodicalReset() {
		return ((R (*)(UserPurchasedProduct*))(Il2CppBase() + 0x2472654))(this);
	}
	template <typename R = void> R set_LastPeriodicalReset(int64_t value) {
		return ((R (*)(UserPurchasedProduct*, int64_t))(Il2CppBase() + 0x247265C))(this, value);
	}
	template <typename R = bool> R get_PersonalOfferAvailable() {
		return ((R (*)(UserPurchasedProduct*))(Il2CppBase() + 0x2472664))(this);
	}
	template <typename R = void> R set_PersonalOfferAvailable(bool value) {
		return ((R (*)(UserPurchasedProduct*, bool))(Il2CppBase() + 0x247266C))(this, value);
	}
	template <typename R = int64_t> R get_PersonalOfferDueDate() {
		return ((R (*)(UserPurchasedProduct*))(Il2CppBase() + 0x2472678))(this);
	}
	template <typename R = void> R set_PersonalOfferDueDate(int64_t value) {
		return ((R (*)(UserPurchasedProduct*, int64_t))(Il2CppBase() + 0x2472680))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(UserPurchasedProduct*, Il2CppObject*))(Il2CppBase() + 0x2472688))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::UserPurchasedProduct* other) {
		return ((R (*)(UserPurchasedProduct*, ProtoModels::UserPurchasedProduct*))(Il2CppBase() + 0x24726F8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(UserPurchasedProduct*))(Il2CppBase() + 0x2472788))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(UserPurchasedProduct*))(Il2CppBase() + 0x2472874))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(UserPurchasedProduct*, uintptr_t))(Il2CppBase() + 0x24728D8))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(UserPurchasedProduct*))(Il2CppBase() + 0x2472A0C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::UserPurchasedProduct* other) {
		return ((R (*)(UserPurchasedProduct*, ProtoModels::UserPurchasedProduct*))(Il2CppBase() + 0x2472B94))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(UserPurchasedProduct*, uintptr_t))(Il2CppBase() + 0x2472BE4))(this, input);
	}

};

}
