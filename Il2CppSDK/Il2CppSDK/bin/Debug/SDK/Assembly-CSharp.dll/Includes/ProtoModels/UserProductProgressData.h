#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserProductProgressData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserProductProgressData"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& BaseFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& base_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& AditionalFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_aditional_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& aditional_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x247104C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x24710B0))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(UserProductProgressData*))(Il2CppBase() + 0x24711D0))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(UserProductProgressData*))(Il2CppBase() + 0x24713B0))(this);
	}
	template <typename T = uintptr_t> T get_Base() {
		return ((T (*)(UserProductProgressData*))(Il2CppBase() + 0x247140C))(this);
	}
	template <typename T = void> T set_Base(uintptr_t value) {
		return ((T (*)(UserProductProgressData*, uintptr_t))(Il2CppBase() + 0x2471414))(this, value);
	}
	template <typename T = void*> T get_Aditional() {
		return ((T (*)(UserProductProgressData*))(Il2CppBase() + 0x247141C))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(UserProductProgressData*, uintptr_t))(Il2CppBase() + 0x2471424))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(UserProductProgressData*, uintptr_t))(Il2CppBase() + 0x2471494))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(UserProductProgressData*))(Il2CppBase() + 0x2471534))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(UserProductProgressData*))(Il2CppBase() + 0x247158C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(UserProductProgressData*, uintptr_t))(Il2CppBase() + 0x24715F0))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(UserProductProgressData*))(Il2CppBase() + 0x24716BC))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(UserProductProgressData*, uintptr_t))(Il2CppBase() + 0x24717A0))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(UserProductProgressData*, uintptr_t))(Il2CppBase() + 0x2471918))(this, input);
	}

};

}
