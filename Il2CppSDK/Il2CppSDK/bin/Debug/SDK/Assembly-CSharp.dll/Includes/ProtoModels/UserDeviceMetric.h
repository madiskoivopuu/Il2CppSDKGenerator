#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserDeviceMetric
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserDeviceMetric"));
	}

	template <typename T = MessageParser1UserDeviceMetric*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& SumPingFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& sumPing_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& AvgPingFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& avgPing_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& MinPingFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& minPing_() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> static T& MaxPingFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& maxPing_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& CountPingFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& countPing_() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> static T& MinQualityFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& minQuality_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& MaxQualityFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& maxQuality_() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> static T& SumFpsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& sumFps_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& AvgFpsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& avgFps_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& MinFpsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& minFps_() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> static T& MaxFpsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& maxFps_() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& CountFpsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& countFps_() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = MessageParser1UserDeviceMetric*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x24653C8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x246542C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(UserDeviceMetric*))(Il2CppBase() + 0x246554C))(this);
	}
	template <typename T = UserDeviceMetric*> T Clone() {
		return ((T (*)(UserDeviceMetric*))(Il2CppBase() + 0x246563C))(this);
	}
	template <typename T = int64_t> T get_SumPing() {
		return ((T (*)(UserDeviceMetric*))(Il2CppBase() + 0x2465698))(this);
	}
	template <typename T = void> T set_SumPing(int64_t value) {
		return ((T (*)(UserDeviceMetric*, int64_t))(Il2CppBase() + 0x24656A0))(this, value);
	}
	template <typename T = int32_t> T get_AvgPing() {
		return ((T (*)(UserDeviceMetric*))(Il2CppBase() + 0x24656A8))(this);
	}
	template <typename T = void> T set_AvgPing(int32_t value) {
		return ((T (*)(UserDeviceMetric*, int32_t))(Il2CppBase() + 0x24656B0))(this, value);
	}
	template <typename T = int32_t> T get_MinPing() {
		return ((T (*)(UserDeviceMetric*))(Il2CppBase() + 0x24656B8))(this);
	}
	template <typename T = void> T set_MinPing(int32_t value) {
		return ((T (*)(UserDeviceMetric*, int32_t))(Il2CppBase() + 0x24656C0))(this, value);
	}
	template <typename T = int32_t> T get_MaxPing() {
		return ((T (*)(UserDeviceMetric*))(Il2CppBase() + 0x24656C8))(this);
	}
	template <typename T = void> T set_MaxPing(int32_t value) {
		return ((T (*)(UserDeviceMetric*, int32_t))(Il2CppBase() + 0x24656D0))(this, value);
	}
	template <typename T = int32_t> T get_CountPing() {
		return ((T (*)(UserDeviceMetric*))(Il2CppBase() + 0x24656D8))(this);
	}
	template <typename T = void> T set_CountPing(int32_t value) {
		return ((T (*)(UserDeviceMetric*, int32_t))(Il2CppBase() + 0x24656E0))(this, value);
	}
	template <typename T = int32_t> T get_MinQuality() {
		return ((T (*)(UserDeviceMetric*))(Il2CppBase() + 0x24656E8))(this);
	}
	template <typename T = void> T set_MinQuality(int32_t value) {
		return ((T (*)(UserDeviceMetric*, int32_t))(Il2CppBase() + 0x24656F0))(this, value);
	}
	template <typename T = int32_t> T get_MaxQuality() {
		return ((T (*)(UserDeviceMetric*))(Il2CppBase() + 0x24656F8))(this);
	}
	template <typename T = void> T set_MaxQuality(int32_t value) {
		return ((T (*)(UserDeviceMetric*, int32_t))(Il2CppBase() + 0x2465700))(this, value);
	}
	template <typename T = int64_t> T get_SumFps() {
		return ((T (*)(UserDeviceMetric*))(Il2CppBase() + 0x2465708))(this);
	}
	template <typename T = void> T set_SumFps(int64_t value) {
		return ((T (*)(UserDeviceMetric*, int64_t))(Il2CppBase() + 0x2465710))(this, value);
	}
	template <typename T = int32_t> T get_AvgFps() {
		return ((T (*)(UserDeviceMetric*))(Il2CppBase() + 0x2465718))(this);
	}
	template <typename T = void> T set_AvgFps(int32_t value) {
		return ((T (*)(UserDeviceMetric*, int32_t))(Il2CppBase() + 0x2465720))(this, value);
	}
	template <typename T = int32_t> T get_MinFps() {
		return ((T (*)(UserDeviceMetric*))(Il2CppBase() + 0x2465728))(this);
	}
	template <typename T = void> T set_MinFps(int32_t value) {
		return ((T (*)(UserDeviceMetric*, int32_t))(Il2CppBase() + 0x2465730))(this, value);
	}
	template <typename T = int32_t> T get_MaxFps() {
		return ((T (*)(UserDeviceMetric*))(Il2CppBase() + 0x2465738))(this);
	}
	template <typename T = void> T set_MaxFps(int32_t value) {
		return ((T (*)(UserDeviceMetric*, int32_t))(Il2CppBase() + 0x2465740))(this, value);
	}
	template <typename T = int32_t> T get_CountFps() {
		return ((T (*)(UserDeviceMetric*))(Il2CppBase() + 0x2465748))(this);
	}
	template <typename T = void> T set_CountFps(int32_t value) {
		return ((T (*)(UserDeviceMetric*, int32_t))(Il2CppBase() + 0x2465750))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(UserDeviceMetric*, Il2CppObject*))(Il2CppBase() + 0x2465758))(this, other);
	}
	template <typename T = bool> T Equals_1(UserDeviceMetric* other) {
		return ((T (*)(UserDeviceMetric*, UserDeviceMetric*))(Il2CppBase() + 0x24657C8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(UserDeviceMetric*))(Il2CppBase() + 0x24658A8))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(UserDeviceMetric*))(Il2CppBase() + 0x2465A30))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(UserDeviceMetric*, uintptr_t))(Il2CppBase() + 0x2465A94))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(UserDeviceMetric*))(Il2CppBase() + 0x2465CD0))(this);
	}
	template <typename T = void> T MergeFrom(UserDeviceMetric* other) {
		return ((T (*)(UserDeviceMetric*, UserDeviceMetric*))(Il2CppBase() + 0x2465FE4))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(UserDeviceMetric*, uintptr_t))(Il2CppBase() + 0x246607C))(this, input);
	}

};

}
