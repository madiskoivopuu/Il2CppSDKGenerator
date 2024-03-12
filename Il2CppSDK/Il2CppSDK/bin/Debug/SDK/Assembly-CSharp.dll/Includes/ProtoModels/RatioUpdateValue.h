#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class RatioUpdateValue
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "RatioUpdateValue"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& RatioTableFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& ratioTable_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& EntityIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& entityID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& DeltaFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& delta_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x138E958))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x138E9BC))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(RatioUpdateValue*))(Il2CppBase() + 0x138EADC))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(RatioUpdateValue*))(Il2CppBase() + 0x138EB84))(this);
	}
	template <typename T = int32_t> T get_RatioTable() {
		return ((T (*)(RatioUpdateValue*))(Il2CppBase() + 0x138EBE0))(this);
	}
	template <typename T = void> T set_RatioTable(int32_t value) {
		return ((T (*)(RatioUpdateValue*, int32_t))(Il2CppBase() + 0x138EBE8))(this, value);
	}
	template <typename T = int64_t> T get_EntityID() {
		return ((T (*)(RatioUpdateValue*))(Il2CppBase() + 0x138EBF0))(this);
	}
	template <typename T = void> T set_EntityID(int64_t value) {
		return ((T (*)(RatioUpdateValue*, int64_t))(Il2CppBase() + 0x138EBF8))(this, value);
	}
	template <typename T = int32_t> T get_Delta() {
		return ((T (*)(RatioUpdateValue*))(Il2CppBase() + 0x138EC00))(this);
	}
	template <typename T = void> T set_Delta(int32_t value) {
		return ((T (*)(RatioUpdateValue*, int32_t))(Il2CppBase() + 0x138EC08))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(RatioUpdateValue*, uintptr_t))(Il2CppBase() + 0x138EC10))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(RatioUpdateValue*, uintptr_t))(Il2CppBase() + 0x138ECBC))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(RatioUpdateValue*))(Il2CppBase() + 0x138ED0C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(RatioUpdateValue*))(Il2CppBase() + 0x138ED98))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(RatioUpdateValue*, uintptr_t))(Il2CppBase() + 0x138EDFC))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(RatioUpdateValue*))(Il2CppBase() + 0x138EEAC))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(RatioUpdateValue*, uintptr_t))(Il2CppBase() + 0x138EFA4))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(RatioUpdateValue*, uintptr_t))(Il2CppBase() + 0x138EFD0))(this, input);
	}

};

}
