#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class PredefinedRollProgress
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "PredefinedRollProgress"));
	}

	 static MessageParser1<ProtoModels::PredefinedRollProgress*>*& _parser() {
		return *(MessageParser1<ProtoModels::PredefinedRollProgress*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ProgressFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::IntToInt32ToIntMap*> R& progress_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& StartTimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& startTime_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1<ProtoModels::PredefinedRollProgress*>* get_Parser() {
		return ((MessageParser1<ProtoModels::PredefinedRollProgress*>* (*)(void *))(Il2CppBase() + 0x16DE3B4))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x16DE418))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(PredefinedRollProgress*))(Il2CppBase() + 0x16DE538))(this);
	}
	template <typename R = ProtoModels::PredefinedRollProgress*> R Clone() {
		return ((R (*)(PredefinedRollProgress*))(Il2CppBase() + 0x16DE5FC))(this);
	}
	template <typename R = ProtoModels::IntToInt32ToIntMap*> R get_Progress() {
		return ((R (*)(PredefinedRollProgress*))(Il2CppBase() + 0x16DE658))(this);
	}
	template <typename R = void> R set_Progress(ProtoModels::IntToInt32ToIntMap* value) {
		return ((R (*)(PredefinedRollProgress*, ProtoModels::IntToInt32ToIntMap*))(Il2CppBase() + 0x16DE660))(this, value);
	}
	template <typename R = int64_t> R get_StartTime() {
		return ((R (*)(PredefinedRollProgress*))(Il2CppBase() + 0x16DE668))(this);
	}
	template <typename R = void> R set_StartTime(int64_t value) {
		return ((R (*)(PredefinedRollProgress*, int64_t))(Il2CppBase() + 0x16DE670))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(PredefinedRollProgress*, Il2CppObject*))(Il2CppBase() + 0x16DE678))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::PredefinedRollProgress* other) {
		return ((R (*)(PredefinedRollProgress*, ProtoModels::PredefinedRollProgress*))(Il2CppBase() + 0x16DE6E8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(PredefinedRollProgress*))(Il2CppBase() + 0x16DE748))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(PredefinedRollProgress*))(Il2CppBase() + 0x16DE7B0))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(PredefinedRollProgress*, uintptr_t))(Il2CppBase() + 0x16DE814))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(PredefinedRollProgress*))(Il2CppBase() + 0x16DE898))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::PredefinedRollProgress* other) {
		return ((R (*)(PredefinedRollProgress*, ProtoModels::PredefinedRollProgress*))(Il2CppBase() + 0x16DE94C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(PredefinedRollProgress*, uintptr_t))(Il2CppBase() + 0x16DE9FC))(this, input);
	}

};

}
