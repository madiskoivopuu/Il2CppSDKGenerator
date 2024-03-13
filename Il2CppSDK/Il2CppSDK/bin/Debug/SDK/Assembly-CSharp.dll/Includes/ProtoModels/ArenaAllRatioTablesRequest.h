#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaAllRatioTablesRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaAllRatioTablesRequest"));
	}

	template <typename T = MessageParser1ArenaAllRatioTablesRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TablesFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = RatioAllTables*> T& tables_() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = MessageParser1ArenaAllRatioTablesRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A14C90))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A14CF4))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaAllRatioTablesRequest*))(Il2CppBase() + 0x1A14E14))(this);
	}
	template <typename T = ArenaAllRatioTablesRequest*> T Clone() {
		return ((T (*)(ArenaAllRatioTablesRequest*))(Il2CppBase() + 0x1A14ECC))(this);
	}
	template <typename T = RatioAllTables*> T get_Tables() {
		return ((T (*)(ArenaAllRatioTablesRequest*))(Il2CppBase() + 0x1A14F28))(this);
	}
	template <typename T = void> T set_Tables(RatioAllTables* value) {
		return ((T (*)(ArenaAllRatioTablesRequest*, RatioAllTables*))(Il2CppBase() + 0x1A14F30))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaAllRatioTablesRequest*, Il2CppObject*))(Il2CppBase() + 0x1A14F38))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaAllRatioTablesRequest* other) {
		return ((T (*)(ArenaAllRatioTablesRequest*, ArenaAllRatioTablesRequest*))(Il2CppBase() + 0x1A14FCC))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaAllRatioTablesRequest*))(Il2CppBase() + 0x1A14FF8))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaAllRatioTablesRequest*))(Il2CppBase() + 0x1A15028))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaAllRatioTablesRequest*, uintptr_t))(Il2CppBase() + 0x1A1508C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaAllRatioTablesRequest*))(Il2CppBase() + 0x1A150E4))(this);
	}
	template <typename T = void> T MergeFrom(ArenaAllRatioTablesRequest* other) {
		return ((T (*)(ArenaAllRatioTablesRequest*, ArenaAllRatioTablesRequest*))(Il2CppBase() + 0x1A15160))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaAllRatioTablesRequest*, uintptr_t))(Il2CppBase() + 0x1A1520C))(this, input);
	}

};

}
