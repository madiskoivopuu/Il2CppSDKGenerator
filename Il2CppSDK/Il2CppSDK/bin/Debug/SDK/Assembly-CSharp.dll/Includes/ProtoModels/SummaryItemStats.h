#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class SummaryItemStats
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "SummaryItemStats"));
	}

	 static MessageParser1<ProtoModels::SummaryItemStats*>*& _parser() {
		return *(MessageParser1<ProtoModels::SummaryItemStats*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& StatFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Codec<Il2CppString*, int32_t>*& _map_stat_codec() {
		return *(Codec<Il2CppString*, int32_t>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 MapField2<Il2CppString*, int32_t>*& stat_() {
		return *(MapField2<Il2CppString*, int32_t>**)((uintptr_t)this + 0x10);
	}

	 static MessageParser1<ProtoModels::SummaryItemStats*>* get_Parser() {
		return ((MessageParser1<ProtoModels::SummaryItemStats*>* (*)(void *))(Il2CppBase() + 0x16A1A9C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x16A1B00))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(SummaryItemStats*))(Il2CppBase() + 0x16A1C20))(this);
	}
	template <typename R = ProtoModels::SummaryItemStats*> R Clone() {
		return ((R (*)(SummaryItemStats*))(Il2CppBase() + 0x16A1D78))(this);
	}
	 MapField2<Il2CppString*, int32_t>* get_Stat() {
		return ((MapField2<Il2CppString*, int32_t>* (*)(SummaryItemStats*))(Il2CppBase() + 0x16A1DD4))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(SummaryItemStats*, Il2CppObject*))(Il2CppBase() + 0x16A1DDC))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::SummaryItemStats* other) {
		return ((R (*)(SummaryItemStats*, ProtoModels::SummaryItemStats*))(Il2CppBase() + 0x16A1E4C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(SummaryItemStats*))(Il2CppBase() + 0x16A1ED8))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(SummaryItemStats*))(Il2CppBase() + 0x16A1F04))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(SummaryItemStats*, uintptr_t))(Il2CppBase() + 0x16A1F68))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(SummaryItemStats*))(Il2CppBase() + 0x16A2008))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::SummaryItemStats* other) {
		return ((R (*)(SummaryItemStats*, ProtoModels::SummaryItemStats*))(Il2CppBase() + 0x16A2098))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(SummaryItemStats*, uintptr_t))(Il2CppBase() + 0x16A2110))(this, input);
	}

};

}
