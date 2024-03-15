#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class LongSet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "LongSet"));
	}

	 static MessageParser1<ProtoModels::LongSet*>*& _parser() {
		return *(MessageParser1<ProtoModels::LongSet*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ValuesFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<int64_t>*& _repeated_values_codec() {
		return *(FieldCodec1<int64_t>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<int64_t>*& values_() {
		return *(RepeatedField1<int64_t>**)((uintptr_t)this + 0x10);
	}

	 static MessageParser1<ProtoModels::LongSet*>* get_Parser() {
		return ((MessageParser1<ProtoModels::LongSet*>* (*)(void *))(Il2CppBase() + 0x1732704))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1732768))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(LongSet*))(Il2CppBase() + 0x1732888))(this);
	}
	template <typename R = ProtoModels::LongSet*> R Clone() {
		return ((R (*)(LongSet*))(Il2CppBase() + 0x17329E0))(this);
	}
	 RepeatedField1<int64_t>* get_Values() {
		return ((RepeatedField1<int64_t>* (*)(LongSet*))(Il2CppBase() + 0x1732A3C))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(LongSet*, Il2CppObject*))(Il2CppBase() + 0x1732A44))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::LongSet* other) {
		return ((R (*)(LongSet*, ProtoModels::LongSet*))(Il2CppBase() + 0x1732AB4))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(LongSet*))(Il2CppBase() + 0x1732B40))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(LongSet*))(Il2CppBase() + 0x1732B6C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(LongSet*, uintptr_t))(Il2CppBase() + 0x1732BD0))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(LongSet*))(Il2CppBase() + 0x1732C70))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::LongSet* other) {
		return ((R (*)(LongSet*, ProtoModels::LongSet*))(Il2CppBase() + 0x1732D00))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(LongSet*, uintptr_t))(Il2CppBase() + 0x1732D78))(this, input);
	}

};

}
