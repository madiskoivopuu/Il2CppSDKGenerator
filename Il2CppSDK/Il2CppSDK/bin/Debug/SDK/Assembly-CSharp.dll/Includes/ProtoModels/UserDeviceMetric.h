#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserDeviceMetric
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserDeviceMetric"));
	}

	 static MessageParser1ProtoModels::UserDeviceMetric*>*& _parser() {
		return *(MessageParser1ProtoModels::UserDeviceMetric*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& SumPingFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& sumPing_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& AvgPingFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& avgPing_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& MinPingFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& minPing_() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = int32_t> static R& MaxPingFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& maxPing_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& CountPingFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& countPing_() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = int32_t> static R& MinQualityFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& minQuality_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& MaxQualityFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& maxQuality_() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = int32_t> static R& SumFpsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& sumFps_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& AvgFpsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& avgFps_() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& MinFpsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& minFps_() {
		return *(R*)((uintptr_t)this + 0x3C);
	}
	template <typename R = int32_t> static R& MaxFpsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& maxFps_() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> static R& CountFpsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& countFps_() {
		return *(R*)((uintptr_t)this + 0x44);
	}

	 static MessageParser1ProtoModels::UserDeviceMetric*>* get_Parser() {
		return ((MessageParser1ProtoModels::UserDeviceMetric*>* (*)(void *))(Il2CppBase() + 0x24653C8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x246542C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(UserDeviceMetric*))(Il2CppBase() + 0x246554C))(this);
	}
	template <typename R = ProtoModels::UserDeviceMetric*> R Clone() {
		return ((R (*)(UserDeviceMetric*))(Il2CppBase() + 0x246563C))(this);
	}
	template <typename R = int64_t> R get_SumPing() {
		return ((R (*)(UserDeviceMetric*))(Il2CppBase() + 0x2465698))(this);
	}
	template <typename R = void> R set_SumPing(int64_t value) {
		return ((R (*)(UserDeviceMetric*, int64_t))(Il2CppBase() + 0x24656A0))(this, value);
	}
	template <typename R = int32_t> R get_AvgPing() {
		return ((R (*)(UserDeviceMetric*))(Il2CppBase() + 0x24656A8))(this);
	}
	template <typename R = void> R set_AvgPing(int32_t value) {
		return ((R (*)(UserDeviceMetric*, int32_t))(Il2CppBase() + 0x24656B0))(this, value);
	}
	template <typename R = int32_t> R get_MinPing() {
		return ((R (*)(UserDeviceMetric*))(Il2CppBase() + 0x24656B8))(this);
	}
	template <typename R = void> R set_MinPing(int32_t value) {
		return ((R (*)(UserDeviceMetric*, int32_t))(Il2CppBase() + 0x24656C0))(this, value);
	}
	template <typename R = int32_t> R get_MaxPing() {
		return ((R (*)(UserDeviceMetric*))(Il2CppBase() + 0x24656C8))(this);
	}
	template <typename R = void> R set_MaxPing(int32_t value) {
		return ((R (*)(UserDeviceMetric*, int32_t))(Il2CppBase() + 0x24656D0))(this, value);
	}
	template <typename R = int32_t> R get_CountPing() {
		return ((R (*)(UserDeviceMetric*))(Il2CppBase() + 0x24656D8))(this);
	}
	template <typename R = void> R set_CountPing(int32_t value) {
		return ((R (*)(UserDeviceMetric*, int32_t))(Il2CppBase() + 0x24656E0))(this, value);
	}
	template <typename R = int32_t> R get_MinQuality() {
		return ((R (*)(UserDeviceMetric*))(Il2CppBase() + 0x24656E8))(this);
	}
	template <typename R = void> R set_MinQuality(int32_t value) {
		return ((R (*)(UserDeviceMetric*, int32_t))(Il2CppBase() + 0x24656F0))(this, value);
	}
	template <typename R = int32_t> R get_MaxQuality() {
		return ((R (*)(UserDeviceMetric*))(Il2CppBase() + 0x24656F8))(this);
	}
	template <typename R = void> R set_MaxQuality(int32_t value) {
		return ((R (*)(UserDeviceMetric*, int32_t))(Il2CppBase() + 0x2465700))(this, value);
	}
	template <typename R = int64_t> R get_SumFps() {
		return ((R (*)(UserDeviceMetric*))(Il2CppBase() + 0x2465708))(this);
	}
	template <typename R = void> R set_SumFps(int64_t value) {
		return ((R (*)(UserDeviceMetric*, int64_t))(Il2CppBase() + 0x2465710))(this, value);
	}
	template <typename R = int32_t> R get_AvgFps() {
		return ((R (*)(UserDeviceMetric*))(Il2CppBase() + 0x2465718))(this);
	}
	template <typename R = void> R set_AvgFps(int32_t value) {
		return ((R (*)(UserDeviceMetric*, int32_t))(Il2CppBase() + 0x2465720))(this, value);
	}
	template <typename R = int32_t> R get_MinFps() {
		return ((R (*)(UserDeviceMetric*))(Il2CppBase() + 0x2465728))(this);
	}
	template <typename R = void> R set_MinFps(int32_t value) {
		return ((R (*)(UserDeviceMetric*, int32_t))(Il2CppBase() + 0x2465730))(this, value);
	}
	template <typename R = int32_t> R get_MaxFps() {
		return ((R (*)(UserDeviceMetric*))(Il2CppBase() + 0x2465738))(this);
	}
	template <typename R = void> R set_MaxFps(int32_t value) {
		return ((R (*)(UserDeviceMetric*, int32_t))(Il2CppBase() + 0x2465740))(this, value);
	}
	template <typename R = int32_t> R get_CountFps() {
		return ((R (*)(UserDeviceMetric*))(Il2CppBase() + 0x2465748))(this);
	}
	template <typename R = void> R set_CountFps(int32_t value) {
		return ((R (*)(UserDeviceMetric*, int32_t))(Il2CppBase() + 0x2465750))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(UserDeviceMetric*, Il2CppObject*))(Il2CppBase() + 0x2465758))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::UserDeviceMetric* other) {
		return ((R (*)(UserDeviceMetric*, ProtoModels::UserDeviceMetric*))(Il2CppBase() + 0x24657C8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(UserDeviceMetric*))(Il2CppBase() + 0x24658A8))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(UserDeviceMetric*))(Il2CppBase() + 0x2465A30))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(UserDeviceMetric*, uintptr_t))(Il2CppBase() + 0x2465A94))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(UserDeviceMetric*))(Il2CppBase() + 0x2465CD0))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::UserDeviceMetric* other) {
		return ((R (*)(UserDeviceMetric*, ProtoModels::UserDeviceMetric*))(Il2CppBase() + 0x2465FE4))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(UserDeviceMetric*, uintptr_t))(Il2CppBase() + 0x246607C))(this, input);
	}

};

}
