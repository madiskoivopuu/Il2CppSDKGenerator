#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class PackOutcome
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "PackOutcome"));
	}

	 static MessageParser1<ProtoModels::PackOutcome*>*& _parser() {
		return *(MessageParser1<ProtoModels::PackOutcome*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& IdFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& id_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& DataFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uintptr_t> R& data_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1<ProtoModels::PackOutcome*>* get_Parser() {
		return ((MessageParser1<ProtoModels::PackOutcome*>* (*)(void *))(Il2CppBase() + 0x11E742C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x11E7490))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(PackOutcome*))(Il2CppBase() + 0x11E75B0))(this);
	}
	template <typename R = ProtoModels::PackOutcome*> R Clone() {
		return ((R (*)(PackOutcome*))(Il2CppBase() + 0x11E7704))(this);
	}
	template <typename R = int64_t> R get_Id() {
		return ((R (*)(PackOutcome*))(Il2CppBase() + 0x11E7760))(this);
	}
	template <typename R = void> R set_Id(int64_t value) {
		return ((R (*)(PackOutcome*, int64_t))(Il2CppBase() + 0x11E7768))(this, value);
	}
	template <typename R = uintptr_t> R get_Data() {
		return ((R (*)(PackOutcome*))(Il2CppBase() + 0x11E7770))(this);
	}
	template <typename R = void> R set_Data(uintptr_t value) {
		return ((R (*)(PackOutcome*, uintptr_t))(Il2CppBase() + 0x11E7778))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(PackOutcome*, Il2CppObject*))(Il2CppBase() + 0x11E77F8))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::PackOutcome* other) {
		return ((R (*)(PackOutcome*, ProtoModels::PackOutcome*))(Il2CppBase() + 0x11E7868))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(PackOutcome*))(Il2CppBase() + 0x11E791C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(PackOutcome*))(Il2CppBase() + 0x11E799C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(PackOutcome*, uintptr_t))(Il2CppBase() + 0x11E7A00))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(PackOutcome*))(Il2CppBase() + 0x11E7A90))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::PackOutcome* other) {
		return ((R (*)(PackOutcome*, ProtoModels::PackOutcome*))(Il2CppBase() + 0x11E7B58))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(PackOutcome*, uintptr_t))(Il2CppBase() + 0x11E7BB4))(this, input);
	}

};

}
