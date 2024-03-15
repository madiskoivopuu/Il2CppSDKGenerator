#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class RatioTier
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "RatioTier"));
	}

	 static MessageParser1ProtoModels::RatioTier*>*& _parser() {
		return *(MessageParser1ProtoModels::RatioTier*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& MinPositionFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& minPosition_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& MaxPositionFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& maxPosition_() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = int32_t> static R& BonusesFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1ProtoModels::RatioBonus*>*& _repeated_bonuses_codec() {
		return *(FieldCodec1ProtoModels::RatioBonus*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1ProtoModels::RatioBonus*>*& bonuses_() {
		return *(RepeatedField1ProtoModels::RatioBonus*>**)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& IconNameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& iconName_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::RatioTier*>* get_Parser() {
		return ((MessageParser1ProtoModels::RatioTier*>* (*)(void *))(Il2CppBase() + 0x138DC7C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x138DCE0))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(RatioTier*))(Il2CppBase() + 0x138DE00))(this);
	}
	template <typename R = ProtoModels::RatioTier*> R Clone() {
		return ((R (*)(RatioTier*))(Il2CppBase() + 0x138DF9C))(this);
	}
	template <typename R = int32_t> R get_MinPosition() {
		return ((R (*)(RatioTier*))(Il2CppBase() + 0x138DFF8))(this);
	}
	template <typename R = void> R set_MinPosition(int32_t value) {
		return ((R (*)(RatioTier*, int32_t))(Il2CppBase() + 0x138E000))(this, value);
	}
	template <typename R = int32_t> R get_MaxPosition() {
		return ((R (*)(RatioTier*))(Il2CppBase() + 0x138E008))(this);
	}
	template <typename R = void> R set_MaxPosition(int32_t value) {
		return ((R (*)(RatioTier*, int32_t))(Il2CppBase() + 0x138E010))(this, value);
	}
	 RepeatedField1ProtoModels::RatioBonus*>* get_Bonuses() {
		return ((RepeatedField1ProtoModels::RatioBonus*>* (*)(RatioTier*))(Il2CppBase() + 0x138E018))(this);
	}
	template <typename R = Il2CppString*> R get_IconName() {
		return ((R (*)(RatioTier*))(Il2CppBase() + 0x138E020))(this);
	}
	template <typename R = void> R set_IconName(Il2CppString* value) {
		return ((R (*)(RatioTier*, Il2CppString*))(Il2CppBase() + 0x138E028))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(RatioTier*, Il2CppObject*))(Il2CppBase() + 0x138E0A8))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::RatioTier* other) {
		return ((R (*)(RatioTier*, ProtoModels::RatioTier*))(Il2CppBase() + 0x138E118))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(RatioTier*))(Il2CppBase() + 0x138E1D8))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(RatioTier*))(Il2CppBase() + 0x138E284))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(RatioTier*, uintptr_t))(Il2CppBase() + 0x138E2E8))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(RatioTier*))(Il2CppBase() + 0x138E424))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::RatioTier* other) {
		return ((R (*)(RatioTier*, ProtoModels::RatioTier*))(Il2CppBase() + 0x138E594))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(RatioTier*, uintptr_t))(Il2CppBase() + 0x138E63C))(this, input);
	}

};

}
