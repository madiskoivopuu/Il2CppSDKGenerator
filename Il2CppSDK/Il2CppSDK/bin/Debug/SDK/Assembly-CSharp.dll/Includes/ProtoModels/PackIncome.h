#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class PackIncome
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "PackIncome"));
	}

	 static MessageParser1<ProtoModels::PackIncome*>*& _parser() {
		return *(MessageParser1<ProtoModels::PackIncome*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& IdFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& id_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& CommandFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& command_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& DataFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uintptr_t> R& data_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1<ProtoModels::PackIncome*>* get_Parser() {
		return ((MessageParser1<ProtoModels::PackIncome*>* (*)(void *))(Il2CppBase() + 0x11E6948))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x11E69AC))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(PackIncome*))(Il2CppBase() + 0x11E6ACC))(this);
	}
	template <typename R = ProtoModels::PackIncome*> R Clone() {
		return ((R (*)(PackIncome*))(Il2CppBase() + 0x11E6C54))(this);
	}
	template <typename R = int64_t> R get_Id() {
		return ((R (*)(PackIncome*))(Il2CppBase() + 0x11E6CB0))(this);
	}
	template <typename R = void> R set_Id(int64_t value) {
		return ((R (*)(PackIncome*, int64_t))(Il2CppBase() + 0x11E6CB8))(this, value);
	}
	template <typename R = Il2CppString*> R get_Command() {
		return ((R (*)(PackIncome*))(Il2CppBase() + 0x11E6CC0))(this);
	}
	template <typename R = void> R set_Command(Il2CppString* value) {
		return ((R (*)(PackIncome*, Il2CppString*))(Il2CppBase() + 0x11E6CC8))(this, value);
	}
	template <typename R = uintptr_t> R get_Data() {
		return ((R (*)(PackIncome*))(Il2CppBase() + 0x11E6D48))(this);
	}
	template <typename R = void> R set_Data(uintptr_t value) {
		return ((R (*)(PackIncome*, uintptr_t))(Il2CppBase() + 0x11E6D50))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(PackIncome*, Il2CppObject*))(Il2CppBase() + 0x11E6DD0))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::PackIncome* other) {
		return ((R (*)(PackIncome*, ProtoModels::PackIncome*))(Il2CppBase() + 0x11E6E40))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(PackIncome*))(Il2CppBase() + 0x11E6F08))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(PackIncome*))(Il2CppBase() + 0x11E6FA8))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(PackIncome*, uintptr_t))(Il2CppBase() + 0x11E700C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(PackIncome*))(Il2CppBase() + 0x11E70D0))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::PackIncome* other) {
		return ((R (*)(PackIncome*, ProtoModels::PackIncome*))(Il2CppBase() + 0x11E71E4))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(PackIncome*, uintptr_t))(Il2CppBase() + 0x11E7258))(this, input);
	}

};

}
