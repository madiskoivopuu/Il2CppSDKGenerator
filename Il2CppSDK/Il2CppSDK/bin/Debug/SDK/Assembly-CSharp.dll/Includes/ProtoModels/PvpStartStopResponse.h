#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class PvpStartStopResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "PvpStartStopResponse"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CodeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& code_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& CodeMessageFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& codeMessage_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& TimeStartPvpEstimateFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& timeStartPvpEstimate_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x11C4B7C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x11C4BE0))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(PvpStartStopResponse*))(Il2CppBase() + 0x11C4D00))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(PvpStartStopResponse*))(Il2CppBase() + 0x11C4E00))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(PvpStartStopResponse*))(Il2CppBase() + 0x11C4E5C))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(PvpStartStopResponse*, int32_t))(Il2CppBase() + 0x11C4E64))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(PvpStartStopResponse*))(Il2CppBase() + 0x11C4E6C))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(PvpStartStopResponse*, Il2CppString*))(Il2CppBase() + 0x11C4E74))(this, value);
	}
	template <typename T = int64_t> T get_TimeStartPvpEstimate() {
		return ((T (*)(PvpStartStopResponse*))(Il2CppBase() + 0x11C4EF4))(this);
	}
	template <typename T = void> T set_TimeStartPvpEstimate(int64_t value) {
		return ((T (*)(PvpStartStopResponse*, int64_t))(Il2CppBase() + 0x11C4EFC))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(PvpStartStopResponse*, uintptr_t))(Il2CppBase() + 0x11C4F04))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(PvpStartStopResponse*, uintptr_t))(Il2CppBase() + 0x11C4F74))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(PvpStartStopResponse*))(Il2CppBase() + 0x11C4FE4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(PvpStartStopResponse*))(Il2CppBase() + 0x11C5078))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(PvpStartStopResponse*, uintptr_t))(Il2CppBase() + 0x11C50DC))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(PvpStartStopResponse*))(Il2CppBase() + 0x11C5194))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(PvpStartStopResponse*, uintptr_t))(Il2CppBase() + 0x11C5298))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(PvpStartStopResponse*, uintptr_t))(Il2CppBase() + 0x11C52F0))(this, input);
	}

};

}
