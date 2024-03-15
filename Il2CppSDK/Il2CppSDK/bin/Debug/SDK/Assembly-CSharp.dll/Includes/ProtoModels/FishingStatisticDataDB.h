#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class FishingStatisticDataDB
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "FishingStatisticDataDB"));
	}

	 static MessageParser1ProtoModels::FishingStatisticDataDB*>*& _parser() {
		return *(MessageParser1ProtoModels::FishingStatisticDataDB*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& WorldIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& worldID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& ClanIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& clanID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& EventTimeUnixFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& eventTimeUnix_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& ToolNameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& toolName_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& OscillationNameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& oscillationName_() {
		return *(R*)((uintptr_t)this + 0x34);
	}
	template <typename R = int32_t> static R& UseFishnetNameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& useFishnetName_() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& SuccessFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& success_() {
		return *(R*)((uintptr_t)this + 0x3C);
	}
	template <typename R = int32_t> static R& InterruptFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& interrupt_() {
		return *(R*)((uintptr_t)this + 0x3D);
	}
	template <typename R = int32_t> static R& LureNameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& lureName_() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> static R& NodeNameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& nodeName_() {
		return *(R*)((uintptr_t)this + 0x44);
	}
	template <typename R = int32_t> static R& DurationMsecFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& durationMsec_() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> static R& ResultFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& result_() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = int32_t> static R& LevelFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& level_() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = int32_t> static R& LifeTimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& lifeTime_() {
		return *(R*)((uintptr_t)this + 0x5C);
	}
	template <typename R = int32_t> static R& PveIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& pveID_() {
		return *(R*)((uintptr_t)this + 0x60);
	}

	 static MessageParser1ProtoModels::FishingStatisticDataDB*>* get_Parser() {
		return ((MessageParser1ProtoModels::FishingStatisticDataDB*>* (*)(void *))(Il2CppBase() + 0x169A874))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x169A8D8))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(FishingStatisticDataDB*))(Il2CppBase() + 0x169A9F8))(this);
	}
	template <typename R = ProtoModels::FishingStatisticDataDB*> R Clone() {
		return ((R (*)(FishingStatisticDataDB*))(Il2CppBase() + 0x169AB60))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(FishingStatisticDataDB*))(Il2CppBase() + 0x169ABBC))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(FishingStatisticDataDB*, int64_t))(Il2CppBase() + 0x169ABC4))(this, value);
	}
	template <typename R = int64_t> R get_WorldID() {
		return ((R (*)(FishingStatisticDataDB*))(Il2CppBase() + 0x169ABCC))(this);
	}
	template <typename R = void> R set_WorldID(int64_t value) {
		return ((R (*)(FishingStatisticDataDB*, int64_t))(Il2CppBase() + 0x169ABD4))(this, value);
	}
	template <typename R = int64_t> R get_ClanID() {
		return ((R (*)(FishingStatisticDataDB*))(Il2CppBase() + 0x169ABDC))(this);
	}
	template <typename R = void> R set_ClanID(int64_t value) {
		return ((R (*)(FishingStatisticDataDB*, int64_t))(Il2CppBase() + 0x169ABE4))(this, value);
	}
	template <typename R = int64_t> R get_EventTimeUnix() {
		return ((R (*)(FishingStatisticDataDB*))(Il2CppBase() + 0x169ABEC))(this);
	}
	template <typename R = void> R set_EventTimeUnix(int64_t value) {
		return ((R (*)(FishingStatisticDataDB*, int64_t))(Il2CppBase() + 0x169ABF4))(this, value);
	}
	template <typename R = int32_t> R get_ToolName() {
		return ((R (*)(FishingStatisticDataDB*))(Il2CppBase() + 0x169ABFC))(this);
	}
	template <typename R = void> R set_ToolName(int32_t value) {
		return ((R (*)(FishingStatisticDataDB*, int32_t))(Il2CppBase() + 0x169AC04))(this, value);
	}
	template <typename R = int32_t> R get_OscillationName() {
		return ((R (*)(FishingStatisticDataDB*))(Il2CppBase() + 0x169AC0C))(this);
	}
	template <typename R = void> R set_OscillationName(int32_t value) {
		return ((R (*)(FishingStatisticDataDB*, int32_t))(Il2CppBase() + 0x169AC14))(this, value);
	}
	template <typename R = int32_t> R get_UseFishnetName() {
		return ((R (*)(FishingStatisticDataDB*))(Il2CppBase() + 0x169AC1C))(this);
	}
	template <typename R = void> R set_UseFishnetName(int32_t value) {
		return ((R (*)(FishingStatisticDataDB*, int32_t))(Il2CppBase() + 0x169AC24))(this, value);
	}
	template <typename R = bool> R get_Success() {
		return ((R (*)(FishingStatisticDataDB*))(Il2CppBase() + 0x169AC2C))(this);
	}
	template <typename R = void> R set_Success(bool value) {
		return ((R (*)(FishingStatisticDataDB*, bool))(Il2CppBase() + 0x169AC34))(this, value);
	}
	template <typename R = bool> R get_Interrupt() {
		return ((R (*)(FishingStatisticDataDB*))(Il2CppBase() + 0x169AC40))(this);
	}
	template <typename R = void> R set_Interrupt(bool value) {
		return ((R (*)(FishingStatisticDataDB*, bool))(Il2CppBase() + 0x169AC48))(this, value);
	}
	template <typename R = int32_t> R get_LureName() {
		return ((R (*)(FishingStatisticDataDB*))(Il2CppBase() + 0x169AC54))(this);
	}
	template <typename R = void> R set_LureName(int32_t value) {
		return ((R (*)(FishingStatisticDataDB*, int32_t))(Il2CppBase() + 0x169AC5C))(this, value);
	}
	template <typename R = int32_t> R get_NodeName() {
		return ((R (*)(FishingStatisticDataDB*))(Il2CppBase() + 0x169AC64))(this);
	}
	template <typename R = void> R set_NodeName(int32_t value) {
		return ((R (*)(FishingStatisticDataDB*, int32_t))(Il2CppBase() + 0x169AC6C))(this, value);
	}
	template <typename R = int32_t> R get_DurationMsec() {
		return ((R (*)(FishingStatisticDataDB*))(Il2CppBase() + 0x169AC74))(this);
	}
	template <typename R = void> R set_DurationMsec(int32_t value) {
		return ((R (*)(FishingStatisticDataDB*, int32_t))(Il2CppBase() + 0x169AC7C))(this, value);
	}
	template <typename R = Il2CppString*> R get_Result() {
		return ((R (*)(FishingStatisticDataDB*))(Il2CppBase() + 0x169AC84))(this);
	}
	template <typename R = void> R set_Result(Il2CppString* value) {
		return ((R (*)(FishingStatisticDataDB*, Il2CppString*))(Il2CppBase() + 0x169AC8C))(this, value);
	}
	template <typename R = int32_t> R get_Level() {
		return ((R (*)(FishingStatisticDataDB*))(Il2CppBase() + 0x169AD0C))(this);
	}
	template <typename R = void> R set_Level(int32_t value) {
		return ((R (*)(FishingStatisticDataDB*, int32_t))(Il2CppBase() + 0x169AD14))(this, value);
	}
	template <typename R = int32_t> R get_LifeTime() {
		return ((R (*)(FishingStatisticDataDB*))(Il2CppBase() + 0x169AD1C))(this);
	}
	template <typename R = void> R set_LifeTime(int32_t value) {
		return ((R (*)(FishingStatisticDataDB*, int32_t))(Il2CppBase() + 0x169AD24))(this, value);
	}
	template <typename R = int64_t> R get_PveID() {
		return ((R (*)(FishingStatisticDataDB*))(Il2CppBase() + 0x169AD2C))(this);
	}
	template <typename R = void> R set_PveID(int64_t value) {
		return ((R (*)(FishingStatisticDataDB*, int64_t))(Il2CppBase() + 0x169AD34))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(FishingStatisticDataDB*, Il2CppObject*))(Il2CppBase() + 0x169AD3C))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::FishingStatisticDataDB* other) {
		return ((R (*)(FishingStatisticDataDB*, ProtoModels::FishingStatisticDataDB*))(Il2CppBase() + 0x169ADAC))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(FishingStatisticDataDB*))(Il2CppBase() + 0x169AF20))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(FishingStatisticDataDB*))(Il2CppBase() + 0x169B12C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(FishingStatisticDataDB*, uintptr_t))(Il2CppBase() + 0x169B190))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(FishingStatisticDataDB*))(Il2CppBase() + 0x169B488))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::FishingStatisticDataDB* other) {
		return ((R (*)(FishingStatisticDataDB*, ProtoModels::FishingStatisticDataDB*))(Il2CppBase() + 0x169B848))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(FishingStatisticDataDB*, uintptr_t))(Il2CppBase() + 0x169B93C))(this, input);
	}

};

}
