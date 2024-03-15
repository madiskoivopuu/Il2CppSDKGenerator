#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class RatioAllTables
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "RatioAllTables"));
	}

	 static MessageParser1<ProtoModels::RatioAllTables*>*& _parser() {
		return *(MessageParser1<ProtoModels::RatioAllTables*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& TablesFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::RatioOneTable*>*& _repeated_tables_codec() {
		return *(FieldCodec1<ProtoModels::RatioOneTable*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<ProtoModels::RatioOneTable*>*& tables_() {
		return *(RepeatedField1<ProtoModels::RatioOneTable*>**)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& EndTimeUnixFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& endTimeUnix_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1<ProtoModels::RatioAllTables*>* get_Parser() {
		return ((MessageParser1<ProtoModels::RatioAllTables*>* (*)(void *))(Il2CppBase() + 0x171D414))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x171D478))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(RatioAllTables*))(Il2CppBase() + 0x171D598))(this);
	}
	template <typename R = ProtoModels::RatioAllTables*> R Clone() {
		return ((R (*)(RatioAllTables*))(Il2CppBase() + 0x171D6FC))(this);
	}
	 RepeatedField1<ProtoModels::RatioOneTable*>* get_Tables() {
		return ((RepeatedField1<ProtoModels::RatioOneTable*>* (*)(RatioAllTables*))(Il2CppBase() + 0x171D758))(this);
	}
	template <typename R = int64_t> R get_EndTimeUnix() {
		return ((R (*)(RatioAllTables*))(Il2CppBase() + 0x171D760))(this);
	}
	template <typename R = void> R set_EndTimeUnix(int64_t value) {
		return ((R (*)(RatioAllTables*, int64_t))(Il2CppBase() + 0x171D768))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(RatioAllTables*, Il2CppObject*))(Il2CppBase() + 0x171D770))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::RatioAllTables* other) {
		return ((R (*)(RatioAllTables*, ProtoModels::RatioAllTables*))(Il2CppBase() + 0x171D7E0))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(RatioAllTables*))(Il2CppBase() + 0x171D878))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(RatioAllTables*))(Il2CppBase() + 0x171D8D4))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(RatioAllTables*, uintptr_t))(Il2CppBase() + 0x171D938))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(RatioAllTables*))(Il2CppBase() + 0x171DA14))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::RatioAllTables* other) {
		return ((R (*)(RatioAllTables*, ProtoModels::RatioAllTables*))(Il2CppBase() + 0x171DB00))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(RatioAllTables*, uintptr_t))(Il2CppBase() + 0x171DB78))(this, input);
	}

};

}
