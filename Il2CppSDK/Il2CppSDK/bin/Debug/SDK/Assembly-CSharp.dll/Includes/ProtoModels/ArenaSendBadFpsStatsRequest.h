#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaSendBadFpsStatsRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaSendBadFpsStatsRequest"));
	}

	 static MessageParser1ProtoModels::ArenaSendBadFpsStatsRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaSendBadFpsStatsRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& DataFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::ArenaBadFpsStats*> R& data_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1ProtoModels::ArenaSendBadFpsStatsRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaSendBadFpsStatsRequest*>* (*)(void *))(Il2CppBase() + 0x2710F7C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x2710FE0))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaSendBadFpsStatsRequest*))(Il2CppBase() + 0x2711100))(this);
	}
	template <typename R = ProtoModels::ArenaSendBadFpsStatsRequest*> R Clone() {
		return ((R (*)(ArenaSendBadFpsStatsRequest*))(Il2CppBase() + 0x27111BC))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(ArenaSendBadFpsStatsRequest*))(Il2CppBase() + 0x2711218))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(ArenaSendBadFpsStatsRequest*, int64_t))(Il2CppBase() + 0x2711220))(this, value);
	}
	template <typename R = ProtoModels::ArenaBadFpsStats*> R get_Data() {
		return ((R (*)(ArenaSendBadFpsStatsRequest*))(Il2CppBase() + 0x2711228))(this);
	}
	template <typename R = void> R set_Data(ProtoModels::ArenaBadFpsStats* value) {
		return ((R (*)(ArenaSendBadFpsStatsRequest*, ProtoModels::ArenaBadFpsStats*))(Il2CppBase() + 0x2711230))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaSendBadFpsStatsRequest*, Il2CppObject*))(Il2CppBase() + 0x2711238))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaSendBadFpsStatsRequest* other) {
		return ((R (*)(ArenaSendBadFpsStatsRequest*, ProtoModels::ArenaSendBadFpsStatsRequest*))(Il2CppBase() + 0x27112A8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaSendBadFpsStatsRequest*))(Il2CppBase() + 0x27112E4))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaSendBadFpsStatsRequest*))(Il2CppBase() + 0x271134C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaSendBadFpsStatsRequest*, uintptr_t))(Il2CppBase() + 0x27113B0))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaSendBadFpsStatsRequest*))(Il2CppBase() + 0x2711434))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaSendBadFpsStatsRequest* other) {
		return ((R (*)(ArenaSendBadFpsStatsRequest*, ProtoModels::ArenaSendBadFpsStatsRequest*))(Il2CppBase() + 0x27114E8))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaSendBadFpsStatsRequest*, uintptr_t))(Il2CppBase() + 0x27115A0))(this, input);
	}

};

}
