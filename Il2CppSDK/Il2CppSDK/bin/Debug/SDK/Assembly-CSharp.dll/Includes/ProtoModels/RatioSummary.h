#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class RatioSummary
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "RatioSummary"));
	}

	 static MessageParser1<ProtoModels::RatioSummary*>*& _parser() {
		return *(MessageParser1<ProtoModels::RatioSummary*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& RatioListFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::RatioValue*>*& _repeated_ratioList_codec() {
		return *(FieldCodec1<ProtoModels::RatioValue*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<ProtoModels::RatioValue*>*& ratioList_() {
		return *(RepeatedField1<ProtoModels::RatioValue*>**)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& PreviousPositionFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Codec<int64_t, int32_t>*& _map_previousPosition_codec() {
		return *(Codec<int64_t, int32_t>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 MapField2<int64_t, int32_t>*& previousPosition_() {
		return *(MapField2<int64_t, int32_t>**)((uintptr_t)this + 0x18);
	}

	 static MessageParser1<ProtoModels::RatioSummary*>* get_Parser() {
		return ((MessageParser1<ProtoModels::RatioSummary*>* (*)(void *))(Il2CppBase() + 0x138C7DC))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x138C840))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(RatioSummary*))(Il2CppBase() + 0x138C960))(this);
	}
	template <typename R = ProtoModels::RatioSummary*> R Clone() {
		return ((R (*)(RatioSummary*))(Il2CppBase() + 0x138CB38))(this);
	}
	 RepeatedField1<ProtoModels::RatioValue*>* get_RatioList() {
		return ((RepeatedField1<ProtoModels::RatioValue*>* (*)(RatioSummary*))(Il2CppBase() + 0x138CB94))(this);
	}
	 MapField2<int64_t, int32_t>* get_PreviousPosition() {
		return ((MapField2<int64_t, int32_t>* (*)(RatioSummary*))(Il2CppBase() + 0x138CB9C))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(RatioSummary*, Il2CppObject*))(Il2CppBase() + 0x138CBA4))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::RatioSummary* other) {
		return ((R (*)(RatioSummary*, ProtoModels::RatioSummary*))(Il2CppBase() + 0x138CC14))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(RatioSummary*))(Il2CppBase() + 0x138CCCC))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(RatioSummary*))(Il2CppBase() + 0x138CD24))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(RatioSummary*, uintptr_t))(Il2CppBase() + 0x138CD88))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(RatioSummary*))(Il2CppBase() + 0x138CE5C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::RatioSummary* other) {
		return ((R (*)(RatioSummary*, ProtoModels::RatioSummary*))(Il2CppBase() + 0x138CF34))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(RatioSummary*, uintptr_t))(Il2CppBase() + 0x138CFD4))(this, input);
	}

};

}
