#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class PackIncome
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "PackIncome"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& IdFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& id_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& CommandFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& command_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& DataFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& data_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x11E6948))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x11E69AC))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(PackIncome*))(Il2CppBase() + 0x11E6ACC))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(PackIncome*))(Il2CppBase() + 0x11E6C54))(this);
	}
	template <typename T = int64_t> T get_Id() {
		return ((T (*)(PackIncome*))(Il2CppBase() + 0x11E6CB0))(this);
	}
	template <typename T = void> T set_Id(int64_t value) {
		return ((T (*)(PackIncome*, int64_t))(Il2CppBase() + 0x11E6CB8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Command() {
		return ((T (*)(PackIncome*))(Il2CppBase() + 0x11E6CC0))(this);
	}
	template <typename T = void> T set_Command(Il2CppString* value) {
		return ((T (*)(PackIncome*, Il2CppString*))(Il2CppBase() + 0x11E6CC8))(this, value);
	}
	template <typename T = uintptr_t> T get_Data() {
		return ((T (*)(PackIncome*))(Il2CppBase() + 0x11E6D48))(this);
	}
	template <typename T = void> T set_Data(uintptr_t value) {
		return ((T (*)(PackIncome*, uintptr_t))(Il2CppBase() + 0x11E6D50))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(PackIncome*, uintptr_t))(Il2CppBase() + 0x11E6DD0))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(PackIncome*, uintptr_t))(Il2CppBase() + 0x11E6E40))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(PackIncome*))(Il2CppBase() + 0x11E6F08))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(PackIncome*))(Il2CppBase() + 0x11E6FA8))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(PackIncome*, uintptr_t))(Il2CppBase() + 0x11E700C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(PackIncome*))(Il2CppBase() + 0x11E70D0))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(PackIncome*, uintptr_t))(Il2CppBase() + 0x11E71E4))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(PackIncome*, uintptr_t))(Il2CppBase() + 0x11E7258))(this, input);
	}

};

}
