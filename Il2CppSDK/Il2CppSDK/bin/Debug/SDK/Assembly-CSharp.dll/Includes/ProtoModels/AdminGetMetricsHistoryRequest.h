#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AdminGetMetricsHistoryRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AdminGetMetricsHistoryRequest"));
	}

	template <typename T = MessageParser1AdminGetMetricsHistoryRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& RangeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& range_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = MessageParser1AdminGetMetricsHistoryRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x18B2FC0))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x18B3024))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(AdminGetMetricsHistoryRequest*))(Il2CppBase() + 0x18B3144))(this);
	}
	template <typename T = AdminGetMetricsHistoryRequest*> T Clone() {
		return ((T (*)(AdminGetMetricsHistoryRequest*))(Il2CppBase() + 0x18B31E4))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(AdminGetMetricsHistoryRequest*))(Il2CppBase() + 0x18B3240))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(AdminGetMetricsHistoryRequest*, int64_t))(Il2CppBase() + 0x18B3248))(this, value);
	}
	template <typename T = int32_t> T get_Range() {
		return ((T (*)(AdminGetMetricsHistoryRequest*))(Il2CppBase() + 0x18B3250))(this);
	}
	template <typename T = void> T set_Range(int32_t value) {
		return ((T (*)(AdminGetMetricsHistoryRequest*, int32_t))(Il2CppBase() + 0x18B3258))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(AdminGetMetricsHistoryRequest*, Il2CppObject*))(Il2CppBase() + 0x18B3260))(this, other);
	}
	template <typename T = bool> T Equals_1(AdminGetMetricsHistoryRequest* other) {
		return ((T (*)(AdminGetMetricsHistoryRequest*, AdminGetMetricsHistoryRequest*))(Il2CppBase() + 0x18B32FC))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(AdminGetMetricsHistoryRequest*))(Il2CppBase() + 0x18B333C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(AdminGetMetricsHistoryRequest*))(Il2CppBase() + 0x18B33AC))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(AdminGetMetricsHistoryRequest*, uintptr_t))(Il2CppBase() + 0x18B3410))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(AdminGetMetricsHistoryRequest*))(Il2CppBase() + 0x18B3494))(this);
	}
	template <typename T = void> T MergeFrom(AdminGetMetricsHistoryRequest* other) {
		return ((T (*)(AdminGetMetricsHistoryRequest*, AdminGetMetricsHistoryRequest*))(Il2CppBase() + 0x18B3548))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(AdminGetMetricsHistoryRequest*, uintptr_t))(Il2CppBase() + 0x18B3568))(this, input);
	}

};

}
