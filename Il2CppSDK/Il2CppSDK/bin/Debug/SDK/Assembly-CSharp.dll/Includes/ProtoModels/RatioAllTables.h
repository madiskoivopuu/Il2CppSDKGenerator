#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class RatioAllTables
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "RatioAllTables"));
	}

	template <typename T = MessageParser1RatioAllTables*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TablesFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1RatioOneTable*>*> static T& _repeated_tables_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1RatioOneTable*>*> T& tables_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& EndTimeUnixFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& endTimeUnix_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = MessageParser1RatioAllTables*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x171D414))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x171D478))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(RatioAllTables*))(Il2CppBase() + 0x171D598))(this);
	}
	template <typename T = RatioAllTables*> T Clone() {
		return ((T (*)(RatioAllTables*))(Il2CppBase() + 0x171D6FC))(this);
	}
	template <typename T = RepeatedField1RatioOneTable*>*> T get_Tables() {
		return ((T (*)(RatioAllTables*))(Il2CppBase() + 0x171D758))(this);
	}
	template <typename T = int64_t> T get_EndTimeUnix() {
		return ((T (*)(RatioAllTables*))(Il2CppBase() + 0x171D760))(this);
	}
	template <typename T = void> T set_EndTimeUnix(int64_t value) {
		return ((T (*)(RatioAllTables*, int64_t))(Il2CppBase() + 0x171D768))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(RatioAllTables*, Il2CppObject*))(Il2CppBase() + 0x171D770))(this, other);
	}
	template <typename T = bool> T Equals_1(RatioAllTables* other) {
		return ((T (*)(RatioAllTables*, RatioAllTables*))(Il2CppBase() + 0x171D7E0))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(RatioAllTables*))(Il2CppBase() + 0x171D878))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(RatioAllTables*))(Il2CppBase() + 0x171D8D4))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(RatioAllTables*, uintptr_t))(Il2CppBase() + 0x171D938))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(RatioAllTables*))(Il2CppBase() + 0x171DA14))(this);
	}
	template <typename T = void> T MergeFrom(RatioAllTables* other) {
		return ((T (*)(RatioAllTables*, RatioAllTables*))(Il2CppBase() + 0x171DB00))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(RatioAllTables*, uintptr_t))(Il2CppBase() + 0x171DB78))(this, input);
	}

};

}
