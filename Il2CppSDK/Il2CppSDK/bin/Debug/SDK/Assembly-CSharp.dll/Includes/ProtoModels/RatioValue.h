#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class RatioValue
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "RatioValue"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& ValueFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& value_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x138F198))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x138F1FC))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(RatioValue*))(Il2CppBase() + 0x138F31C))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(RatioValue*))(Il2CppBase() + 0x138F3BC))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(RatioValue*))(Il2CppBase() + 0x138F418))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(RatioValue*, int64_t))(Il2CppBase() + 0x138F420))(this, value);
	}
	template <typename T = int32_t> T get_Value() {
		return ((T (*)(RatioValue*))(Il2CppBase() + 0x138F428))(this);
	}
	template <typename T = void> T set_Value(int32_t value) {
		return ((T (*)(RatioValue*, int32_t))(Il2CppBase() + 0x138F430))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(RatioValue*, uintptr_t))(Il2CppBase() + 0x138F438))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(RatioValue*, uintptr_t))(Il2CppBase() + 0x138F4D4))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(RatioValue*))(Il2CppBase() + 0x138F514))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(RatioValue*))(Il2CppBase() + 0x138F584))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(RatioValue*, uintptr_t))(Il2CppBase() + 0x138F5E8))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(RatioValue*))(Il2CppBase() + 0x138F66C))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(RatioValue*, uintptr_t))(Il2CppBase() + 0x138F720))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(RatioValue*, uintptr_t))(Il2CppBase() + 0x138F740))(this, input);
	}

};

}
