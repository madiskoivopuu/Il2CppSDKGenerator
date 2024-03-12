#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaSaveWorldRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaSaveWorldRequest"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& WorldIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& worldID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& CallbackIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& callbackID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x270FFF8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x271005C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaSaveWorldRequest*))(Il2CppBase() + 0x271017C))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaSaveWorldRequest*))(Il2CppBase() + 0x271021C))(this);
	}
	template <typename T = int64_t> T get_WorldID() {
		return ((T (*)(ArenaSaveWorldRequest*))(Il2CppBase() + 0x2710278))(this);
	}
	template <typename T = void> T set_WorldID(int64_t value) {
		return ((T (*)(ArenaSaveWorldRequest*, int64_t))(Il2CppBase() + 0x2710280))(this, value);
	}
	template <typename T = int64_t> T get_CallbackID() {
		return ((T (*)(ArenaSaveWorldRequest*))(Il2CppBase() + 0x2710288))(this);
	}
	template <typename T = void> T set_CallbackID(int64_t value) {
		return ((T (*)(ArenaSaveWorldRequest*, int64_t))(Il2CppBase() + 0x2710290))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaSaveWorldRequest*, uintptr_t))(Il2CppBase() + 0x2710298))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaSaveWorldRequest*, uintptr_t))(Il2CppBase() + 0x2710334))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaSaveWorldRequest*))(Il2CppBase() + 0x2710374))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaSaveWorldRequest*))(Il2CppBase() + 0x27103E0))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaSaveWorldRequest*, uintptr_t))(Il2CppBase() + 0x2710444))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaSaveWorldRequest*))(Il2CppBase() + 0x27104C8))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaSaveWorldRequest*, uintptr_t))(Il2CppBase() + 0x271057C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaSaveWorldRequest*, uintptr_t))(Il2CppBase() + 0x271059C))(this, input);
	}

};

}
