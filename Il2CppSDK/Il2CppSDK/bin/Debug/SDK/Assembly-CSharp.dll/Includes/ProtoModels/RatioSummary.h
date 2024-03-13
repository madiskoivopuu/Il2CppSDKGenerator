#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class RatioSummary
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "RatioSummary"));
	}

	template <typename T = MessageParser1RatioSummary*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& RatioListFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1RatioValue*>*> static T& _repeated_ratioList_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1RatioValue*>*> T& ratioList_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& PreviousPositionFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Codecint64_t, int32_t>*> static T& _map_previousPosition_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = MapField2int64_t, int32_t>*> T& previousPosition_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = MessageParser1RatioSummary*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x138C7DC))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x138C840))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(RatioSummary*))(Il2CppBase() + 0x138C960))(this);
	}
	template <typename T = RatioSummary*> T Clone() {
		return ((T (*)(RatioSummary*))(Il2CppBase() + 0x138CB38))(this);
	}
	template <typename T = RepeatedField1RatioValue*>*> T get_RatioList() {
		return ((T (*)(RatioSummary*))(Il2CppBase() + 0x138CB94))(this);
	}
	template <typename T = MapField2int64_t, int32_t>*> T get_PreviousPosition() {
		return ((T (*)(RatioSummary*))(Il2CppBase() + 0x138CB9C))(this);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(RatioSummary*, Il2CppObject*))(Il2CppBase() + 0x138CBA4))(this, other);
	}
	template <typename T = bool> T Equals_1(RatioSummary* other) {
		return ((T (*)(RatioSummary*, RatioSummary*))(Il2CppBase() + 0x138CC14))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(RatioSummary*))(Il2CppBase() + 0x138CCCC))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(RatioSummary*))(Il2CppBase() + 0x138CD24))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(RatioSummary*, uintptr_t))(Il2CppBase() + 0x138CD88))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(RatioSummary*))(Il2CppBase() + 0x138CE5C))(this);
	}
	template <typename T = void> T MergeFrom(RatioSummary* other) {
		return ((T (*)(RatioSummary*, RatioSummary*))(Il2CppBase() + 0x138CF34))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(RatioSummary*, uintptr_t))(Il2CppBase() + 0x138CFD4))(this, input);
	}

};

}
