#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AdminGetMetricsHistoryResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AdminGetMetricsHistoryResponse"));
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
	template <typename T = int32_t> static T& MetricNameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& metricName_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& MetricValueFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_metricValue_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& metricValue_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x18B3708))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x18B376C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(AdminGetMetricsHistoryResponse*))(Il2CppBase() + 0x18B388C))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(AdminGetMetricsHistoryResponse*))(Il2CppBase() + 0x18B3A40))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(AdminGetMetricsHistoryResponse*))(Il2CppBase() + 0x18B3A9C))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(AdminGetMetricsHistoryResponse*, int32_t))(Il2CppBase() + 0x18B3AA4))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(AdminGetMetricsHistoryResponse*))(Il2CppBase() + 0x18B3AAC))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(AdminGetMetricsHistoryResponse*, Il2CppString*))(Il2CppBase() + 0x18B3AB4))(this, value);
	}
	template <typename T = Il2CppString*> T get_MetricName() {
		return ((T (*)(AdminGetMetricsHistoryResponse*))(Il2CppBase() + 0x18B3B34))(this);
	}
	template <typename T = void> T set_MetricName(Il2CppString* value) {
		return ((T (*)(AdminGetMetricsHistoryResponse*, Il2CppString*))(Il2CppBase() + 0x18B3B3C))(this, value);
	}
	template <typename T = void*> T get_MetricValue() {
		return ((T (*)(AdminGetMetricsHistoryResponse*))(Il2CppBase() + 0x18B3BBC))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(AdminGetMetricsHistoryResponse*, uintptr_t))(Il2CppBase() + 0x18B3BC4))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(AdminGetMetricsHistoryResponse*, uintptr_t))(Il2CppBase() + 0x18B3C34))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(AdminGetMetricsHistoryResponse*))(Il2CppBase() + 0x18B3CF8))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(AdminGetMetricsHistoryResponse*))(Il2CppBase() + 0x18B3DA0))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(AdminGetMetricsHistoryResponse*, uintptr_t))(Il2CppBase() + 0x18B3E04))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(AdminGetMetricsHistoryResponse*))(Il2CppBase() + 0x18B3F38))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(AdminGetMetricsHistoryResponse*, uintptr_t))(Il2CppBase() + 0x18B40AC))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(AdminGetMetricsHistoryResponse*, uintptr_t))(Il2CppBase() + 0x18B4160))(this, input);
	}

};

}
