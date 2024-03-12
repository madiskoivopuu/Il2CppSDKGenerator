#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserProductProgress
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserProductProgress"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& NameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& name_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& RollCountFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& rollCount_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& DataFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_data_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& data_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x2470468))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x24704CC))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(UserProductProgress*))(Il2CppBase() + 0x24705EC))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(UserProductProgress*))(Il2CppBase() + 0x2470784))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(UserProductProgress*))(Il2CppBase() + 0x24707E0))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(UserProductProgress*, Il2CppString*))(Il2CppBase() + 0x24707E8))(this, value);
	}
	template <typename T = int32_t> T get_RollCount() {
		return ((T (*)(UserProductProgress*))(Il2CppBase() + 0x2470868))(this);
	}
	template <typename T = void> T set_RollCount(int32_t value) {
		return ((T (*)(UserProductProgress*, int32_t))(Il2CppBase() + 0x2470870))(this, value);
	}
	template <typename T = void*> T get_Data() {
		return ((T (*)(UserProductProgress*))(Il2CppBase() + 0x2470878))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(UserProductProgress*, uintptr_t))(Il2CppBase() + 0x2470880))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(UserProductProgress*, uintptr_t))(Il2CppBase() + 0x24708F0))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(UserProductProgress*))(Il2CppBase() + 0x24709A0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(UserProductProgress*))(Il2CppBase() + 0x2470A28))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(UserProductProgress*, uintptr_t))(Il2CppBase() + 0x2470A8C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(UserProductProgress*))(Il2CppBase() + 0x2470B8C))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(UserProductProgress*, uintptr_t))(Il2CppBase() + 0x2470CBC))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(UserProductProgress*, uintptr_t))(Il2CppBase() + 0x2470D58))(this, input);
	}

};

}
