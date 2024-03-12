#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GlobalMapEnemyType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GlobalMapEnemyType"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MapSlotIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& mapSlotID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& ClanIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& clanID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& EndTimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& endTime_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& ClanNameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& clanName_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x12D78C8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x12D792C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(GlobalMapEnemyType*))(Il2CppBase() + 0x12D7A4C))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(GlobalMapEnemyType*))(Il2CppBase() + 0x12D7B50))(this);
	}
	template <typename T = int64_t> T get_MapSlotID() {
		return ((T (*)(GlobalMapEnemyType*))(Il2CppBase() + 0x12D7BAC))(this);
	}
	template <typename T = void> T set_MapSlotID(int64_t value) {
		return ((T (*)(GlobalMapEnemyType*, int64_t))(Il2CppBase() + 0x12D7BB4))(this, value);
	}
	template <typename T = int64_t> T get_ClanID() {
		return ((T (*)(GlobalMapEnemyType*))(Il2CppBase() + 0x12D7BBC))(this);
	}
	template <typename T = void> T set_ClanID(int64_t value) {
		return ((T (*)(GlobalMapEnemyType*, int64_t))(Il2CppBase() + 0x12D7BC4))(this, value);
	}
	template <typename T = int64_t> T get_EndTime() {
		return ((T (*)(GlobalMapEnemyType*))(Il2CppBase() + 0x12D7BCC))(this);
	}
	template <typename T = void> T set_EndTime(int64_t value) {
		return ((T (*)(GlobalMapEnemyType*, int64_t))(Il2CppBase() + 0x12D7BD4))(this, value);
	}
	template <typename T = Il2CppString*> T get_ClanName() {
		return ((T (*)(GlobalMapEnemyType*))(Il2CppBase() + 0x12D7BDC))(this);
	}
	template <typename T = void> T set_ClanName(Il2CppString* value) {
		return ((T (*)(GlobalMapEnemyType*, Il2CppString*))(Il2CppBase() + 0x12D7BE4))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(GlobalMapEnemyType*, uintptr_t))(Il2CppBase() + 0x12D7C64))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(GlobalMapEnemyType*, uintptr_t))(Il2CppBase() + 0x12D7CD4))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(GlobalMapEnemyType*))(Il2CppBase() + 0x12D7D48))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(GlobalMapEnemyType*))(Il2CppBase() + 0x12D7DF4))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(GlobalMapEnemyType*, uintptr_t))(Il2CppBase() + 0x12D7E58))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(GlobalMapEnemyType*))(Il2CppBase() + 0x12D7F3C))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(GlobalMapEnemyType*, uintptr_t))(Il2CppBase() + 0x12D807C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(GlobalMapEnemyType*, uintptr_t))(Il2CppBase() + 0x12D80C8))(this, input);
	}

};

}
