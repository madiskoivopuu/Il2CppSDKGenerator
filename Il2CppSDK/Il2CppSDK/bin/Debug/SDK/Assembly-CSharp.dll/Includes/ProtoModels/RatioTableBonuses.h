#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class RatioTableBonuses
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "RatioTableBonuses"));
	}

	 static MessageParser1<ProtoModels::RatioTableBonuses*>*& _parser() {
		return *(MessageParser1<ProtoModels::RatioTableBonuses*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& TiersFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::RatioTier*>*& _repeated_tiers_codec() {
		return *(FieldCodec1<ProtoModels::RatioTier*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<ProtoModels::RatioTier*>*& tiers_() {
		return *(RepeatedField1<ProtoModels::RatioTier*>**)((uintptr_t)this + 0x10);
	}

	 static MessageParser1<ProtoModels::RatioTableBonuses*>* get_Parser() {
		return ((MessageParser1<ProtoModels::RatioTableBonuses*>* (*)(void *))(Il2CppBase() + 0x138D35C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x138D3C0))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(RatioTableBonuses*))(Il2CppBase() + 0x138D4E0))(this);
	}
	template <typename R = ProtoModels::RatioTableBonuses*> R Clone() {
		return ((R (*)(RatioTableBonuses*))(Il2CppBase() + 0x138D638))(this);
	}
	 RepeatedField1<ProtoModels::RatioTier*>* get_Tiers() {
		return ((RepeatedField1<ProtoModels::RatioTier*>* (*)(RatioTableBonuses*))(Il2CppBase() + 0x138D694))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(RatioTableBonuses*, Il2CppObject*))(Il2CppBase() + 0x138D69C))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::RatioTableBonuses* other) {
		return ((R (*)(RatioTableBonuses*, ProtoModels::RatioTableBonuses*))(Il2CppBase() + 0x138D70C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(RatioTableBonuses*))(Il2CppBase() + 0x138D798))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(RatioTableBonuses*))(Il2CppBase() + 0x138D7C4))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(RatioTableBonuses*, uintptr_t))(Il2CppBase() + 0x138D828))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(RatioTableBonuses*))(Il2CppBase() + 0x138D8C8))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::RatioTableBonuses* other) {
		return ((R (*)(RatioTableBonuses*, ProtoModels::RatioTableBonuses*))(Il2CppBase() + 0x138D958))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(RatioTableBonuses*, uintptr_t))(Il2CppBase() + 0x138D9D0))(this, input);
	}

};

}
