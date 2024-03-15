#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class Cell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "Cell"));
	}

	 static MessageParser1<ProtoModels::Cell*>*& _parser() {
		return *(MessageParser1<ProtoModels::Cell*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& IDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& iD_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& LockTimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& lockTime_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1<ProtoModels::Cell*>* get_Parser() {
		return ((MessageParser1<ProtoModels::Cell*>* (*)(void *))(Il2CppBase() + 0x13E90AC))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x13E9110))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(Cell*))(Il2CppBase() + 0x13E9230))(this);
	}
	template <typename R = ProtoModels::Cell*> R Clone() {
		return ((R (*)(Cell*))(Il2CppBase() + 0x13E92D0))(this);
	}
	template <typename R = int64_t> R get_ID() {
		return ((R (*)(Cell*))(Il2CppBase() + 0x13E932C))(this);
	}
	template <typename R = void> R set_ID(int64_t value) {
		return ((R (*)(Cell*, int64_t))(Il2CppBase() + 0x13E9334))(this, value);
	}
	template <typename R = int64_t> R get_LockTime() {
		return ((R (*)(Cell*))(Il2CppBase() + 0x13E933C))(this);
	}
	template <typename R = void> R set_LockTime(int64_t value) {
		return ((R (*)(Cell*, int64_t))(Il2CppBase() + 0x13E9344))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(Cell*, Il2CppObject*))(Il2CppBase() + 0x13E934C))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::Cell* other) {
		return ((R (*)(Cell*, ProtoModels::Cell*))(Il2CppBase() + 0x13E93E8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(Cell*))(Il2CppBase() + 0x13E9428))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(Cell*))(Il2CppBase() + 0x13E9494))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(Cell*, uintptr_t))(Il2CppBase() + 0x13E94F8))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(Cell*))(Il2CppBase() + 0x13E957C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::Cell* other) {
		return ((R (*)(Cell*, ProtoModels::Cell*))(Il2CppBase() + 0x13E9630))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(Cell*, uintptr_t))(Il2CppBase() + 0x13E9650))(this, input);
	}

};

}
