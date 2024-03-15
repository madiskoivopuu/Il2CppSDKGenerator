#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class RatioAllTablesBonuses
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "RatioAllTablesBonuses"));
	}

	 static MessageParser1<ProtoModels::RatioAllTablesBonuses*>*& _parser() {
		return *(MessageParser1<ProtoModels::RatioAllTablesBonuses*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& TablesFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::RatioTableBonuses*>*& _repeated_tables_codec() {
		return *(FieldCodec1<ProtoModels::RatioTableBonuses*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<ProtoModels::RatioTableBonuses*>*& tables_() {
		return *(RepeatedField1<ProtoModels::RatioTableBonuses*>**)((uintptr_t)this + 0x10);
	}

	 static MessageParser1<ProtoModels::RatioAllTablesBonuses*>* get_Parser() {
		return ((MessageParser1<ProtoModels::RatioAllTablesBonuses*>* (*)(void *))(Il2CppBase() + 0x1389D7C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1389DE0))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(RatioAllTablesBonuses*))(Il2CppBase() + 0x1389F00))(this);
	}
	template <typename R = ProtoModels::RatioAllTablesBonuses*> R Clone() {
		return ((R (*)(RatioAllTablesBonuses*))(Il2CppBase() + 0x138A058))(this);
	}
	 RepeatedField1<ProtoModels::RatioTableBonuses*>* get_Tables() {
		return ((RepeatedField1<ProtoModels::RatioTableBonuses*>* (*)(RatioAllTablesBonuses*))(Il2CppBase() + 0x138A0B4))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(RatioAllTablesBonuses*, Il2CppObject*))(Il2CppBase() + 0x138A0BC))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::RatioAllTablesBonuses* other) {
		return ((R (*)(RatioAllTablesBonuses*, ProtoModels::RatioAllTablesBonuses*))(Il2CppBase() + 0x138A12C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(RatioAllTablesBonuses*))(Il2CppBase() + 0x138A1B8))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(RatioAllTablesBonuses*))(Il2CppBase() + 0x138A1E4))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(RatioAllTablesBonuses*, uintptr_t))(Il2CppBase() + 0x138A248))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(RatioAllTablesBonuses*))(Il2CppBase() + 0x138A2E8))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::RatioAllTablesBonuses* other) {
		return ((R (*)(RatioAllTablesBonuses*, ProtoModels::RatioAllTablesBonuses*))(Il2CppBase() + 0x138A378))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(RatioAllTablesBonuses*, uintptr_t))(Il2CppBase() + 0x138A3F0))(this, input);
	}

};

}
