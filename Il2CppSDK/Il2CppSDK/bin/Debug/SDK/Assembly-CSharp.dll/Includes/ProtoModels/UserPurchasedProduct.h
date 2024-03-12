#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserPurchasedProduct
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserPurchasedProduct"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CountFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& count_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& LastTimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& lastTime_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& TotalExpFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> T& totalExp_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& LastPeriodicalResetFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& lastPeriodicalReset_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& PersonalOfferAvailableFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& personalOfferAvailable_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& PersonalOfferDueDateFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& personalOfferDueDate_() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x2472384))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x24723E8))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(UserPurchasedProduct*))(Il2CppBase() + 0x2472508))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(UserPurchasedProduct*))(Il2CppBase() + 0x24725C8))(this);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(UserPurchasedProduct*))(Il2CppBase() + 0x2472624))(this);
	}
	template <typename T = void> T set_Count(int32_t value) {
		return ((T (*)(UserPurchasedProduct*, int32_t))(Il2CppBase() + 0x247262C))(this, value);
	}
	template <typename T = int64_t> T get_LastTime() {
		return ((T (*)(UserPurchasedProduct*))(Il2CppBase() + 0x2472634))(this);
	}
	template <typename T = void> T set_LastTime(int64_t value) {
		return ((T (*)(UserPurchasedProduct*, int64_t))(Il2CppBase() + 0x247263C))(this, value);
	}
	template <typename T = uint32_t> T get_TotalExp() {
		return ((T (*)(UserPurchasedProduct*))(Il2CppBase() + 0x2472644))(this);
	}
	template <typename T = void> T set_TotalExp(uint32_t value) {
		return ((T (*)(UserPurchasedProduct*, uint32_t))(Il2CppBase() + 0x247264C))(this, value);
	}
	template <typename T = int64_t> T get_LastPeriodicalReset() {
		return ((T (*)(UserPurchasedProduct*))(Il2CppBase() + 0x2472654))(this);
	}
	template <typename T = void> T set_LastPeriodicalReset(int64_t value) {
		return ((T (*)(UserPurchasedProduct*, int64_t))(Il2CppBase() + 0x247265C))(this, value);
	}
	template <typename T = bool> T get_PersonalOfferAvailable() {
		return ((T (*)(UserPurchasedProduct*))(Il2CppBase() + 0x2472664))(this);
	}
	template <typename T = void> T set_PersonalOfferAvailable(bool value) {
		return ((T (*)(UserPurchasedProduct*, bool))(Il2CppBase() + 0x247266C))(this, value);
	}
	template <typename T = int64_t> T get_PersonalOfferDueDate() {
		return ((T (*)(UserPurchasedProduct*))(Il2CppBase() + 0x2472678))(this);
	}
	template <typename T = void> T set_PersonalOfferDueDate(int64_t value) {
		return ((T (*)(UserPurchasedProduct*, int64_t))(Il2CppBase() + 0x2472680))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(UserPurchasedProduct*, uintptr_t))(Il2CppBase() + 0x2472688))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(UserPurchasedProduct*, uintptr_t))(Il2CppBase() + 0x24726F8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(UserPurchasedProduct*))(Il2CppBase() + 0x2472788))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(UserPurchasedProduct*))(Il2CppBase() + 0x2472874))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(UserPurchasedProduct*, uintptr_t))(Il2CppBase() + 0x24728D8))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(UserPurchasedProduct*))(Il2CppBase() + 0x2472A0C))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(UserPurchasedProduct*, uintptr_t))(Il2CppBase() + 0x2472B94))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(UserPurchasedProduct*, uintptr_t))(Il2CppBase() + 0x2472BE4))(this, input);
	}

};

}
