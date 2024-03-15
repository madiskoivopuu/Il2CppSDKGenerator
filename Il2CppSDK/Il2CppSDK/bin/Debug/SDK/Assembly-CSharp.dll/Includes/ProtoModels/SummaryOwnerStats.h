#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class SummaryOwnerStats
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "SummaryOwnerStats"));
	}

	 static MessageParser1<ProtoModels::SummaryOwnerStats*>*& _parser() {
		return *(MessageParser1<ProtoModels::SummaryOwnerStats*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& OwnerStatFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Codec<Il2CppString*, ProtoModels::LongSet*>*& _map_ownerStat_codec() {
		return *(Codec<Il2CppString*, ProtoModels::LongSet*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 MapField2<Il2CppString*, ProtoModels::LongSet*>*& ownerStat_() {
		return *(MapField2<Il2CppString*, ProtoModels::LongSet*>**)((uintptr_t)this + 0x10);
	}

	 static MessageParser1<ProtoModels::SummaryOwnerStats*>* get_Parser() {
		return ((MessageParser1<ProtoModels::SummaryOwnerStats*>* (*)(void *))(Il2CppBase() + 0x16A2394))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x16A23F8))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(SummaryOwnerStats*))(Il2CppBase() + 0x16A2518))(this);
	}
	template <typename R = ProtoModels::SummaryOwnerStats*> R Clone() {
		return ((R (*)(SummaryOwnerStats*))(Il2CppBase() + 0x16A2670))(this);
	}
	 MapField2<Il2CppString*, ProtoModels::LongSet*>* get_OwnerStat() {
		return ((MapField2<Il2CppString*, ProtoModels::LongSet*>* (*)(SummaryOwnerStats*))(Il2CppBase() + 0x16A26CC))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(SummaryOwnerStats*, Il2CppObject*))(Il2CppBase() + 0x16A26D4))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::SummaryOwnerStats* other) {
		return ((R (*)(SummaryOwnerStats*, ProtoModels::SummaryOwnerStats*))(Il2CppBase() + 0x16A2744))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(SummaryOwnerStats*))(Il2CppBase() + 0x16A27D0))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(SummaryOwnerStats*))(Il2CppBase() + 0x16A27FC))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(SummaryOwnerStats*, uintptr_t))(Il2CppBase() + 0x16A2860))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(SummaryOwnerStats*))(Il2CppBase() + 0x16A2900))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::SummaryOwnerStats* other) {
		return ((R (*)(SummaryOwnerStats*, ProtoModels::SummaryOwnerStats*))(Il2CppBase() + 0x16A2990))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(SummaryOwnerStats*, uintptr_t))(Il2CppBase() + 0x16A2A08))(this, input);
	}

};

}
