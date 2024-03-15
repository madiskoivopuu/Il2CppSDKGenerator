#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class PvpStartStopResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "PvpStartStopResponse"));
	}

	 static MessageParser1ProtoModels::PvpStartStopResponse*>*& _parser() {
		return *(MessageParser1ProtoModels::PvpStartStopResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& CodeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& code_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& CodeMessageFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& codeMessage_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& TimeStartPvpEstimateFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& timeStartPvpEstimate_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::PvpStartStopResponse*>* get_Parser() {
		return ((MessageParser1ProtoModels::PvpStartStopResponse*>* (*)(void *))(Il2CppBase() + 0x11C4B7C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x11C4BE0))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(PvpStartStopResponse*))(Il2CppBase() + 0x11C4D00))(this);
	}
	template <typename R = ProtoModels::PvpStartStopResponse*> R Clone() {
		return ((R (*)(PvpStartStopResponse*))(Il2CppBase() + 0x11C4E00))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(PvpStartStopResponse*))(Il2CppBase() + 0x11C4E5C))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(PvpStartStopResponse*, int32_t))(Il2CppBase() + 0x11C4E64))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(PvpStartStopResponse*))(Il2CppBase() + 0x11C4E6C))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(PvpStartStopResponse*, Il2CppString*))(Il2CppBase() + 0x11C4E74))(this, value);
	}
	template <typename R = int64_t> R get_TimeStartPvpEstimate() {
		return ((R (*)(PvpStartStopResponse*))(Il2CppBase() + 0x11C4EF4))(this);
	}
	template <typename R = void> R set_TimeStartPvpEstimate(int64_t value) {
		return ((R (*)(PvpStartStopResponse*, int64_t))(Il2CppBase() + 0x11C4EFC))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(PvpStartStopResponse*, Il2CppObject*))(Il2CppBase() + 0x11C4F04))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::PvpStartStopResponse* other) {
		return ((R (*)(PvpStartStopResponse*, ProtoModels::PvpStartStopResponse*))(Il2CppBase() + 0x11C4F74))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(PvpStartStopResponse*))(Il2CppBase() + 0x11C4FE4))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(PvpStartStopResponse*))(Il2CppBase() + 0x11C5078))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(PvpStartStopResponse*, uintptr_t))(Il2CppBase() + 0x11C50DC))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(PvpStartStopResponse*))(Il2CppBase() + 0x11C5194))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::PvpStartStopResponse* other) {
		return ((R (*)(PvpStartStopResponse*, ProtoModels::PvpStartStopResponse*))(Il2CppBase() + 0x11C5298))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(PvpStartStopResponse*, uintptr_t))(Il2CppBase() + 0x11C52F0))(this, input);
	}

};

}
