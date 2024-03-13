#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class FishingStatisticDataDB
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "FishingStatisticDataDB"));
	}

	template <typename T = MessageParser1FishingStatisticDataDB*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& WorldIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& worldID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& ClanIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& clanID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& EventTimeUnixFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& eventTimeUnix_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& ToolNameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& toolName_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& OscillationNameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& oscillationName_() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> static T& UseFishnetNameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& useFishnetName_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& SuccessFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& success_() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> static T& InterruptFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& interrupt_() {
		return *(T*)((uintptr_t)this + 0x3D);
	}
	template <typename T = int32_t> static T& LureNameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& lureName_() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& NodeNameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& nodeName_() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> static T& DurationMsecFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& durationMsec_() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> static T& ResultFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& result_() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> static T& LevelFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& level_() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> static T& LifeTimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& lifeTime_() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> static T& PveIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& pveID_() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = MessageParser1FishingStatisticDataDB*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x169A874))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x169A8D8))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(FishingStatisticDataDB*))(Il2CppBase() + 0x169A9F8))(this);
	}
	template <typename T = FishingStatisticDataDB*> T Clone() {
		return ((T (*)(FishingStatisticDataDB*))(Il2CppBase() + 0x169AB60))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(FishingStatisticDataDB*))(Il2CppBase() + 0x169ABBC))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(FishingStatisticDataDB*, int64_t))(Il2CppBase() + 0x169ABC4))(this, value);
	}
	template <typename T = int64_t> T get_WorldID() {
		return ((T (*)(FishingStatisticDataDB*))(Il2CppBase() + 0x169ABCC))(this);
	}
	template <typename T = void> T set_WorldID(int64_t value) {
		return ((T (*)(FishingStatisticDataDB*, int64_t))(Il2CppBase() + 0x169ABD4))(this, value);
	}
	template <typename T = int64_t> T get_ClanID() {
		return ((T (*)(FishingStatisticDataDB*))(Il2CppBase() + 0x169ABDC))(this);
	}
	template <typename T = void> T set_ClanID(int64_t value) {
		return ((T (*)(FishingStatisticDataDB*, int64_t))(Il2CppBase() + 0x169ABE4))(this, value);
	}
	template <typename T = int64_t> T get_EventTimeUnix() {
		return ((T (*)(FishingStatisticDataDB*))(Il2CppBase() + 0x169ABEC))(this);
	}
	template <typename T = void> T set_EventTimeUnix(int64_t value) {
		return ((T (*)(FishingStatisticDataDB*, int64_t))(Il2CppBase() + 0x169ABF4))(this, value);
	}
	template <typename T = int32_t> T get_ToolName() {
		return ((T (*)(FishingStatisticDataDB*))(Il2CppBase() + 0x169ABFC))(this);
	}
	template <typename T = void> T set_ToolName(int32_t value) {
		return ((T (*)(FishingStatisticDataDB*, int32_t))(Il2CppBase() + 0x169AC04))(this, value);
	}
	template <typename T = int32_t> T get_OscillationName() {
		return ((T (*)(FishingStatisticDataDB*))(Il2CppBase() + 0x169AC0C))(this);
	}
	template <typename T = void> T set_OscillationName(int32_t value) {
		return ((T (*)(FishingStatisticDataDB*, int32_t))(Il2CppBase() + 0x169AC14))(this, value);
	}
	template <typename T = int32_t> T get_UseFishnetName() {
		return ((T (*)(FishingStatisticDataDB*))(Il2CppBase() + 0x169AC1C))(this);
	}
	template <typename T = void> T set_UseFishnetName(int32_t value) {
		return ((T (*)(FishingStatisticDataDB*, int32_t))(Il2CppBase() + 0x169AC24))(this, value);
	}
	template <typename T = bool> T get_Success() {
		return ((T (*)(FishingStatisticDataDB*))(Il2CppBase() + 0x169AC2C))(this);
	}
	template <typename T = void> T set_Success(bool value) {
		return ((T (*)(FishingStatisticDataDB*, bool))(Il2CppBase() + 0x169AC34))(this, value);
	}
	template <typename T = bool> T get_Interrupt() {
		return ((T (*)(FishingStatisticDataDB*))(Il2CppBase() + 0x169AC40))(this);
	}
	template <typename T = void> T set_Interrupt(bool value) {
		return ((T (*)(FishingStatisticDataDB*, bool))(Il2CppBase() + 0x169AC48))(this, value);
	}
	template <typename T = int32_t> T get_LureName() {
		return ((T (*)(FishingStatisticDataDB*))(Il2CppBase() + 0x169AC54))(this);
	}
	template <typename T = void> T set_LureName(int32_t value) {
		return ((T (*)(FishingStatisticDataDB*, int32_t))(Il2CppBase() + 0x169AC5C))(this, value);
	}
	template <typename T = int32_t> T get_NodeName() {
		return ((T (*)(FishingStatisticDataDB*))(Il2CppBase() + 0x169AC64))(this);
	}
	template <typename T = void> T set_NodeName(int32_t value) {
		return ((T (*)(FishingStatisticDataDB*, int32_t))(Il2CppBase() + 0x169AC6C))(this, value);
	}
	template <typename T = int32_t> T get_DurationMsec() {
		return ((T (*)(FishingStatisticDataDB*))(Il2CppBase() + 0x169AC74))(this);
	}
	template <typename T = void> T set_DurationMsec(int32_t value) {
		return ((T (*)(FishingStatisticDataDB*, int32_t))(Il2CppBase() + 0x169AC7C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Result() {
		return ((T (*)(FishingStatisticDataDB*))(Il2CppBase() + 0x169AC84))(this);
	}
	template <typename T = void> T set_Result(Il2CppString* value) {
		return ((T (*)(FishingStatisticDataDB*, Il2CppString*))(Il2CppBase() + 0x169AC8C))(this, value);
	}
	template <typename T = int32_t> T get_Level() {
		return ((T (*)(FishingStatisticDataDB*))(Il2CppBase() + 0x169AD0C))(this);
	}
	template <typename T = void> T set_Level(int32_t value) {
		return ((T (*)(FishingStatisticDataDB*, int32_t))(Il2CppBase() + 0x169AD14))(this, value);
	}
	template <typename T = int32_t> T get_LifeTime() {
		return ((T (*)(FishingStatisticDataDB*))(Il2CppBase() + 0x169AD1C))(this);
	}
	template <typename T = void> T set_LifeTime(int32_t value) {
		return ((T (*)(FishingStatisticDataDB*, int32_t))(Il2CppBase() + 0x169AD24))(this, value);
	}
	template <typename T = int64_t> T get_PveID() {
		return ((T (*)(FishingStatisticDataDB*))(Il2CppBase() + 0x169AD2C))(this);
	}
	template <typename T = void> T set_PveID(int64_t value) {
		return ((T (*)(FishingStatisticDataDB*, int64_t))(Il2CppBase() + 0x169AD34))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(FishingStatisticDataDB*, Il2CppObject*))(Il2CppBase() + 0x169AD3C))(this, other);
	}
	template <typename T = bool> T Equals_1(FishingStatisticDataDB* other) {
		return ((T (*)(FishingStatisticDataDB*, FishingStatisticDataDB*))(Il2CppBase() + 0x169ADAC))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(FishingStatisticDataDB*))(Il2CppBase() + 0x169AF20))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(FishingStatisticDataDB*))(Il2CppBase() + 0x169B12C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(FishingStatisticDataDB*, uintptr_t))(Il2CppBase() + 0x169B190))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(FishingStatisticDataDB*))(Il2CppBase() + 0x169B488))(this);
	}
	template <typename T = void> T MergeFrom(FishingStatisticDataDB* other) {
		return ((T (*)(FishingStatisticDataDB*, FishingStatisticDataDB*))(Il2CppBase() + 0x169B848))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(FishingStatisticDataDB*, uintptr_t))(Il2CppBase() + 0x169B93C))(this, input);
	}

};

}
