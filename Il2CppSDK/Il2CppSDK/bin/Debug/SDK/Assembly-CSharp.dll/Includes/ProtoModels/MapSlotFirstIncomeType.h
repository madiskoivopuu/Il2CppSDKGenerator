#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class MapSlotFirstIncomeType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "MapSlotFirstIncomeType"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& PveIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& pveID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& FirstEndTimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& firstEndTime_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x12C5A90))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x12C5AF4))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(MapSlotFirstIncomeType*))(Il2CppBase() + 0x12C5C14))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(MapSlotFirstIncomeType*))(Il2CppBase() + 0x12C5CB4))(this);
	}
	template <typename T = int64_t> T get_PveID() {
		return ((T (*)(MapSlotFirstIncomeType*))(Il2CppBase() + 0x12C5D10))(this);
	}
	template <typename T = void> T set_PveID(int64_t value) {
		return ((T (*)(MapSlotFirstIncomeType*, int64_t))(Il2CppBase() + 0x12C5D18))(this, value);
	}
	template <typename T = int64_t> T get_FirstEndTime() {
		return ((T (*)(MapSlotFirstIncomeType*))(Il2CppBase() + 0x12C5D20))(this);
	}
	template <typename T = void> T set_FirstEndTime(int64_t value) {
		return ((T (*)(MapSlotFirstIncomeType*, int64_t))(Il2CppBase() + 0x12C5D28))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(MapSlotFirstIncomeType*, uintptr_t))(Il2CppBase() + 0x12C5D30))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(MapSlotFirstIncomeType*, uintptr_t))(Il2CppBase() + 0x12C5DCC))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(MapSlotFirstIncomeType*))(Il2CppBase() + 0x12C5E0C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(MapSlotFirstIncomeType*))(Il2CppBase() + 0x12C5E78))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(MapSlotFirstIncomeType*, uintptr_t))(Il2CppBase() + 0x12C5EDC))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(MapSlotFirstIncomeType*))(Il2CppBase() + 0x12C5F60))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(MapSlotFirstIncomeType*, uintptr_t))(Il2CppBase() + 0x12C6014))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(MapSlotFirstIncomeType*, uintptr_t))(Il2CppBase() + 0x12C6034))(this, input);
	}

};

}
