#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class TourneyCoolDownType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "TourneyCoolDownType"));
	}

	template <typename T = MessageParser1TourneyCoolDownType*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CountFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& count_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& CoolDownFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& coolDown_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& NextResetTimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& nextResetTime_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = MessageParser1TourneyCoolDownType*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x150C718))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x150C77C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(TourneyCoolDownType*))(Il2CppBase() + 0x150C89C))(this);
	}
	template <typename T = TourneyCoolDownType*> T Clone() {
		return ((T (*)(TourneyCoolDownType*))(Il2CppBase() + 0x150C944))(this);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(TourneyCoolDownType*))(Il2CppBase() + 0x150C9A0))(this);
	}
	template <typename T = void> T set_Count(int32_t value) {
		return ((T (*)(TourneyCoolDownType*, int32_t))(Il2CppBase() + 0x150C9A8))(this, value);
	}
	template <typename T = int64_t> T get_CoolDown() {
		return ((T (*)(TourneyCoolDownType*))(Il2CppBase() + 0x150C9B0))(this);
	}
	template <typename T = void> T set_CoolDown(int64_t value) {
		return ((T (*)(TourneyCoolDownType*, int64_t))(Il2CppBase() + 0x150C9B8))(this, value);
	}
	template <typename T = int64_t> T get_NextResetTime() {
		return ((T (*)(TourneyCoolDownType*))(Il2CppBase() + 0x150C9C0))(this);
	}
	template <typename T = void> T set_NextResetTime(int64_t value) {
		return ((T (*)(TourneyCoolDownType*, int64_t))(Il2CppBase() + 0x150C9C8))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(TourneyCoolDownType*, Il2CppObject*))(Il2CppBase() + 0x150C9D0))(this, other);
	}
	template <typename T = bool> T Equals_1(TourneyCoolDownType* other) {
		return ((T (*)(TourneyCoolDownType*, TourneyCoolDownType*))(Il2CppBase() + 0x150CA7C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(TourneyCoolDownType*))(Il2CppBase() + 0x150CACC))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(TourneyCoolDownType*))(Il2CppBase() + 0x150CB58))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(TourneyCoolDownType*, uintptr_t))(Il2CppBase() + 0x150CBBC))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(TourneyCoolDownType*))(Il2CppBase() + 0x150CC6C))(this);
	}
	template <typename T = void> T MergeFrom(TourneyCoolDownType* other) {
		return ((T (*)(TourneyCoolDownType*, TourneyCoolDownType*))(Il2CppBase() + 0x150CD64))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(TourneyCoolDownType*, uintptr_t))(Il2CppBase() + 0x150CD90))(this, input);
	}

};

}
