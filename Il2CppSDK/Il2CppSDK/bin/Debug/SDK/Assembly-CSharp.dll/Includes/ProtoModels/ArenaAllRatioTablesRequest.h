#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaAllRatioTablesRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaAllRatioTablesRequest"));
	}

	 static MessageParser1ProtoModels::ArenaAllRatioTablesRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaAllRatioTablesRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& TablesFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::RatioAllTables*> R& tables_() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	 static MessageParser1ProtoModels::ArenaAllRatioTablesRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaAllRatioTablesRequest*>* (*)(void *))(Il2CppBase() + 0x1A14C90))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1A14CF4))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaAllRatioTablesRequest*))(Il2CppBase() + 0x1A14E14))(this);
	}
	template <typename R = ProtoModels::ArenaAllRatioTablesRequest*> R Clone() {
		return ((R (*)(ArenaAllRatioTablesRequest*))(Il2CppBase() + 0x1A14ECC))(this);
	}
	template <typename R = ProtoModels::RatioAllTables*> R get_Tables() {
		return ((R (*)(ArenaAllRatioTablesRequest*))(Il2CppBase() + 0x1A14F28))(this);
	}
	template <typename R = void> R set_Tables(ProtoModels::RatioAllTables* value) {
		return ((R (*)(ArenaAllRatioTablesRequest*, ProtoModels::RatioAllTables*))(Il2CppBase() + 0x1A14F30))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaAllRatioTablesRequest*, Il2CppObject*))(Il2CppBase() + 0x1A14F38))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaAllRatioTablesRequest* other) {
		return ((R (*)(ArenaAllRatioTablesRequest*, ProtoModels::ArenaAllRatioTablesRequest*))(Il2CppBase() + 0x1A14FCC))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaAllRatioTablesRequest*))(Il2CppBase() + 0x1A14FF8))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaAllRatioTablesRequest*))(Il2CppBase() + 0x1A15028))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaAllRatioTablesRequest*, uintptr_t))(Il2CppBase() + 0x1A1508C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaAllRatioTablesRequest*))(Il2CppBase() + 0x1A150E4))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaAllRatioTablesRequest* other) {
		return ((R (*)(ArenaAllRatioTablesRequest*, ProtoModels::ArenaAllRatioTablesRequest*))(Il2CppBase() + 0x1A15160))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaAllRatioTablesRequest*, uintptr_t))(Il2CppBase() + 0x1A1520C))(this, input);
	}

};

}
