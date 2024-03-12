#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class RatioAllList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "RatioAllList"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& RatioFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_ratio_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& ratio_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& RatioStartDateFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& ratioStartDate_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& RatioEndDateFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& ratioEndDate_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& LastBonusPositionFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _map_lastBonusPosition_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> T& lastBonusPosition_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& RatioUpdatePositionFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& ratioUpdatePosition_() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x171C528))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x171C58C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(RatioAllList*))(Il2CppBase() + 0x171C6AC))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(RatioAllList*))(Il2CppBase() + 0x171C8A4))(this);
	}
	template <typename T = void*> T get_Ratio() {
		return ((T (*)(RatioAllList*))(Il2CppBase() + 0x171C900))(this);
	}
	template <typename T = int64_t> T get_RatioStartDate() {
		return ((T (*)(RatioAllList*))(Il2CppBase() + 0x171C908))(this);
	}
	template <typename T = void> T set_RatioStartDate(int64_t value) {
		return ((T (*)(RatioAllList*, int64_t))(Il2CppBase() + 0x171C910))(this, value);
	}
	template <typename T = int64_t> T get_RatioEndDate() {
		return ((T (*)(RatioAllList*))(Il2CppBase() + 0x171C918))(this);
	}
	template <typename T = void> T set_RatioEndDate(int64_t value) {
		return ((T (*)(RatioAllList*, int64_t))(Il2CppBase() + 0x171C920))(this, value);
	}
	template <typename T = void*> T get_LastBonusPosition() {
		return ((T (*)(RatioAllList*))(Il2CppBase() + 0x171C928))(this);
	}
	template <typename T = int64_t> T get_RatioUpdatePosition() {
		return ((T (*)(RatioAllList*))(Il2CppBase() + 0x171C930))(this);
	}
	template <typename T = void> T set_RatioUpdatePosition(int64_t value) {
		return ((T (*)(RatioAllList*, int64_t))(Il2CppBase() + 0x171C938))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(RatioAllList*, uintptr_t))(Il2CppBase() + 0x171C940))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(RatioAllList*, uintptr_t))(Il2CppBase() + 0x171C9B0))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(RatioAllList*))(Il2CppBase() + 0x171CA94))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(RatioAllList*))(Il2CppBase() + 0x171CB48))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(RatioAllList*, uintptr_t))(Il2CppBase() + 0x171CBAC))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(RatioAllList*))(Il2CppBase() + 0x171CD30))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(RatioAllList*, uintptr_t))(Il2CppBase() + 0x171CEE4))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(RatioAllList*, uintptr_t))(Il2CppBase() + 0x171CF9C))(this, input);
	}

};

}
