#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class RatioTier
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "RatioTier"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MinPositionFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& minPosition_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& MaxPositionFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& maxPosition_() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> static T& BonusesFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_bonuses_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& bonuses_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& IconNameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& iconName_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x138DC7C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x138DCE0))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(RatioTier*))(Il2CppBase() + 0x138DE00))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(RatioTier*))(Il2CppBase() + 0x138DF9C))(this);
	}
	template <typename T = int32_t> T get_MinPosition() {
		return ((T (*)(RatioTier*))(Il2CppBase() + 0x138DFF8))(this);
	}
	template <typename T = void> T set_MinPosition(int32_t value) {
		return ((T (*)(RatioTier*, int32_t))(Il2CppBase() + 0x138E000))(this, value);
	}
	template <typename T = int32_t> T get_MaxPosition() {
		return ((T (*)(RatioTier*))(Il2CppBase() + 0x138E008))(this);
	}
	template <typename T = void> T set_MaxPosition(int32_t value) {
		return ((T (*)(RatioTier*, int32_t))(Il2CppBase() + 0x138E010))(this, value);
	}
	template <typename T = void*> T get_Bonuses() {
		return ((T (*)(RatioTier*))(Il2CppBase() + 0x138E018))(this);
	}
	template <typename T = Il2CppString*> T get_IconName() {
		return ((T (*)(RatioTier*))(Il2CppBase() + 0x138E020))(this);
	}
	template <typename T = void> T set_IconName(Il2CppString* value) {
		return ((T (*)(RatioTier*, Il2CppString*))(Il2CppBase() + 0x138E028))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(RatioTier*, uintptr_t))(Il2CppBase() + 0x138E0A8))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(RatioTier*, uintptr_t))(Il2CppBase() + 0x138E118))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(RatioTier*))(Il2CppBase() + 0x138E1D8))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(RatioTier*))(Il2CppBase() + 0x138E284))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(RatioTier*, uintptr_t))(Il2CppBase() + 0x138E2E8))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(RatioTier*))(Il2CppBase() + 0x138E424))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(RatioTier*, uintptr_t))(Il2CppBase() + 0x138E594))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(RatioTier*, uintptr_t))(Il2CppBase() + 0x138E63C))(this, input);
	}

};

}
