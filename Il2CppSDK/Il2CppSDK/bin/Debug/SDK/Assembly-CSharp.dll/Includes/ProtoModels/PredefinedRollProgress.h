#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class PredefinedRollProgress
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "PredefinedRollProgress"));
	}

	template <typename T = MessageParser1PredefinedRollProgress*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ProgressFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = IntToInt32ToIntMap*> T& progress_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& StartTimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& startTime_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = MessageParser1PredefinedRollProgress*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x16DE3B4))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x16DE418))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(PredefinedRollProgress*))(Il2CppBase() + 0x16DE538))(this);
	}
	template <typename T = PredefinedRollProgress*> T Clone() {
		return ((T (*)(PredefinedRollProgress*))(Il2CppBase() + 0x16DE5FC))(this);
	}
	template <typename T = IntToInt32ToIntMap*> T get_Progress() {
		return ((T (*)(PredefinedRollProgress*))(Il2CppBase() + 0x16DE658))(this);
	}
	template <typename T = void> T set_Progress(IntToInt32ToIntMap* value) {
		return ((T (*)(PredefinedRollProgress*, IntToInt32ToIntMap*))(Il2CppBase() + 0x16DE660))(this, value);
	}
	template <typename T = int64_t> T get_StartTime() {
		return ((T (*)(PredefinedRollProgress*))(Il2CppBase() + 0x16DE668))(this);
	}
	template <typename T = void> T set_StartTime(int64_t value) {
		return ((T (*)(PredefinedRollProgress*, int64_t))(Il2CppBase() + 0x16DE670))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(PredefinedRollProgress*, Il2CppObject*))(Il2CppBase() + 0x16DE678))(this, other);
	}
	template <typename T = bool> T Equals_1(PredefinedRollProgress* other) {
		return ((T (*)(PredefinedRollProgress*, PredefinedRollProgress*))(Il2CppBase() + 0x16DE6E8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(PredefinedRollProgress*))(Il2CppBase() + 0x16DE748))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(PredefinedRollProgress*))(Il2CppBase() + 0x16DE7B0))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(PredefinedRollProgress*, uintptr_t))(Il2CppBase() + 0x16DE814))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(PredefinedRollProgress*))(Il2CppBase() + 0x16DE898))(this);
	}
	template <typename T = void> T MergeFrom(PredefinedRollProgress* other) {
		return ((T (*)(PredefinedRollProgress*, PredefinedRollProgress*))(Il2CppBase() + 0x16DE94C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(PredefinedRollProgress*, uintptr_t))(Il2CppBase() + 0x16DE9FC))(this, input);
	}

};

}
