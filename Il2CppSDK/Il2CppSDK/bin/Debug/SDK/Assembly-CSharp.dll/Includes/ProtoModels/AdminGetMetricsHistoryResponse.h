#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AdminGetMetricsHistoryResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AdminGetMetricsHistoryResponse"));
	}

	 static MessageParser1<ProtoModels::AdminGetMetricsHistoryResponse*>*& _parser() {
		return *(MessageParser1<ProtoModels::AdminGetMetricsHistoryResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename R = int32_t> static R& MetricNameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& metricName_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& MetricValueFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<Il2CppString*>*& _repeated_metricValue_codec() {
		return *(FieldCodec1<Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<Il2CppString*>*& metricValue_() {
		return *(RepeatedField1<Il2CppString*>**)((uintptr_t)this + 0x28);
	}

	 static MessageParser1<ProtoModels::AdminGetMetricsHistoryResponse*>* get_Parser() {
		return ((MessageParser1<ProtoModels::AdminGetMetricsHistoryResponse*>* (*)(void *))(Il2CppBase() + 0x18B3708))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x18B376C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(AdminGetMetricsHistoryResponse*))(Il2CppBase() + 0x18B388C))(this);
	}
	template <typename R = ProtoModels::AdminGetMetricsHistoryResponse*> R Clone() {
		return ((R (*)(AdminGetMetricsHistoryResponse*))(Il2CppBase() + 0x18B3A40))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(AdminGetMetricsHistoryResponse*))(Il2CppBase() + 0x18B3A9C))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(AdminGetMetricsHistoryResponse*, int32_t))(Il2CppBase() + 0x18B3AA4))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(AdminGetMetricsHistoryResponse*))(Il2CppBase() + 0x18B3AAC))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(AdminGetMetricsHistoryResponse*, Il2CppString*))(Il2CppBase() + 0x18B3AB4))(this, value);
	}
	template <typename R = Il2CppString*> R get_MetricName() {
		return ((R (*)(AdminGetMetricsHistoryResponse*))(Il2CppBase() + 0x18B3B34))(this);
	}
	template <typename R = void> R set_MetricName(Il2CppString* value) {
		return ((R (*)(AdminGetMetricsHistoryResponse*, Il2CppString*))(Il2CppBase() + 0x18B3B3C))(this, value);
	}
	 RepeatedField1<Il2CppString*>* get_MetricValue() {
		return ((RepeatedField1<Il2CppString*>* (*)(AdminGetMetricsHistoryResponse*))(Il2CppBase() + 0x18B3BBC))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(AdminGetMetricsHistoryResponse*, Il2CppObject*))(Il2CppBase() + 0x18B3BC4))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::AdminGetMetricsHistoryResponse* other) {
		return ((R (*)(AdminGetMetricsHistoryResponse*, ProtoModels::AdminGetMetricsHistoryResponse*))(Il2CppBase() + 0x18B3C34))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(AdminGetMetricsHistoryResponse*))(Il2CppBase() + 0x18B3CF8))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(AdminGetMetricsHistoryResponse*))(Il2CppBase() + 0x18B3DA0))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(AdminGetMetricsHistoryResponse*, uintptr_t))(Il2CppBase() + 0x18B3E04))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(AdminGetMetricsHistoryResponse*))(Il2CppBase() + 0x18B3F38))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::AdminGetMetricsHistoryResponse* other) {
		return ((R (*)(AdminGetMetricsHistoryResponse*, ProtoModels::AdminGetMetricsHistoryResponse*))(Il2CppBase() + 0x18B40AC))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(AdminGetMetricsHistoryResponse*, uintptr_t))(Il2CppBase() + 0x18B4160))(this, input);
	}

};

}
