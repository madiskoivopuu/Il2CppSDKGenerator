#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class PlayerTourney
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "PlayerTourney"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& IDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& iD_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& RatingFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& rating_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& CountFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& count_() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> static T& CoolDownFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& coolDown_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& StartSearchTimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& startSearchTime_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x15739AC))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1573A10))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(PlayerTourney*))(Il2CppBase() + 0x1573B30))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(PlayerTourney*))(Il2CppBase() + 0x1573BE8))(this);
	}
	template <typename T = int64_t> T get_ID() {
		return ((T (*)(PlayerTourney*))(Il2CppBase() + 0x1573C44))(this);
	}
	template <typename T = void> T set_ID(int64_t value) {
		return ((T (*)(PlayerTourney*, int64_t))(Il2CppBase() + 0x1573C4C))(this, value);
	}
	template <typename T = int32_t> T get_Rating() {
		return ((T (*)(PlayerTourney*))(Il2CppBase() + 0x1573C54))(this);
	}
	template <typename T = void> T set_Rating(int32_t value) {
		return ((T (*)(PlayerTourney*, int32_t))(Il2CppBase() + 0x1573C5C))(this, value);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(PlayerTourney*))(Il2CppBase() + 0x1573C64))(this);
	}
	template <typename T = void> T set_Count(int32_t value) {
		return ((T (*)(PlayerTourney*, int32_t))(Il2CppBase() + 0x1573C6C))(this, value);
	}
	template <typename T = int64_t> T get_CoolDown() {
		return ((T (*)(PlayerTourney*))(Il2CppBase() + 0x1573C74))(this);
	}
	template <typename T = void> T set_CoolDown(int64_t value) {
		return ((T (*)(PlayerTourney*, int64_t))(Il2CppBase() + 0x1573C7C))(this, value);
	}
	template <typename T = int64_t> T get_StartSearchTime() {
		return ((T (*)(PlayerTourney*))(Il2CppBase() + 0x1573C84))(this);
	}
	template <typename T = void> T set_StartSearchTime(int64_t value) {
		return ((T (*)(PlayerTourney*, int64_t))(Il2CppBase() + 0x1573C8C))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(PlayerTourney*, uintptr_t))(Il2CppBase() + 0x1573C94))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(PlayerTourney*, uintptr_t))(Il2CppBase() + 0x1573D04))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(PlayerTourney*))(Il2CppBase() + 0x1573D74))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(PlayerTourney*))(Il2CppBase() + 0x1573E38))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(PlayerTourney*, uintptr_t))(Il2CppBase() + 0x1573E9C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(PlayerTourney*))(Il2CppBase() + 0x1573FA4))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(PlayerTourney*, uintptr_t))(Il2CppBase() + 0x1574114))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(PlayerTourney*, uintptr_t))(Il2CppBase() + 0x1574158))(this, input);
	}

};

}
