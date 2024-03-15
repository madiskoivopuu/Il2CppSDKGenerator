#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class PlayerTourney
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "PlayerTourney"));
	}

	 static MessageParser1ProtoModels::PlayerTourney*>*& _parser() {
		return *(MessageParser1ProtoModels::PlayerTourney*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& IDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& iD_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& RatingFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& rating_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& CountFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& count_() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = int32_t> static R& CoolDownFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& coolDown_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& StartSearchTimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& startSearchTime_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1ProtoModels::PlayerTourney*>* get_Parser() {
		return ((MessageParser1ProtoModels::PlayerTourney*>* (*)(void *))(Il2CppBase() + 0x15739AC))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1573A10))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(PlayerTourney*))(Il2CppBase() + 0x1573B30))(this);
	}
	template <typename R = ProtoModels::PlayerTourney*> R Clone() {
		return ((R (*)(PlayerTourney*))(Il2CppBase() + 0x1573BE8))(this);
	}
	template <typename R = int64_t> R get_ID() {
		return ((R (*)(PlayerTourney*))(Il2CppBase() + 0x1573C44))(this);
	}
	template <typename R = void> R set_ID(int64_t value) {
		return ((R (*)(PlayerTourney*, int64_t))(Il2CppBase() + 0x1573C4C))(this, value);
	}
	template <typename R = int32_t> R get_Rating() {
		return ((R (*)(PlayerTourney*))(Il2CppBase() + 0x1573C54))(this);
	}
	template <typename R = void> R set_Rating(int32_t value) {
		return ((R (*)(PlayerTourney*, int32_t))(Il2CppBase() + 0x1573C5C))(this, value);
	}
	template <typename R = int32_t> R get_Count() {
		return ((R (*)(PlayerTourney*))(Il2CppBase() + 0x1573C64))(this);
	}
	template <typename R = void> R set_Count(int32_t value) {
		return ((R (*)(PlayerTourney*, int32_t))(Il2CppBase() + 0x1573C6C))(this, value);
	}
	template <typename R = int64_t> R get_CoolDown() {
		return ((R (*)(PlayerTourney*))(Il2CppBase() + 0x1573C74))(this);
	}
	template <typename R = void> R set_CoolDown(int64_t value) {
		return ((R (*)(PlayerTourney*, int64_t))(Il2CppBase() + 0x1573C7C))(this, value);
	}
	template <typename R = int64_t> R get_StartSearchTime() {
		return ((R (*)(PlayerTourney*))(Il2CppBase() + 0x1573C84))(this);
	}
	template <typename R = void> R set_StartSearchTime(int64_t value) {
		return ((R (*)(PlayerTourney*, int64_t))(Il2CppBase() + 0x1573C8C))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(PlayerTourney*, Il2CppObject*))(Il2CppBase() + 0x1573C94))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::PlayerTourney* other) {
		return ((R (*)(PlayerTourney*, ProtoModels::PlayerTourney*))(Il2CppBase() + 0x1573D04))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(PlayerTourney*))(Il2CppBase() + 0x1573D74))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(PlayerTourney*))(Il2CppBase() + 0x1573E38))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(PlayerTourney*, uintptr_t))(Il2CppBase() + 0x1573E9C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(PlayerTourney*))(Il2CppBase() + 0x1573FA4))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::PlayerTourney* other) {
		return ((R (*)(PlayerTourney*, ProtoModels::PlayerTourney*))(Il2CppBase() + 0x1574114))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(PlayerTourney*, uintptr_t))(Il2CppBase() + 0x1574158))(this, input);
	}

};

}
