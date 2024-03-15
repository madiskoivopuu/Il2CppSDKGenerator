#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AvailablePurchase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AvailablePurchase"));
	}

	 static MessageParser1ProtoModels::AvailablePurchase*>*& _parser() {
		return *(MessageParser1ProtoModels::AvailablePurchase*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& NameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& name_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& CountLeftFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& countLeft_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& AvailableDateFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& availableDate_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& DurationFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& duration_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& StartFromLoginFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& startFromLogin_() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = int32_t> static R& StartDelayFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& startDelay_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& FiltersFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1Il2CppString*>*& _repeated_filters_codec() {
		return *(FieldCodec1Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1Il2CppString*>*& filters_() {
		return *(RepeatedField1Il2CppString*>**)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& NotResettableCountFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& notResettableCount_() {
		return *(R*)((uintptr_t)this + 0x40);
	}

	 static MessageParser1ProtoModels::AvailablePurchase*>* get_Parser() {
		return ((MessageParser1ProtoModels::AvailablePurchase*>* (*)(void *))(Il2CppBase() + 0x1A660F8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1A6615C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(AvailablePurchase*))(Il2CppBase() + 0x1A6627C))(this);
	}
	template <typename R = ProtoModels::AvailablePurchase*> R Clone() {
		return ((R (*)(AvailablePurchase*))(Il2CppBase() + 0x1A66440))(this);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(AvailablePurchase*))(Il2CppBase() + 0x1A6649C))(this);
	}
	template <typename R = void> R set_Name(Il2CppString* value) {
		return ((R (*)(AvailablePurchase*, Il2CppString*))(Il2CppBase() + 0x1A664A4))(this, value);
	}
	template <typename R = int32_t> R get_CountLeft() {
		return ((R (*)(AvailablePurchase*))(Il2CppBase() + 0x1A66524))(this);
	}
	template <typename R = void> R set_CountLeft(int32_t value) {
		return ((R (*)(AvailablePurchase*, int32_t))(Il2CppBase() + 0x1A6652C))(this, value);
	}
	template <typename R = int64_t> R get_AvailableDate() {
		return ((R (*)(AvailablePurchase*))(Il2CppBase() + 0x1A66534))(this);
	}
	template <typename R = void> R set_AvailableDate(int64_t value) {
		return ((R (*)(AvailablePurchase*, int64_t))(Il2CppBase() + 0x1A6653C))(this, value);
	}
	template <typename R = int32_t> R get_Duration() {
		return ((R (*)(AvailablePurchase*))(Il2CppBase() + 0x1A66544))(this);
	}
	template <typename R = void> R set_Duration(int32_t value) {
		return ((R (*)(AvailablePurchase*, int32_t))(Il2CppBase() + 0x1A6654C))(this, value);
	}
	template <typename R = bool> R get_StartFromLogin() {
		return ((R (*)(AvailablePurchase*))(Il2CppBase() + 0x1A66554))(this);
	}
	template <typename R = void> R set_StartFromLogin(bool value) {
		return ((R (*)(AvailablePurchase*, bool))(Il2CppBase() + 0x1A6655C))(this, value);
	}
	template <typename R = int32_t> R get_StartDelay() {
		return ((R (*)(AvailablePurchase*))(Il2CppBase() + 0x1A66568))(this);
	}
	template <typename R = void> R set_StartDelay(int32_t value) {
		return ((R (*)(AvailablePurchase*, int32_t))(Il2CppBase() + 0x1A66570))(this, value);
	}
	 RepeatedField1Il2CppString*>* get_Filters() {
		return ((RepeatedField1Il2CppString*>* (*)(AvailablePurchase*))(Il2CppBase() + 0x1A66578))(this);
	}
	template <typename R = bool> R get_NotResettableCount() {
		return ((R (*)(AvailablePurchase*))(Il2CppBase() + 0x1A66580))(this);
	}
	template <typename R = void> R set_NotResettableCount(bool value) {
		return ((R (*)(AvailablePurchase*, bool))(Il2CppBase() + 0x1A66588))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(AvailablePurchase*, Il2CppObject*))(Il2CppBase() + 0x1A66594))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::AvailablePurchase* other) {
		return ((R (*)(AvailablePurchase*, ProtoModels::AvailablePurchase*))(Il2CppBase() + 0x1A66604))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(AvailablePurchase*))(Il2CppBase() + 0x1A6671C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(AvailablePurchase*))(Il2CppBase() + 0x1A66844))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(AvailablePurchase*, uintptr_t))(Il2CppBase() + 0x1A668A8))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(AvailablePurchase*))(Il2CppBase() + 0x1A66A94))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::AvailablePurchase* other) {
		return ((R (*)(AvailablePurchase*, ProtoModels::AvailablePurchase*))(Il2CppBase() + 0x1A66C98))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(AvailablePurchase*, uintptr_t))(Il2CppBase() + 0x1A66D64))(this, input);
	}

};

}
