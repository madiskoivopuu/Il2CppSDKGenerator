#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class Cell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "Cell"));
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
	template <typename T = int32_t> static T& LockTimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& lockTime_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x13E90AC))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x13E9110))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(Cell*))(Il2CppBase() + 0x13E9230))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(Cell*))(Il2CppBase() + 0x13E92D0))(this);
	}
	template <typename T = int64_t> T get_ID() {
		return ((T (*)(Cell*))(Il2CppBase() + 0x13E932C))(this);
	}
	template <typename T = void> T set_ID(int64_t value) {
		return ((T (*)(Cell*, int64_t))(Il2CppBase() + 0x13E9334))(this, value);
	}
	template <typename T = int64_t> T get_LockTime() {
		return ((T (*)(Cell*))(Il2CppBase() + 0x13E933C))(this);
	}
	template <typename T = void> T set_LockTime(int64_t value) {
		return ((T (*)(Cell*, int64_t))(Il2CppBase() + 0x13E9344))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(Cell*, uintptr_t))(Il2CppBase() + 0x13E934C))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(Cell*, uintptr_t))(Il2CppBase() + 0x13E93E8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Cell*))(Il2CppBase() + 0x13E9428))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Cell*))(Il2CppBase() + 0x13E9494))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(Cell*, uintptr_t))(Il2CppBase() + 0x13E94F8))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(Cell*))(Il2CppBase() + 0x13E957C))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(Cell*, uintptr_t))(Il2CppBase() + 0x13E9630))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(Cell*, uintptr_t))(Il2CppBase() + 0x13E9650))(this, input);
	}

};

}
