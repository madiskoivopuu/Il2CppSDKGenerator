#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AdminGetMetricsHistoryRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AdminGetMetricsHistoryRequest"));
	}

	 static MessageParser1<ProtoModels::AdminGetMetricsHistoryRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::AdminGetMetricsHistoryRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& RangeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& range_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1<ProtoModels::AdminGetMetricsHistoryRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::AdminGetMetricsHistoryRequest*>* (*)(void *))(Il2CppBase() + 0x18B2FC0))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x18B3024))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(AdminGetMetricsHistoryRequest*))(Il2CppBase() + 0x18B3144))(this);
	}
	template <typename R = ProtoModels::AdminGetMetricsHistoryRequest*> R Clone() {
		return ((R (*)(AdminGetMetricsHistoryRequest*))(Il2CppBase() + 0x18B31E4))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(AdminGetMetricsHistoryRequest*))(Il2CppBase() + 0x18B3240))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(AdminGetMetricsHistoryRequest*, int64_t))(Il2CppBase() + 0x18B3248))(this, value);
	}
	template <typename R = int32_t> R get_Range() {
		return ((R (*)(AdminGetMetricsHistoryRequest*))(Il2CppBase() + 0x18B3250))(this);
	}
	template <typename R = void> R set_Range(int32_t value) {
		return ((R (*)(AdminGetMetricsHistoryRequest*, int32_t))(Il2CppBase() + 0x18B3258))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(AdminGetMetricsHistoryRequest*, Il2CppObject*))(Il2CppBase() + 0x18B3260))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::AdminGetMetricsHistoryRequest* other) {
		return ((R (*)(AdminGetMetricsHistoryRequest*, ProtoModels::AdminGetMetricsHistoryRequest*))(Il2CppBase() + 0x18B32FC))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(AdminGetMetricsHistoryRequest*))(Il2CppBase() + 0x18B333C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(AdminGetMetricsHistoryRequest*))(Il2CppBase() + 0x18B33AC))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(AdminGetMetricsHistoryRequest*, uintptr_t))(Il2CppBase() + 0x18B3410))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(AdminGetMetricsHistoryRequest*))(Il2CppBase() + 0x18B3494))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::AdminGetMetricsHistoryRequest* other) {
		return ((R (*)(AdminGetMetricsHistoryRequest*, ProtoModels::AdminGetMetricsHistoryRequest*))(Il2CppBase() + 0x18B3548))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(AdminGetMetricsHistoryRequest*, uintptr_t))(Il2CppBase() + 0x18B3568))(this, input);
	}

};

}
