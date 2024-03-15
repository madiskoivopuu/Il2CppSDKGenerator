#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class TourneyCoolDownType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "TourneyCoolDownType"));
	}

	 static MessageParser1<ProtoModels::TourneyCoolDownType*>*& _parser() {
		return *(MessageParser1<ProtoModels::TourneyCoolDownType*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& CountFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& count_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& CoolDownFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& coolDown_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& NextResetTimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& nextResetTime_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1<ProtoModels::TourneyCoolDownType*>* get_Parser() {
		return ((MessageParser1<ProtoModels::TourneyCoolDownType*>* (*)(void *))(Il2CppBase() + 0x150C718))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x150C77C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(TourneyCoolDownType*))(Il2CppBase() + 0x150C89C))(this);
	}
	template <typename R = ProtoModels::TourneyCoolDownType*> R Clone() {
		return ((R (*)(TourneyCoolDownType*))(Il2CppBase() + 0x150C944))(this);
	}
	template <typename R = int32_t> R get_Count() {
		return ((R (*)(TourneyCoolDownType*))(Il2CppBase() + 0x150C9A0))(this);
	}
	template <typename R = void> R set_Count(int32_t value) {
		return ((R (*)(TourneyCoolDownType*, int32_t))(Il2CppBase() + 0x150C9A8))(this, value);
	}
	template <typename R = int64_t> R get_CoolDown() {
		return ((R (*)(TourneyCoolDownType*))(Il2CppBase() + 0x150C9B0))(this);
	}
	template <typename R = void> R set_CoolDown(int64_t value) {
		return ((R (*)(TourneyCoolDownType*, int64_t))(Il2CppBase() + 0x150C9B8))(this, value);
	}
	template <typename R = int64_t> R get_NextResetTime() {
		return ((R (*)(TourneyCoolDownType*))(Il2CppBase() + 0x150C9C0))(this);
	}
	template <typename R = void> R set_NextResetTime(int64_t value) {
		return ((R (*)(TourneyCoolDownType*, int64_t))(Il2CppBase() + 0x150C9C8))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(TourneyCoolDownType*, Il2CppObject*))(Il2CppBase() + 0x150C9D0))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::TourneyCoolDownType* other) {
		return ((R (*)(TourneyCoolDownType*, ProtoModels::TourneyCoolDownType*))(Il2CppBase() + 0x150CA7C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(TourneyCoolDownType*))(Il2CppBase() + 0x150CACC))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(TourneyCoolDownType*))(Il2CppBase() + 0x150CB58))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(TourneyCoolDownType*, uintptr_t))(Il2CppBase() + 0x150CBBC))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(TourneyCoolDownType*))(Il2CppBase() + 0x150CC6C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::TourneyCoolDownType* other) {
		return ((R (*)(TourneyCoolDownType*, ProtoModels::TourneyCoolDownType*))(Il2CppBase() + 0x150CD64))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(TourneyCoolDownType*, uintptr_t))(Il2CppBase() + 0x150CD90))(this, input);
	}

};

}
