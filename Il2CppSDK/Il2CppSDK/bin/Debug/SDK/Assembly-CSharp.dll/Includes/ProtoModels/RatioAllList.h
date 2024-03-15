#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class RatioAllList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "RatioAllList"));
	}

	 static MessageParser1ProtoModels::RatioAllList*>*& _parser() {
		return *(MessageParser1ProtoModels::RatioAllList*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& RatioFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1ProtoModels::RatioSummary*>*& _repeated_ratio_codec() {
		return *(FieldCodec1ProtoModels::RatioSummary*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1ProtoModels::RatioSummary*>*& ratio_() {
		return *(RepeatedField1ProtoModels::RatioSummary*>**)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& RatioStartDateFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& ratioStartDate_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& RatioEndDateFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& ratioEndDate_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& LastBonusPositionFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Codecint64_t, ProtoModels::BonusPositionType*>*& _map_lastBonusPosition_codec() {
		return *(Codecint64_t, ProtoModels::BonusPositionType*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 MapField2int64_t, ProtoModels::BonusPositionType*>*& lastBonusPosition_() {
		return *(MapField2int64_t, ProtoModels::BonusPositionType*>**)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& RatioUpdatePositionFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& ratioUpdatePosition_() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	 static MessageParser1ProtoModels::RatioAllList*>* get_Parser() {
		return ((MessageParser1ProtoModels::RatioAllList*>* (*)(void *))(Il2CppBase() + 0x171C528))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x171C58C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(RatioAllList*))(Il2CppBase() + 0x171C6AC))(this);
	}
	template <typename R = ProtoModels::RatioAllList*> R Clone() {
		return ((R (*)(RatioAllList*))(Il2CppBase() + 0x171C8A4))(this);
	}
	 RepeatedField1ProtoModels::RatioSummary*>* get_Ratio() {
		return ((RepeatedField1ProtoModels::RatioSummary*>* (*)(RatioAllList*))(Il2CppBase() + 0x171C900))(this);
	}
	template <typename R = int64_t> R get_RatioStartDate() {
		return ((R (*)(RatioAllList*))(Il2CppBase() + 0x171C908))(this);
	}
	template <typename R = void> R set_RatioStartDate(int64_t value) {
		return ((R (*)(RatioAllList*, int64_t))(Il2CppBase() + 0x171C910))(this, value);
	}
	template <typename R = int64_t> R get_RatioEndDate() {
		return ((R (*)(RatioAllList*))(Il2CppBase() + 0x171C918))(this);
	}
	template <typename R = void> R set_RatioEndDate(int64_t value) {
		return ((R (*)(RatioAllList*, int64_t))(Il2CppBase() + 0x171C920))(this, value);
	}
	 MapField2int64_t, ProtoModels::BonusPositionType*>* get_LastBonusPosition() {
		return ((MapField2int64_t, ProtoModels::BonusPositionType*>* (*)(RatioAllList*))(Il2CppBase() + 0x171C928))(this);
	}
	template <typename R = int64_t> R get_RatioUpdatePosition() {
		return ((R (*)(RatioAllList*))(Il2CppBase() + 0x171C930))(this);
	}
	template <typename R = void> R set_RatioUpdatePosition(int64_t value) {
		return ((R (*)(RatioAllList*, int64_t))(Il2CppBase() + 0x171C938))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(RatioAllList*, Il2CppObject*))(Il2CppBase() + 0x171C940))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::RatioAllList* other) {
		return ((R (*)(RatioAllList*, ProtoModels::RatioAllList*))(Il2CppBase() + 0x171C9B0))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(RatioAllList*))(Il2CppBase() + 0x171CA94))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(RatioAllList*))(Il2CppBase() + 0x171CB48))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(RatioAllList*, uintptr_t))(Il2CppBase() + 0x171CBAC))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(RatioAllList*))(Il2CppBase() + 0x171CD30))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::RatioAllList* other) {
		return ((R (*)(RatioAllList*, ProtoModels::RatioAllList*))(Il2CppBase() + 0x171CEE4))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(RatioAllList*, uintptr_t))(Il2CppBase() + 0x171CF9C))(this, input);
	}

};

}
