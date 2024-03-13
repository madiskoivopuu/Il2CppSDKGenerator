#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AvailablePurchase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AvailablePurchase"));
	}

	template <typename T = MessageParser1AvailablePurchase*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& NameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& name_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& CountLeftFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& countLeft_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& AvailableDateFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& availableDate_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& DurationFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& duration_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& StartFromLoginFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& startFromLogin_() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> static T& StartDelayFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& startDelay_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& FiltersFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1Il2CppString*>*> static T& _repeated_filters_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1Il2CppString*>*> T& filters_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& NotResettableCountFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& notResettableCount_() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = MessageParser1AvailablePurchase*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A660F8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A6615C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(AvailablePurchase*))(Il2CppBase() + 0x1A6627C))(this);
	}
	template <typename T = AvailablePurchase*> T Clone() {
		return ((T (*)(AvailablePurchase*))(Il2CppBase() + 0x1A66440))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(AvailablePurchase*))(Il2CppBase() + 0x1A6649C))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(AvailablePurchase*, Il2CppString*))(Il2CppBase() + 0x1A664A4))(this, value);
	}
	template <typename T = int32_t> T get_CountLeft() {
		return ((T (*)(AvailablePurchase*))(Il2CppBase() + 0x1A66524))(this);
	}
	template <typename T = void> T set_CountLeft(int32_t value) {
		return ((T (*)(AvailablePurchase*, int32_t))(Il2CppBase() + 0x1A6652C))(this, value);
	}
	template <typename T = int64_t> T get_AvailableDate() {
		return ((T (*)(AvailablePurchase*))(Il2CppBase() + 0x1A66534))(this);
	}
	template <typename T = void> T set_AvailableDate(int64_t value) {
		return ((T (*)(AvailablePurchase*, int64_t))(Il2CppBase() + 0x1A6653C))(this, value);
	}
	template <typename T = int32_t> T get_Duration() {
		return ((T (*)(AvailablePurchase*))(Il2CppBase() + 0x1A66544))(this);
	}
	template <typename T = void> T set_Duration(int32_t value) {
		return ((T (*)(AvailablePurchase*, int32_t))(Il2CppBase() + 0x1A6654C))(this, value);
	}
	template <typename T = bool> T get_StartFromLogin() {
		return ((T (*)(AvailablePurchase*))(Il2CppBase() + 0x1A66554))(this);
	}
	template <typename T = void> T set_StartFromLogin(bool value) {
		return ((T (*)(AvailablePurchase*, bool))(Il2CppBase() + 0x1A6655C))(this, value);
	}
	template <typename T = int32_t> T get_StartDelay() {
		return ((T (*)(AvailablePurchase*))(Il2CppBase() + 0x1A66568))(this);
	}
	template <typename T = void> T set_StartDelay(int32_t value) {
		return ((T (*)(AvailablePurchase*, int32_t))(Il2CppBase() + 0x1A66570))(this, value);
	}
	template <typename T = RepeatedField1Il2CppString*>*> T get_Filters() {
		return ((T (*)(AvailablePurchase*))(Il2CppBase() + 0x1A66578))(this);
	}
	template <typename T = bool> T get_NotResettableCount() {
		return ((T (*)(AvailablePurchase*))(Il2CppBase() + 0x1A66580))(this);
	}
	template <typename T = void> T set_NotResettableCount(bool value) {
		return ((T (*)(AvailablePurchase*, bool))(Il2CppBase() + 0x1A66588))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(AvailablePurchase*, Il2CppObject*))(Il2CppBase() + 0x1A66594))(this, other);
	}
	template <typename T = bool> T Equals_1(AvailablePurchase* other) {
		return ((T (*)(AvailablePurchase*, AvailablePurchase*))(Il2CppBase() + 0x1A66604))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(AvailablePurchase*))(Il2CppBase() + 0x1A6671C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(AvailablePurchase*))(Il2CppBase() + 0x1A66844))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(AvailablePurchase*, uintptr_t))(Il2CppBase() + 0x1A668A8))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(AvailablePurchase*))(Il2CppBase() + 0x1A66A94))(this);
	}
	template <typename T = void> T MergeFrom(AvailablePurchase* other) {
		return ((T (*)(AvailablePurchase*, AvailablePurchase*))(Il2CppBase() + 0x1A66C98))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(AvailablePurchase*, uintptr_t))(Il2CppBase() + 0x1A66D64))(this, input);
	}

};

}
